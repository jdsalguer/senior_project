#ifndef NEWSUCCESS_H
#define NEWSUCCESS_H

#include <QDialog>

namespace Ui {
class newsuccess;
}

class newsuccess : public QDialog
{
    Q_OBJECT

public:
    explicit newsuccess(QWidget *parent = 0);
    ~newsuccess();

private slots:
    void on_cresuccontButton_clicked();

private:
    Ui::newsuccess *ui;
};

#endif // NEWSUCCESS_H
