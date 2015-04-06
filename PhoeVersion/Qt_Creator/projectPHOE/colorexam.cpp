#include "colorexam.h"
#include "ui_colorexam.h"
#include <QTimer>
#include <sstream>
#include <QPixmap>


int plateNumber;


colorexam::colorexam(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::colorexam)
{
    ui->setupUi(this);
    this->showFullScreen();
    plateNumber = 1;
    QPixmap file("colorexamplates/Ishihara-Plate-01-38.jpg");
//    file.scaledToWidth(400);
//    file.scaledToHeight(400);
    ui->submitButton->setEnabled(false);
    ui->plateImage->setPixmap(file.scaled(350, 350, Qt::KeepAspectRatio));
    QTimer::singleShot(4000, this, SLOT(removeImage()));
}

void colorexam::removeImage()
{
    QPixmap file("");
    ui->plateImage->setPixmap(file);
    ui->submitButton->setEnabled(true);
}

colorexam::~colorexam()
{
    delete ui;
}

void colorexam::on_submitButton_clicked()
{
    if(plateNumber <= 38){
    plateNumber++;
    QString plate = QString::number(plateNumber);
    if(plateNumber < 10){
        QString filename = "colorexamplates/Ishihara-Plate-0"+plate+"-38.jpg";
        QPixmap file(filename);
        ui->plateImage->setPixmap(file.scaled(350, 350, Qt::KeepAspectRatio));
    }else{
        QString filename = "colorexamplates/Ishihara-Plate-"+plate+"-38.jpg";
        QPixmap file(filename);
        ui->plateImage->setPixmap(file.scaled(350, 350, Qt::KeepAspectRatio));
    }
    ui->countLabel->setText("Plate "+plate+" out of 38");
    QTimer::singleShot(4000, this, SLOT(removeImage()));
    ui->submitButton->setEnabled(false);
    }else{
        this->hide();
    }
}
