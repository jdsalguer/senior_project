#ifndef COLORDESCR_H
#define COLORDESCR_H

#include <QDialog>

namespace Ui {
class colordescr;
}

class colordescr : public QDialog
{
    Q_OBJECT

public:
    explicit colordescr(QWidget *parent = 0);
    ~colordescr();

private slots:
    void on_cdescrbakButton_clicked();

    void on_cdescrcontButton_clicked();

private:
    Ui::colordescr *ui;
};

#endif // COLORDESCR_H
