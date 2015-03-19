#include "phoe.h"
#include "ui_phoe.h"

phoe::phoe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::phoe)
{
    ui->setupUi(this);
}

phoe::~phoe()
{
    delete ui;
}

void phoe::on_loginButton_clicked()
{

}
