#ifndef EXAMMENU_H
#define EXAMMENU_H

#include <QDialog>

namespace Ui {
class exammenu;
}

class exammenu : public QDialog
{
    Q_OBJECT

public:
    explicit exammenu(QWidget *parent = 0);
    ~exammenu();

private slots:
    void on_fundusexamButton_clicked();

    void on_ocularexamButton_clicked();

    void on_fieldsexamButton_clicked();

    void on_colorexamButton_clicked();

    void on_acuityexamButton_clicked();

private:
    Ui::exammenu *ui;
};

#endif // EXAMMENU_H
