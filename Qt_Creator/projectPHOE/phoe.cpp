#include "phoe.h"
#include "ui_phoe.h"
#include "loginsuccess.h"
#include "loginerror.h"
#include "consent.h"
#include <QFile>
#include <QtDebug>
#include <QTextStream>
#include "keyboard.h"

phoe::phoe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::phoe)
{
    ui->setupUi(this);
    this->showFullScreen();
    //temp login info
    ui->IDlineEdit->setText("Admin");
    ui->PASSlineEdit->setText("Password");
//    connect(this, SIGNAL(keySignal(QString text)), this, SLOT(appendText()));

}

phoe::~phoe()
{
    delete ui;
}

void phoe::on_loginButton_clicked()
{
    QString ID = ui->IDlineEdit->text();
    QString Password = ui->PASSlineEdit->text();

//    QFile file("accounts/"+ ID +".txt");
    QFile file("accounts/"+ ID +"/"+ID+".txt");
     if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
//         loginerror lerror;
//         lerror.setModal(true);
//         lerror.exec();
         return;
     }
    QString Accounts = file.readAll();
    file.close();
    qDebug() << "ID: " + ID +" , Password: " + Password;
//    QTextStream(stdout) << "ID: " + ID +" , Password: " + Password << endl;

    QFile CurrentlyLoggedInFile("currentPatient.txt");
    if (!CurrentlyLoggedInFile.open(QIODevice::WriteOnly | QIODevice::Text)){
        qDebug() << "i failed";
        return;
    }

    if (Accounts.contains("ID: " + ID + " Password: " + Password)){
        QString user = ID;

        QTextStream out(&CurrentlyLoggedInFile);
        out << user;
        CurrentlyLoggedInFile.close();

        loginsuccess Loginsuccess;
        Loginsuccess.setModal(true);
        Loginsuccess.exec();
    }else{
        loginerror Loginerror;
        Loginerror.setModal(true);
        Loginerror.exec();
    }

}

void phoe::on_newButton_clicked()
{
    consent Consent;
    Consent.setModal(true);
    Consent.exec();
}

void phoe::keySignal(QString text)
{
    ui->IDlineEdit->setText(text);
    ui->label->setText(text);
    qDebug() << text;
}

void phoe::setText()
{

}

void phoe::on_kb_clicked()
{
    Keyboard keyboard;
    keyboard.setModal(true);
    keyboard.exec();
}
