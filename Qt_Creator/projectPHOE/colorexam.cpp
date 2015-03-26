#include "colorexam.h"
#include "ui_colorexam.h"

colorexam::colorexam(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::colorexam)
{
    ui->setupUi(this);
}

colorexam::~colorexam()
{
    delete ui;
}
