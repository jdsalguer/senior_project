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
};

#endif // COLOREXAM_H
