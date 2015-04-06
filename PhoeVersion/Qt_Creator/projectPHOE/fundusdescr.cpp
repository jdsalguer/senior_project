#include "fundusdescr.h"
#include "ui_fundusdescr.h"
#include "fundusinstruc.h"

fundusdescr::fundusdescr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fundusdescr)
{
    ui->setupUi(this);
    this->showFullScreen();
}

fundusdescr::~fundusdescr()
{
    delete ui;
}

void fundusdescr::on_fundesbackButton_clicked()
{
    //back to exammenu.cpp
    this->hide();
}

void fundusdescr::on_fundesconButton_clicked()
{
    fundusinstruc Fundusinstruc;
    Fundusinstruc.setModal(true);
    Fundusinstruc.exec();
}
