#include "acuityexam.h"
#include "ui_acuityexam.h"

acuityexam::acuityexam(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::acuityexam)
{
    ui->setupUi(this);
    this->showFullScreen();
}

acuityexam::~acuityexam()
{
    delete ui;
}
