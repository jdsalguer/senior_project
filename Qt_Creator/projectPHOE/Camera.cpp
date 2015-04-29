#include "Camera.h"
#include <QDebug>
#include <QFile>

int imageCount;
QString dir;
Camera::Camera(QObject *parent)
 : QThread(parent)
{
    stop = true;
    frameCount = 0;
    takePic = false;
    isafew = false;
    eye = "Left";
    imageCount = 0;
    dir = "Left";
}

Camera::~Camera()
{
    mutex.lock();
    stop = true;
    capture.release();
    condition.wakeOne();
    mutex.unlock();
    wait();
}
void Camera::Stop()
{
    isafew = false;
    stop = true;
    capture.release();
}
void Camera::msleep(int ms){
    struct timespec ts = { ms / 1000, (ms % 1000) * 1000 * 1000 };
    nanosleep(&ts, NULL);
}
bool Camera::isStopped() const{
    return this->stop;
}

void Camera::setEye(QString di)
{
    eye = di;
}

bool Camera::loadVideo(string filename) {
    capture.open(0);
    qDebug() << "Format Changed to MJPG? " << capture.set(CV_CAP_PROP_FOURCC ,CV_FOURCC('M', 'J', 'P', 'G') );
//    qDebug() << "Format Changed to YUYV? " << capture.set(CV_CAP_PROP_FOURCC ,CV_FOURCC('Y', 'U', 'Y', 'V') );
    qDebug() << "Width set? " << capture.set(CV_CAP_PROP_FRAME_WIDTH ,320);
    qDebug() << "Height set? " << capture.set(CV_CAP_PROP_FRAME_HEIGHT ,240);

    if (capture.isOpened())
    {
//        frameRate = (int) capture.get(CV_CAP_PROP_FPS);
        return true;
    }
    else
        return false;
}

void Camera::setTakePic(bool take)
{
    takePic = take;
    qDebug() << "takePic: " << takePic;
}

void Camera::Play()
{
//    if(eye == "Left"){
//        capture.open(0);
//    }else if(eye == "Right"){
//        capture.open(1);
//    }

    if(eye == "Left"){
        qDebug() << "Cam opened? " << capture.open(0);
    }else if(eye == "Right"){
        qDebug() << "Cam opened? " << capture.open(1);
    }else{
        qDebug() << "Cam opened? " << capture.open(0);
        qDebug() << "eye = " << eye;
    }

    qDebug() << "Format Changed to MJPG? " << capture.set(CV_CAP_PROP_FOURCC ,CV_FOURCC('M', 'J', 'P', 'G') );
//    qDebug() << "Format Changed to YUYV? " << capture.set(CV_CAP_PROP_FOURCC ,CV_FOURCC('Y', 'U', 'Y', 'V') );
    if(isafew){
        qDebug() << "Width set? " << capture.set(CV_CAP_PROP_FRAME_WIDTH ,1280);
        qDebug() << "Height set? " << capture.set(CV_CAP_PROP_FRAME_HEIGHT ,720);
    }else{
        qDebug() << "Width set? " << capture.set(CV_CAP_PROP_FRAME_WIDTH ,320);
        qDebug() << "Height set? " << capture.set(CV_CAP_PROP_FRAME_HEIGHT ,240);
    }


//    qDebug() << "pixel format: " << capture.get(CV_CAP_PROP_FOURCC);
//    qDebug() << "brightness: " << capture.get(CV_CAP_PROP_BRIGHTNESS);
//    qDebug() << "contrast: " << capture.get(CV_CAP_PROP_CONTRAST);
//    qDebug() << "saturation: " << capture.get(CV_CAP_PROP_SATURATION);
//    qDebug() << "hue: " << capture.get(CV_CAP_PROP_HUE);
//    qDebug() << "gamma: " << capture.get(CV_CAP_PROP_GAMMA);
//    qDebug() << "gain: " << capture.get(CV_CAP_PROP_GAIN);
//    qDebug() << "sharpness: " << capture.get(CV_CAP_PROP_SHARPNESS);
//    qDebug() << "backlight compensation: " << capture.get(CV_CAP_PROP_BACKLIGHT);
//    qDebug() << "exposure_absolute: " << capture.get(CV_CAP_PROP_EXPOSURE);
//    qDebug() << "Frame size : " << capture.get(CV_CAP_PROP_FRAME_WIDTH) << " x " << capture.get(CV_CAP_PROP_FRAME_HEIGHT);



    if (!isRunning()) {
        if (isStopped()){
            stop = false;
        }
        start(LowPriority);
    }
}

