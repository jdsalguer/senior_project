#include "fielddescr.h"
#include "ui_fielddescr.h"
#include "fieldinstruc.h"

fielddescr::fielddescr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fielddescr)
{
    ui->setupUi(this);
    this->showFullScreen();
}

fielddescr::~fielddescr()
{
    delete ui;
}

void fielddescr::on_fielddescrbakButton_clicked()
{
    //back to exammenu.cpp
    this->hide();
}

void fielddescr::on_fielddescrcontButton_clicked()
{
    fieldinstruc Fieldinstruc;
    Fieldinstruc.setModal(true);
    Fieldinstruc.exec();
}
