#ifndef LOGINSUCCESS_H
#define LOGINSUCCESS_H

#include <QDialog>

namespace Ui {
class loginsuccess;
}

class loginsuccess : public QDialog
{
    Q_OBJECT

public:
    explicit loginsuccess(QWidget *parent = 0);
    ~loginsuccess();

private:
    Ui::loginsuccess *ui;
};

#endif // LOGINSUCCESS_H
