#include "oculardescr.h"
#include "ui_oculardescr.h"
#include "ocularinstruc.h"

oculardescr::oculardescr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::oculardescr)
{
    ui->setupUi(this);
}

oculardescr::~oculardescr()
{
    delete ui;
}

void oculardescr::on_ocudescrbackButton_clicked()
{
    //back to exammenu.cpp
}

void oculardescr::on_ocudescrconButton_clicked()
{
    ocularinstruc Ocularinstruc;
    Ocularinstruc.setModal(true);
    Ocularinstruc.exec();
}
