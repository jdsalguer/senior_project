#ifndef FUNDUSEXAM_H
#define FUNDUSEXAM_H

#include <QDialog>

namespace Ui {
class fundusexam;
}

class fundusexam : public QDialog
{
    Q_OBJECT

public:
    explicit fundusexam(QWidget *parent = 0);
    ~fundusexam();

private:
    Ui::fundusexam *ui;
};

#endif // FUNDUSEXAM_H
