#ifndef ACUITYDESCR_H
#define ACUITYDESCR_H

#include <QDialog>

namespace Ui {
class acuitydescr;
}

class acuitydescr : public QDialog
{
    Q_OBJECT

public:
    explicit acuitydescr(QWidget *parent = 0);
    ~acuitydescr();

private slots:
    void on_adescrbakButton_clicked();

    void on_adescrcontButton_clicked();

private:
    Ui::acuitydescr *ui;
};

#endif // ACUITYDESCR_H
