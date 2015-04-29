#include "fundusexam.h"
#include "ui_fundusexam.h"
#include <QDebug>
#include <Camera.h>
#include <examcomplete.h>


fundusexam::fundusexam(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fundusexam)
{
    ui->setupUi(this);
    this->showFullScreen();
    myPlayer = new Camera();
    QObject::connect(myPlayer, SIGNAL(processedImage(QImage)),
                              this, SLOT(updatePlayerUI(QImage)));
    ui->leftButton->setEnabled(false);
}

fundusexam::~fundusexam()
{
    delete ui;
}

void fundusexam::on_startButton_clicked()
{
//    myPlayer->Play();

    if (myPlayer->isStopped())
    {
        myPlayer->Play();
//        ui->startButton->setText(tr("Stop"));
        ui->endButton->setEnabled(false);
        ui->startButton->setEnabled(false);
        ui->stopButton->setEnabled(true);
    }
}

void fundusexam::on_captureButton_clicked()
{
    ui->endButton->setEnabled(false);
    myPlayer->setTakePic(true);
    ui->startButton->setText(tr("Play"));
    ui->endButton->setEnabled(true);

}

void fundusexam::updatePlayerUI(QImage img)
{
    if (!img.isNull())
    {
        QPixmap px = QPixmap::fromImage(img);
        ui->imageLabel->setAlignment(Qt::AlignCenter);
        ui->imageLabel->setPixmap(px.scaled(ui->imageLabel->size(), Qt::KeepAspectRatio));

    }
}

void fundusexam::on_leftButton_clicked()
{
    myPlayer->setEye("Left");
    myPlayer->Stop();
    ui->eyeLabel->setText("Current Eye: Left Eye");
    ui->leftButton->setEnabled(false);
    ui->rightButton->setEnabled(true);
//    myPlayer->Play();
//    ui->startButton->setText(tr("Play"));
    ui->startButton->setEnabled(true);
    ui->stopButton->setEnabled(false);

}

void fundusexam::on_rightButton_clicked()
{
    myPlayer->setEye("Right");
    myPlayer->Stop();
    ui->eyeLabel->setText("Current Eye: Right Eye");
    ui->leftButton->setEnabled(true);
    ui->rightButton->setEnabled(false);
//    myPlayer->Play();
//    ui->startButton->setText(tr("Play"));
    ui->startButton->setEnabled(true);
    ui->stopButton->setEnabled(false);

}

void fundusexam::on_endButton_clicked()
{
    examComplete examcomplete;
    examcomplete.setModal(true);
    examcomplete.exec();
    this->hide();
}

void fundusexam::on_stopButton_clicked()
{
    if(!myPlayer->isStopped())
        {
            myPlayer->Stop();
//            ui->startButton->setText(tr("Play"));
            ui->endButton->setEnabled(true);
            ui->startButton->setEnabled(true);
            ui->stopButton->setEnabled(false);
        }
}
