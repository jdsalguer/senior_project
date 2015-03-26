#ifndef FIELDINSTRUC_H
#define FIELDINSTRUC_H

#include <QDialog>

namespace Ui {
class fieldinstruc;
}

class fieldinstruc : public QDialog
{
    Q_OBJECT

public:
    explicit fieldinstruc(QWidget *parent = 0);
    ~fieldinstruc();

private slots:
    void on_fieldinstrucbegButton_clicked();

    void on_fieldinstrucbakButton_clicked();

private:
    Ui::fieldinstruc *ui;
};

#endif // FIELDINSTRUC_H
