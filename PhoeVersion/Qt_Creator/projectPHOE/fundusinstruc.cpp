#include "fundusinstruc.h"
#include "ui_fundusinstruc.h"
#include "fundusexam.h"

fundusinstruc::fundusinstruc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fundusinstruc)
{
    ui->setupUi(this);
}

fundusinstruc::~fundusinstruc()
{
    delete ui;
}

void fundusinstruc::on_funinsbackButton_clicked()
{
    //back to fundusdescr.cpp
}

void fundusinstruc::on_funinsbegButton_clicked()
{
    fundusexam Fundusexam;
    Fundusexam.setModal(true);
    Fundusexam.exec();
}
