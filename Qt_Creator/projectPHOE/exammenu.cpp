#include "exammenu.h"
#include "ui_exammenu.h"

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
