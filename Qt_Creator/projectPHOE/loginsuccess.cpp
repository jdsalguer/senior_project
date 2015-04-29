#include "loginsuccess.h"
#include "ui_loginsuccess.h"
#include "exammenu.h"

loginsuccess::loginsuccess(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginsuccess)
{
    ui->setupUi(this);
    this->showFullScreen();
}

loginsuccess::~loginsuccess()
{
    delete ui;
}

void loginsuccess::on_loginsucButton_clicked()
{
    exammenu Exammenu;
    Exammenu.setModal(true);
    Exammenu.exec();
    this->hide();
}
