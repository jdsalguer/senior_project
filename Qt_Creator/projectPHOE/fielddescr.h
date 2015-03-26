#ifndef FIELDDESCR_H
#define FIELDDESCR_H

#include <QDialog>

namespace Ui {
class fielddescr;
}

class fielddescr : public QDialog
{
    Q_OBJECT

public:
    explicit fielddescr(QWidget *parent = 0);
    ~fielddescr();

private slots:
    void on_fielddescrbakButton_clicked();

    void on_fielddescrcontButton_clicked();

private:
    Ui::fielddescr *ui;
};

#endif // FIELDDESCR_H
