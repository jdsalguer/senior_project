#include "consent.h"
#include "ui_consent.h"
#include "phoe.h"
#include "newlogin.h"

consent::consent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::consent)
{
    ui->setupUi(this);
}

consent::~consent()
{
    delete ui;
}

void consent::on_consentcontButton_clicked()
{
    newlogin Newlogin;
    Newlogin.setModal(true);
    this->hide();
    Newlogin.exec();
}

void consent::on_consentbackButton_clicked()
{
    this->hide();
}
