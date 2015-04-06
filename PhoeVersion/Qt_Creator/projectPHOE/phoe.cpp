#include "phoe.h"
#include "ui_phoe.h"
#include "loginsuccess.h"
#include "loginerror.h"
#include "consent.h"
#include <QFile>
#include <QtDebug>
#include <QTextStream>

phoe::phoe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::phoe)
{
    ui->setupUi(this);
    this->showFullScreen();
    //temp login info
    ui->IDlineEdit->setText("Admin");
    ui->PASSlineEdit->setText("Password");
}

phoe::~phoe()
{
    delete ui;
}

void phoe::on_loginButton_clicked()
{
    QString ID = ui->IDlineEdit->text();
    QString Password = ui->PASSlineEdit->text();

    QFile file("accounts/"+ ID +".txt");
     if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
         return;
    QString Accounts = file.readAll();
    file.close();
    qDebug() << "ID: " + ID +" , Password: " + Password;
    QTextStream(stdout) << "ID: " + ID +" , Password: " + Password << endl;

    if (Accounts.contains("ID: " + ID + " Password: " + Password)){
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
