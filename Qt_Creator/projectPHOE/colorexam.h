#ifndef COLOREXAM_H
#define COLOREXAM_H

#include <QDialog>

namespace Ui {
class colorexam;
}

class colorexam : public QDialog
{
    Q_OBJECT

public:
    explicit colorexam(QWidget *parent = 0);

    ~colorexam();

private:
    Ui::colorexam *ui;

public slots:
    void removeImage();
private slots:
    void on_submitButton_clicked();
    void on_threeButton_clicked();
    void on_oneButton_clicked();
    void on_twoButton_clicked();
    void on_fourButton_clicked();
    void on_fiveButton_clicked();
    void on_sixButton_clicked();
    void on_sevenButton_clicked();
    void on_eightButton_clicked();
    void on_nineButton_clicked();
    void on_delButton_clicked();
    void on_zeroButton_clicked();
    void on_nothingButton_clicked();
    void on_endTestButton_clicked();
};


#endif // COLOREXAM_H
