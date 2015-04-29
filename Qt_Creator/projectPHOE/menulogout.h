#ifndef MENULOGOUT_H
#define MENULOGOUT_H

#include <QDialog>

namespace Ui {
class menulogout;
}

class menulogout : public QDialog
{
    Q_OBJECT

public:
    explicit menulogout(QWidget *parent = 0);
    ~menulogout();

private slots:
    void on_logoutbackButton_clicked();

    void on_logout_outButton_clicked();

private:
    Ui::menulogout *ui;
};

#endif // MENULOGOUT_H
