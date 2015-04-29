#ifndef EXAMCOMPLETE_H
#define EXAMCOMPLETE_H

#include <QDialog>

namespace Ui {
class examComplete;
}

class examComplete : public QDialog
{
    Q_OBJECT

public:
    explicit examComplete(QWidget *parent = 0);
    ~examComplete();

private slots:
    void on_okButton_clicked();

private:
    Ui::examComplete *ui;
};

#endif // EXAMCOMPLETE_H
