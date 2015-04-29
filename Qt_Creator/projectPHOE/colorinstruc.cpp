#include "colorinstruc.h"
#include "ui_colorinstruc.h"
#include "colorexam.h"

colorinstruc::colorinstruc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::colorinstruc)
{
    ui->setupUi(this);
    this->showFullScreen();
}

colorinstruc::~colorinstruc()
{
    delete ui;
}

void colorinstruc::on_cinstrucbakButton_clicked()
{
    //back to colordescr.cpp
    this->hide();
}

void colorinstruc::on_cinstrucbegButton_clicked()
{
//    ui->cinstrucbegButton->setText("COMPLETE");
//    ui->cinstrucbegButton->setEnabled(false);
    colorexam Colorexam;
    Colorexam.setModal(true);
    Colorexam.exec();
    ui->cinstrucbegButton->setEnabled(false);
    ui->cinstrucbegButton->setText("Completed");
}
