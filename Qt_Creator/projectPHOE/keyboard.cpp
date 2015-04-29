#include "keyboard.h"
#include "phoe.h"
#include "ui_keyboard.h"

Keyboard::Keyboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Keyboard)
{
    ui->setupUi(this);
    connect(ui->testButton, SIGNAL(clicked()), this, SLOT(sendText()));
}

Keyboard::~Keyboard()
{
    delete ui;
}

void Keyboard::on_testButton_clicked()
{

}


void Keyboard::sendText()
{
    QString text = "test";
    phoe phoe;
    emit phoe.keySignal(text);
}
