#ifndef FUNDUSINSTRUC_H
#define FUNDUSINSTRUC_H

#include <QDialog>

namespace Ui {
class fundusinstruc;
}

class fundusinstruc : public QDialog
{
    Q_OBJECT

public:
    explicit fundusinstruc(QWidget *parent = 0);
    ~fundusinstruc();

private slots:
    void on_funinsbackButton_clicked();

    void on_funinsbegButton_clicked();

private:
    Ui::fundusinstruc *ui;
};

#endif // FUNDUSINSTRUC_H
