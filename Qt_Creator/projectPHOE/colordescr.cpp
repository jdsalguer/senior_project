#include "colordescr.h"
#include "ui_colordescr.h"
#include "colorinstruc.h"

colordescr::colordescr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::colordescr)
{
    ui->setupUi(this);
}

colordescr::~colordescr()
{
    delete ui;
}

void colordescr::on_cdescrbakButton_clicked()
{
    //back to exammenu.cpp
}

void colordescr::on_cdescrcontButton_clicked()
{
    colorinstruc Colorinstruc;
    Colorinstruc.setModal(true);
    Colorinstruc.exec();
}
