#ifndef FUNDUSDESCR_H
#define FUNDUSDESCR_H

#include <QDialog>

namespace Ui {
class fundusdescr;
}

class fundusdescr : public QDialog
{
    Q_OBJECT

public:
    explicit fundusdescr(QWidget *parent = 0);
    ~fundusdescr();

private slots:
    void on_fundesbackButton_clicked();

    void on_fundesconButton_clicked();

private:
    Ui::fundusdescr *ui;
};

#endif // FUNDUSDESCR_H
