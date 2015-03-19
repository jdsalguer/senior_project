#include "loginsuccess.h"
#include "ui_loginsuccess.h"

loginsuccess::loginsuccess(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginsuccess)
{
    ui->setupUi(this);
}

loginsuccess::~loginsuccess()
{
    delete ui;
}
