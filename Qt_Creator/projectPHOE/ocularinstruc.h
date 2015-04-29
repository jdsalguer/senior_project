#ifndef OCULARINSTRUC_H
#define OCULARINSTRUC_H

#include <QDialog>

namespace Ui {
class ocularinstruc;
}

class ocularinstruc : public QDialog
{
    Q_OBJECT

public:
    explicit ocularinstruc(QWidget *parent = 0);
    ~ocularinstruc();

private slots:
    void on_ocuinstbackButton_clicked();

    void on_ocuinstbegButton_clicked();

private:
    Ui::ocularinstruc *ui;
};

#endif // OCULARINSTRUC_H
