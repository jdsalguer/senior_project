#include "consent.h"
#include "ui_consent.h"
#include "phoe.h"
#include "newlogin.h"

consent::consent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::consent)
{
    ui->setupUi(this);
    this->showFullScreen();
    ui->consentcontButton->setEnabled(false);
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
    //back to phoe.cpp
    this->hide();
}

void consent::on_agreecheckBox_toggled(bool checked)
{
    if(checked){
        ui->consentcontButton->setEnabled(true);
        ui->disagreecheckBox->setChecked(false);
    }else{
        ui->consentcontButton->setEnabled(false);
    }
}

void consent::on_disagreecheckBox_toggled(bool checked)
{
    if(checked){
        ui->agreecheckBox->setChecked(false);
        ui->consentcontButton->setEnabled(false);
    }
}
