#ifndef NEWLOGIN_H
#define NEWLOGIN_H

#include <QDialog>

namespace Ui {
class newlogin;
}

class newlogin : public QDialog
{
    Q_OBJECT

public:
    explicit newlogin(QWidget *parent = 0);
    ~newlogin();

private slots:

    void on_newcanButton_clicked();

private:
    Ui::newlogin *ui;
};

#endif // NEWLOGIN_H
