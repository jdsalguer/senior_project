#ifndef OCULARDESCR_H
#define OCULARDESCR_H

#include <QDialog>

namespace Ui {
class oculardescr;
}

class oculardescr : public QDialog
{
    Q_OBJECT

public:
    explicit oculardescr(QWidget *parent = 0);
    ~oculardescr();

private slots:
    void on_ocudescrbackButton_clicked();

    void on_ocudescrconButton_clicked();

private:
    Ui::oculardescr *ui;
};

#endif // OCULARDESCR_H
