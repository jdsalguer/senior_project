#include "colorinstruc.h"
#include "ui_colorinstruc.h"
#include "colorexam.h"

colorinstruc::colorinstruc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::colorinstruc)
{
    ui->setupUi(this);
}

colorinstruc::~colorinstruc()
{
    delete ui;
}

void colorinstruc::on_cinstrucbakButton_clicked()
{
    //back to colordescr.cpp
}

void colorinstruc::on_cinstrucbegButton_clicked()
{
    colorexam Colorexam;
    Colorexam.setModal(true);
    Colorexam.exec();
}
