#include "fieldinstruc.h"
#include "ui_fieldinstruc.h"
#include "fieldexam.h"

fieldinstruc::fieldinstruc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fieldinstruc)
{
    ui->setupUi(this);
    this->showFullScreen();
}

fieldinstruc::~fieldinstruc()
{
    delete ui;
}

void fieldinstruc::on_fieldinstrucbegButton_clicked()
{
    fieldexam Fieldexam;
    Fieldexam.setModal(true);
    Fieldexam.exec();
}

void fieldinstruc::on_fieldinstrucbakButton_clicked()
{
    //back to fielddescr.cpp
    this->hide();
}
