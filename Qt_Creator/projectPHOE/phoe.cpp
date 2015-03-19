#include "phoe.h"
#include "ui_phoe.h"
#include "loginsuccess.h"
#include "newlogin.h"

phoe::phoe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::phoe)
{
    ui->setupUi(this);
}

phoe::~phoe()
{
    delete ui;
}

void phoe::on_loginButton_clicked()
{
    loginsuccess Loginsuccess;
    Loginsuccess.setModal(true);
    Loginsuccess.exec();
}

void phoe::on_newButton_clicked()
{
    newlogin Newlogin;
    Newlogin.setModal(true);
    Newlogin.exec();
}
