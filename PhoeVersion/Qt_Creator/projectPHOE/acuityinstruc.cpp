#include "acuityinstruc.h"
#include "ui_acuityinstruc.h"
#include "acuityexam.h"

acuityinstruc::acuityinstruc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::acuityinstruc)
{
    ui->setupUi(this);
}

acuityinstruc::~acuityinstruc()
{
    delete ui;
}

void acuityinstruc::on_ainstrucbakButton_clicked()
{
    //back to acuitydescr.cpp
}

void acuityinstruc::on_ainstrucbegButton_clicked()
{
    acuityexam Acuityexam;
    Acuityexam.setModal(true);
    Acuityexam.exec();
}
