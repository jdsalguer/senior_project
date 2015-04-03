#include "newlogin.h"
#include "ui_newlogin.h"
#include "phoe.h"
#include "newsuccess.h"

newlogin::newlogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newlogin)
{
    ui->setupUi(this);
}

newlogin::~newlogin()
{
    delete ui;
}

void newlogin::on_newcanButton_clicked()
{
    //Back to phoe.cpp
}

void newlogin::on_newbakButton_clicked()
{
    //back to consent.cpp
}

void newlogin::on_newcreButton_clicked()
{
    newsuccess Newsuccess;
    Newsuccess.setModal(true);
    Newsuccess.exec();
}
