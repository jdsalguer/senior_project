#include "ocularinstruc.h"
#include "ui_ocularinstruc.h"
#include "ocularexam.h"

ocularinstruc::ocularinstruc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ocularinstruc)
{
    ui->setupUi(this);
    this->showFullScreen();
}

ocularinstruc::~ocularinstruc()
{
    delete ui;
}

void ocularinstruc::on_ocuinstbackButton_clicked()
{
    //back to oculardescr.cpp
    this->hide();
}

void ocularinstruc::on_ocuinstbegButton_clicked()
{
    ocularexam Ocularexam;
    Ocularexam.setModal(true);
    Ocularexam.exec();
}
