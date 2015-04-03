#ifndef ACUITYINSTRUC_H
#define ACUITYINSTRUC_H

#include <QDialog>

namespace Ui {
class acuityinstruc;
}

class acuityinstruc : public QDialog
{
    Q_OBJECT

public:
    explicit acuityinstruc(QWidget *parent = 0);
    ~acuityinstruc();

private slots:
    void on_ainstrucbakButton_clicked();

    void on_ainstrucbegButton_clicked();

private:
    Ui::acuityinstruc *ui;
};

#endif // ACUITYINSTRUC_H
