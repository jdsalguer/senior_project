#include "fieldexam.h"
#include "ui_fieldexam.h"

fieldexam::fieldexam(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fieldexam)
{
    ui->setupUi(this);
    this->showFullScreen();
}

fieldexam::~fieldexam()
{
    delete ui;
}
