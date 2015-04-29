#ifndef ACUITYEXAM_H
#define ACUITYEXAM_H

#include <QDialog>

namespace Ui {
class acuityexam;
}

class acuityexam : public QDialog
{
    Q_OBJECT

public:
    explicit acuityexam(QWidget *parent = 0);
    ~acuityexam();

private slots:
    void on_yesButton_clicked();

    void on_noButton_clicked();

    void drawLetters();

    void recordResults();

private:
    Ui::acuityexam *ui;
};

#endif // ACUITYEXAM_H
