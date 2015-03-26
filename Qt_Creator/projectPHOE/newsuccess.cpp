#include "newsuccess.h"
#include "ui_newsuccess.h"

newsuccess::newsuccess(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newsuccess)
{
    ui->setupUi(this);
}

newsuccess::~newsuccess()
{
    delete ui;
}

void newsuccess::on_cresuccontButton_clicked()
{
    //back to phoe.cpp
}
