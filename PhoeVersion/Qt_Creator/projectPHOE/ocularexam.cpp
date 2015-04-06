#include "ocularexam.h"
#include "ui_ocularexam.h"

ocularexam::ocularexam(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ocularexam)
{
    ui->setupUi(this);
    this->showFullScreen();
}

ocularexam::~ocularexam()
{
    delete ui;
}
