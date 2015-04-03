#ifndef LOGINERROR_H
#define LOGINERROR_H

#include <QDialog>

namespace Ui {
class loginerror;
}

class loginerror : public QDialog
{
    Q_OBJECT

public:
    explicit loginerror(QWidget *parent = 0);
    ~loginerror();

private slots:
    void on_pushButton_clicked();

    void on_errorokButton_clicked();

private:
    Ui::loginerror *ui;
};

#endif // LOGINERROR_H
