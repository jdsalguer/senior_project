#include "fundusexam.h"
#include "ui_fundusexam.h"

fundusexam::fundusexam(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fundusexam)
{
    ui->setupUi(this);
}

fundusexam::~fundusexam()
{
    delete ui;
}
