#include "fundusinstruc.h"
#include "ui_fundusinstruc.h"
#include "fundusexam.h"

fundusinstruc::fundusinstruc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fundusinstruc)
{
    ui->setupUi(this);
    this->showFullScreen();
}

fundusinstruc::~fundusinstruc()
{
    delete ui;
}

void fundusinstruc::on_funinsbackButton_clicked()
{
    //back to fundusdescr.cpp
    this->hide();
}

void fundusinstruc::on_funinsbegButton_clicked()
{
    fundusexam Fundusexam;
    Fundusexam.setModal(true);
    Fundusexam.exec();
}
