#include "colorexam.h"
#include "ui_colorexam.h"
#include <QTimer>
#include <sstream>
#include <QDebug>
#include <QPixmap>
#include <QFile>
#include <examcomplete.h>


int plateNumber;
QString colorResults;


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
    ui->plateImage->lower();
    ui->submitButton->setEnabled(true);
}

colorexam::~colorexam()
{
    delete ui;
}

void colorexam::on_submitButton_clicked()
{
    if(plateNumber !=38){
        QString answer = "Plate " + QString::number(plateNumber) + ":\t"+ ui->answerEdit->text();
        colorResults.append(answer + "\n");
    }
    ui->answerEdit->setText("");
    if(plateNumber < 38){
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
        ui->plateImage->raise();
        ui->countLabel->setText("Plate "+plate+" out of 38");
        QTimer::singleShot(4000, this, SLOT(removeImage()));
        ui->submitButton->setEnabled(false);
    }else{
        QFile currentUser("currentPatient.txt");
        if (!currentUser.open(QIODevice::ReadOnly | QIODevice::Text)){
            qDebug() << "i failed";
            return;
        }
        QString user = currentUser.readAll();
        currentUser.close();
        qDebug() << user;


        QFile colorReport("accounts/"+user+"/"+user+"_ColorReport.txt");
        if (!colorReport.open(QIODevice::WriteOnly | QIODevice::Text)){
            qDebug() << "i failed";
            return;
        }
        QTextStream out(&colorReport);
        out << colorResults;
        colorReport.close();



        QFile report("accounts/"+user+"/"+user+"_Report.txt");
        if (!report.open(QIODevice::ReadWrite | QIODevice::Text)){
            qDebug() << "i failed";
            return;
        }

        QString PatientReport = report.readAll();
//        qDebug() << PatientReport;
        PatientReport = PatientReport.replace(QString("{ColorExamResults}"), colorResults);
        qDebug() << PatientReport;
//        report.write(PatientReport);
        report.seek(0);
        report.write(PatientReport.toUtf8());
//        QTextStream out(&report);
//        out.PatientReport;
        report.close();

        examComplete examcomplete;
        examcomplete.setModal(true);
        examcomplete.exec();
        this->hide();
    }
    
}

void colorexam::on_oneButton_clicked()
{
    ui->answerEdit->setText(ui->answerEdit->text() + "1");
}

void colorexam::on_twoButton_clicked()
{
    ui->answerEdit->setText(ui->answerEdit->text() + "2");
}

void colorexam::on_threeButton_clicked()
{
    ui->answerEdit->setText(ui->answerEdit->text() + "3");
}

void colorexam::on_fourButton_clicked()
{
    ui->answerEdit->setText(ui->answerEdit->text() + "4");
}

void colorexam::on_fiveButton_clicked()
{
    ui->answerEdit->setText(ui->answerEdit->text() + "5");
}

void colorexam::on_sixButton_clicked()
{
    ui->answerEdit->setText(ui->answerEdit->text() + "6");
}

void colorexam::on_sevenButton_clicked()
{
    ui->answerEdit->setText(ui->answerEdit->text() + "7");
}

void colorexam::on_eightButton_clicked()
{
    ui->answerEdit->setText(ui->answerEdit->text() + "8");
}

void colorexam::on_nineButton_clicked()
{
    ui->answerEdit->setText(ui->answerEdit->text() + "9");
}

void colorexam::on_delButton_clicked()
{
    QString answer = ui->answerEdit->text();
    answer.chop(1);
    ui->answerEdit->setText(answer);
}

void colorexam::on_zeroButton_clicked()
{
    ui->answerEdit->setText(ui->answerEdit->text() + "0");
}

void colorexam::on_nothingButton_clicked()
{
    ui->answerEdit->setText("Nothing");
}

void colorexam::on_endTestButton_clicked()
{
 //fill in rest of plate results and end test
    plateNumber = 37;
//    qDebug() << plateNumber;
}
