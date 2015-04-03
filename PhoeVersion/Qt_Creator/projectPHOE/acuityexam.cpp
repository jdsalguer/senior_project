#include "acuityexam.h"
#include "ui_acuityexam.h"

acuityexam::acuityexam(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::acuityexam)
{
    ui->setupUi(this);
}

acuityexam::~acuityexam()
{
    delete ui;
}
