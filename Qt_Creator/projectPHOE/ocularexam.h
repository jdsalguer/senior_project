#ifndef OCULAREXAM_H
#define OCULAREXAM_H

#include <QDialog>

namespace Ui {
class ocularexam;
}

class ocularexam : public QDialog
{
    Q_OBJECT

public:
    explicit ocularexam(QWidget *parent = 0);
    ~ocularexam();

private:
    Ui::ocularexam *ui;
};

#endif // OCULAREXAM_H
