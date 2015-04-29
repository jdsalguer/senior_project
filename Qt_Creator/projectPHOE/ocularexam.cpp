#include "ocularexam.h"
#include "ui_ocularexam.h"
#include <QTimer>
#include <QPropertyAnimation>
#include <QLabel>
#include <examcomplete.h>
#include <Camera.h>

int count;
QString direction;

ocularexam::ocularexam(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ocularexam)
{
    ui->setupUi(this);
    this->showFullScreen();

    myCamera = new Camera();

    ui->fixationPoint->setProperty("X", 385);
    ui->fixationPoint->setProperty("Y", 210);
    count = 1;
    QPixmap file("snellenletters/O.png");
    ui->fixationPoint->setPixmap(file.scaled(30, 30, Qt::KeepAspectRatio));

//    p = new QLabel("poin");
//    point =  new QLabel("point");
//    point.setPixmap(file);
//    point.setGeometry(QRect(250, 150, 30, 30));
//    ui->cointainerLayout->insertWidget(0, p, 0, Qt::AlignCenter);


     QPixmap px("snellenletters/O.png");
     QLabel *p = new QLabel("point");
     p->setPixmap(px.scaled(ui->fixationPoint->size(), Qt::KeepAspectRatio));
     ui->cointainerLayout->insertWidget(0, p);
     p->setGeometry(QRect(385, 210, 30, 30));
     mAnimation = new QPropertyAnimation(p, "geometry");

     mAnimation->setDuration(500);
     mAnimation->setStartValue(QRect(385, 210, 30, 30));
     mAnimation->setEndValue(QRect(385, 210, 30, 30));
     mAnimation->start();

}

ocularexam::~ocularexam()
{
    delete ui;
}

void ocularexam::on_continueButton_clicked()
{
    ui->instructionLabel->setText("Fixation point will move in 5 seconds");
    ui->continueButton->setVisible(false);
    if (count == 1){
        direction = "Left";
    }else if(count == 2){
        direction = "Right";
    }else if(count == 3){
        direction = "Up";
    }else if(count == 4){
        direction = "Down";
    }else if(count == 5){

        examComplete examcomplete;
        examcomplete.setModal(true);
        examcomplete.exec();
        this->hide();
    }

    count++;
    QTimer::singleShot(5000, this, SLOT(movePoint()));
}

void ocularexam::movePoint()
{
//    QLabel point;
//    QString direction = "left";

    myCamera->captureAFew(direction);

    ui->instructionLabel->setText("Press continue when the chin rest is correctly configured.");
    ui->instructionLabel->setVisible(false);




//    QPushButton *button = new QPushButton("Animated Button", this);
////    button->show();

//    mAnimation = new QPropertyAnimation(button, "geometry");


//    ui->fixationPoint->setVisible(false);
    if(direction.compare("Left") == 0){
//        QPushButton button("Animated Button");
//        button.show();
//        QLabel point;
//        point.setPixmap(file);
//        point.show();

        mAnimation->setDuration(2000);
        mAnimation->setStartValue(QRect(385, 210, 30, 30));
        mAnimation->setEndValue(QRect(207, 210, 30, 30));

//        mAnimation->setKeyValueAt(0, QRect(385, 210, 30, 30));
//        mAnimation->setKeyValueAt(0.9, QRect(207, 210, 30, 30));
//        mAnimation->setKeyValueAt(1, QRect(385, 210, 30, 30));


        mAnimation->start();

//        ui->fixationPoint->move(207, 210); //178 px left
    }else if(direction.compare("Right") == 0){
//        QLabel point;
//        point.setPixmap(file);
//        point.show();

//        QPropertyAnimation animation(p, "geometry");
//        QPropertyAnimation animation(&point, "geometry");
        mAnimation->setDuration(2000);
        mAnimation->setStartValue(QRect(385, 210, 30, 30));
        mAnimation->setEndValue(QRect(570, 210, 30, 30));

        mAnimation->start();


//        ui->fixationPoint->move(570, 210); //185 px right
    }else if(direction.compare("Up")== 0){
//        QLabel point;
//        point.setPixmap(file);
//        point.show();
//        QPropertyAnimation animation(p, "geometry");
        mAnimation->setDuration(2000);
        mAnimation->setStartValue(QRect(385, 210, 30, 30));
        mAnimation->setEndValue(QRect(385, 70, 30, 30));
        mAnimation->start();
//         ui->fixationPoint->move(385, 70); //140

    }else if(direction.compare("Down")== 0){
//        QLabel point;
//        point.setPixmap(file);
//        point.show();
//        QPropertyAnimation animation(p, "geometry");
        mAnimation->setDuration(2000);
        mAnimation->setStartValue(QRect(385, 70, 30, 30));
        mAnimation->setEndValue(QRect(385, 340, 30, 30));
//        mAnimation->setKeyValueAt(0.9, QRect(385, 340, 30, 30));

        mAnimation->start();
        ui->instructionLabel->setText("Press the button below to end the exam.");
//         ui->fixationPoint->move(385, 210); //264
    }


    QTimer::singleShot(3500, this, SLOT(resetPoint()));

//    ui->instructionLabel->setVisible(true);
//    ui->continueButton->setVisible(true);
}

void ocularexam::resetPoint()
{

    myCamera->Stop();
//    ui->fixationPoint->move(385, 210);

//    if(direction.compare("up") == 0){
////        ui->fixationPoint->setGeometry(QRect(385, 76, 30, 30));
//        ui->fixationPoint->setProperty("X", 385);
//        ui->fixationPoint->setProperty("Y", 76);
////        ui->fixationPoint->move(385, 76);

//    }


    mAnimation->setDuration(500);

//    if(direction.compare("down") == 0){
//        mAnimation->setStartValue(QRect(385, 76, 30, 30));
//    }else{
//        mAnimation->setStartValue(QRect(385, 210, 30, 30));
//    }

    if(direction.compare("Up") == 0){
        ui->fixationPoint->move(385, 70);
        mAnimation->setStartValue(QRect(385, 70, 30, 30));
        mAnimation->setEndValue(QRect(385, 70, 30, 30));
    }else{
        ui->fixationPoint->move(385, 210);
        mAnimation->setStartValue(QRect(385, 210, 30, 30));
        mAnimation->setEndValue(QRect(385, 210, 30, 30));
    }
    mAnimation->start();

    ui->instructionLabel->setVisible(true);
    ui->continueButton->setVisible(true);
}
