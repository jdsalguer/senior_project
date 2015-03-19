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

private:
    Ui::exammenu *ui;
};

#endif // EXAMMENU_H
