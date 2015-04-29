#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <QDialog>

namespace Ui {
class Keyboard;
}

class Keyboard : public QDialog
{
    Q_OBJECT

public:
    explicit Keyboard(QWidget *parent = 0);
    ~Keyboard();

private slots:
    void on_testButton_clicked();

    void sendText();

private:
    Ui::Keyboard *ui;
};

#endif // KEYBOARD_H
