#include "newlogin.h"
#include "ui_newlogin.h"


newlogin::newlogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newlogin)
{
    ui->setupUi(this);
}

newlogin::~newlogin()
{
    delete ui;
}

void newlogin::on_newcanButton_clicked()
{
  //  window->show();
   // this->close();
}
