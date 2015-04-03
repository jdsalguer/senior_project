#ifndef COLORINSTRUC_H
#define COLORINSTRUC_H

#include <QDialog>

namespace Ui {
class colorinstruc;
}

class colorinstruc : public QDialog
{
    Q_OBJECT

public:
    explicit colorinstruc(QWidget *parent = 0);
    ~colorinstruc();

private slots:
    void on_cinstrucbakButton_clicked();

    void on_cinstrucbegButton_clicked();

private:
    Ui::colorinstruc *ui;
};

#endif // COLORINSTRUC_H
