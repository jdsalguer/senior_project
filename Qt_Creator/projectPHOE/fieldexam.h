#ifndef FIELDEXAM_H
#define FIELDEXAM_H

#include <QDialog>

namespace Ui {
class fieldexam;
}

class fieldexam : public QDialog
{
    Q_OBJECT

public:
    explicit fieldexam(QWidget *parent = 0);
    ~fieldexam();

private:
    Ui::fieldexam *ui;
};

#endif // FIELDEXAM_H
