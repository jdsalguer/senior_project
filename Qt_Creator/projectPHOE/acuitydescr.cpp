#include "acuitydescr.h"
#include "ui_acuitydescr.h"
#include "acuityinstruc.h"

acuitydescr::acuitydescr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::acuitydescr)
{
    ui->setupUi(this);
}

acuitydescr::~acuitydescr()
{
    delete ui;
}

void acuitydescr::on_adescrbakButton_clicked()
{
    //back to exammenu.cpp
}

void acuitydescr::on_adescrcontButton_clicked()
{
    acuityinstruc Acuityinstruc;
    Acuityinstruc.setModal(true);
    Acuityinstruc.exec();
}
