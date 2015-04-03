#include "exammenu.h"
#include "ui_exammenu.h"
#include "fundusdescr.h"
#include "oculardescr.h"
#include "fielddescr.h"
#include "colordescr.h"
#include "acuitydescr.h"

exammenu::exammenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::exammenu)
{
    ui->setupUi(this);
}

exammenu::~exammenu()
{
    delete ui;
}

void exammenu::on_fundusexamButton_clicked()
{
    fundusdescr Fundusdescr;
    Fundusdescr.setModal(true);
    Fundusdescr.exec();
}

void exammenu::on_ocularexamButton_clicked()
{
    oculardescr Oculardescr;
    Oculardescr.setModal(true);
    Oculardescr.exec();
}

void exammenu::on_fieldsexamButton_clicked()
{
    fielddescr Fielddescr;
    Fielddescr.setModal(true);
    Fielddescr.exec();
}

void exammenu::on_colorexamButton_clicked()
{
    colordescr Colordescr;
    Colordescr.setModal(true);
    Colordescr.exec();
}

void exammenu::on_acuityexamButton_clicked()
{
    acuitydescr Acuitydescr;
    Acuitydescr.setModal(true);
    Acuitydescr.exec();
}
