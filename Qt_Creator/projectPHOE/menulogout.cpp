#include "menulogout.h"
#include "ui_menulogout.h"
#include "exammenu.h"
#include "phoe.h"

menulogout::menulogout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menulogout)
{
    ui->setupUi(this);
}

menulogout::~menulogout()
{
    delete ui;
}

void menulogout::on_logoutbackButton_clicked()
{
    exammenu Exammenu;
    Exammenu.setModal(true);
    Exammenu.exec();
}

void menulogout::on_logout_outButton_clicked()
{
    //back to phoe login screen
}