void Camera::run()
{

    int delay = (1000/15);
    while(!stop && !isafew){
        Mat frame;
        Mat RGBframe;
        frameCount++;
        if(takePic){
            qDebug() << "take pic";
//            qDebug() << "Width set? " << capture.set(CV_CAP_PROP_FRAME_WIDTH ,2048.0);
//            qDebug() << "Height set? " << capture.set(CV_CAP_PROP_FRAME_HEIGHT ,1536.0);
            if (!capture.read(frame))
            {
                stop = true;
            }

//            cv::cvtColor(frame, RGBframe, CV_BGR2RGB);
//            imwrite("/media/rootfs/capture.jpg", RGBframe);
//            img = QImage(((const unsigned char*) RGBframe.data),RGBframe.cols,RGBframe.rows, RGBframe.step, QImage::Format_RGB888);

//            emit processedImage(img);
            stop = true;
            takePic = false;
            capture.release();
            this->msleep(delay);
            captureImage();
            break;
        }
    //    QImage img;
            if (!capture.read(frame))
            {
                stop = true;
            }
    //        if (frame.channels()== 3){
    //            qDebug() << "rgb fram data";

                cv::cvtColor(frame, RGBframe, CV_BGR2RGB);
                img = QImage(((const unsigned char*) RGBframe.data),RGBframe.cols,RGBframe.rows, RGBframe.step, QImage::Format_RGB888);
    //            QImage img = QImage((const unsigned char*)(desframe.data), desframe.cols, desframe.rows, desframe.step, QImage::Format_RGB888);

    //            img = QImage(RGBframe.data,RGBframe.cols,RGBframe.rows, RGBframe.step, QImage::Format_RGB888);

    //        }
    //        else
    //        {
    //            qDebug() << "reg fram data";
    //            img = QImage((const unsigned char*)(frame.data),
    //                                 frame.cols,frame.rows,QImage::Format_Indexed8);
    //        }

            emit processedImage(img);
            this->msleep(delay);
    }

    while(!stop && isafew){
        Mat frame;
        Mat RGBframe;
        frameCount++;
        imageCount++;
        if(takePic){
            qDebug() << "take pic";

            if (!capture.read(frame))
            {
                stop = true;
            }

            stop = true;
            takePic = false;
            capture.release();
            this->msleep(delay);
            captureImage();
            break;
        }
        if (!capture.read(frame))
        {
            stop = true;
        }

            cv::cvtColor(frame, RGBframe, CV_BGR2RGB);

            QFile currentUser("currentPatient.txt");
            if (!currentUser.open(QIODevice::ReadOnly | QIODevice::Text)){
                qDebug() << "i failed";
            }
            QString userr = currentUser.readAll();
            currentUser.close();
            qDebug() << userr;

            String filepath = "/media/rootfs/"+userr.toStdString()+"/OcularMovements/"+dir.toStdString()+"/"+QString::number(imageCount).toStdString()+".jpg";

            if(frame.data)
            {
                qDebug("Image has data!");
        //        frame = frame + Scalar(75, 75, 75);
                imwrite(filepath, frame);
            }

        this->msleep(delay);
    }
    qDebug() << "FrameCount: " << frameCount;
    frameCount = 0;
    capture.release();

}

QImage Camera::captureImage()
{
    //    VideoCapture cam;
        if(eye == "Left"){
            qDebug() << "Cam opened? " << capture.open(0);
        }else if(eye == "Right"){
            qDebug() << "Cam opened? " << capture.open(1);
        }

        qDebug() << "Format Changed to MJPG? " << capture.set(CV_CAP_PROP_FOURCC ,CV_FOURCC('M', 'J', 'P', 'G') );
    //    qDebug() << "Width set? " << capture.set(CV_CAP_PROP_FRAME_WIDTH ,1024);
    //    qDebug() << "Height set? " << capture.set(CV_CAP_PROP_FRAME_HEIGHT ,768);
        qDebug() << "Width set? " << capture.set(CV_CAP_PROP_FRAME_WIDTH ,2048.0);
        qDebug() << "Height set? " << capture.set(CV_CAP_PROP_FRAME_HEIGHT ,1536.0);
//        qDebug() << "Brightness set? " << capture.set(CV_CAP_PROP_BRIGHTNESS, brightness);

        qDebug() << "pixel format: " << capture.get(CV_CAP_PROP_FOURCC);
        qDebug() << "brightness: " << capture.get(CV_CAP_PROP_BRIGHTNESS);
        qDebug() << "contrast: " << capture.get(CV_CAP_PROP_CONTRAST);
        qDebug() << "saturation: " << capture.get(CV_CAP_PROP_SATURATION);
        qDebug() << "hue: " << capture.get(CV_CAP_PROP_HUE);
        qDebug() << "gamma: " << capture.get(CV_CAP_PROP_GAMMA);
        qDebug() << "gain: " << capture.get(CV_CAP_PROP_GAIN);
        qDebug() << "sharpness: " << capture.get(CV_CAP_PROP_SHARPNESS);
        qDebug() << "backlight compensation: " << capture.get(CV_CAP_PROP_BACKLIGHT);
        qDebug() << "exposure_absolute: " << capture.get(CV_CAP_PROP_EXPOSURE);
        qDebug() << "Frame size : " << capture.get(CV_CAP_PROP_FRAME_WIDTH) << " x " << capture.get(CV_CAP_PROP_FRAME_HEIGHT);

        qDebug() << "Recording.";
        Mat frame;
        Mat desframe;
        qDebug() << "Made frame.";
        capture.read(frame);

        QFile currentUser("currentPatient.txt");
        if (!currentUser.open(QIODevice::ReadOnly | QIODevice::Text)){
            qDebug() << "i failed";
        }
        QString userr = currentUser.readAll();
        currentUser.close();
        qDebug() << userr;

        String filepath = "/media/rootfs/"+userr.toStdString()+"/Fundus/"+eye.toStdString()+"_Fundus.jpg";

        if(frame.data)
        {
            qDebug("Image has data!");
    //        frame = frame + Scalar(75, 75, 75);
            imwrite(filepath, frame);
        }

        cv::cvtColor(frame, desframe, CV_BGR2RGB);
        if(desframe.data){
            qDebug()<< "There is data";
        }
    //    QImage img = QImage((const unsigned char*)(desframe.data), desframe.cols, desframe.rows, QImage::Format_RGB888);
        QImage img = QImage((const unsigned char*)(desframe.data), desframe.cols, desframe.rows, desframe.step, QImage::Format_RGB888);

    //    qDebug() << img.isNull();

        capture.release();
        return img;
}

void Camera::captureAFew(QString dirr)
{
    isafew = true;
    this->Play();
    dir = dirr;
}
