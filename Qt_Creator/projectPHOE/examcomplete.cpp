#include "examcomplete.h"
#include "ui_examcomplete.h"

examComplete::examComplete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::examComplete)
{
    ui->setupUi(this);
    this->showFullScreen();
}

examComplete::~examComplete()
{
    delete ui;
}

void examComplete::on_okButton_clicked()
{
    this->hide();
}
