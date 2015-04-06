#include "loginerror.h"
#include "ui_loginerror.h"
#include "phoe.h"

loginerror::loginerror(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginerror)
{
    ui->setupUi(this);
    this->showFullScreen();
}

loginerror::~loginerror()
{
    delete ui;
}

void loginerror::on_pushButton_clicked()
{
    loginerror LoginError;
    LoginError.setModal(true);
    LoginError.exec();
}

void loginerror::on_errorokButton_clicked()
{
    //back to phoe.cpp
    this->hide();
}
