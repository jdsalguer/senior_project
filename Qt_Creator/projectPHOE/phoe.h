#ifndef PHOE_H
#define PHOE_H

#include <QMainWindow>

namespace Ui {
class phoe;
}

class phoe : public QMainWindow
{
    Q_OBJECT

public:
    explicit phoe(QWidget *parent = 0);
    ~phoe();

private slots:
    void on_loginButton_clicked();

private:
    Ui::phoe *ui;
};

#endif // PHOE_H
