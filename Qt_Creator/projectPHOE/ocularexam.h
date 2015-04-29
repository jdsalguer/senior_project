#ifndef OCULAREXAM_H
#define OCULAREXAM_H

#include <QDialog>
#include <QLabel>
#include <QPropertyAnimation>
#include <Camera.h>

namespace Ui {
class ocularexam;
}

class ocularexam : public QDialog
{
    Q_OBJECT

    Camera *myCamera;
public:
    explicit ocularexam(QWidget *parent = 0);
    ~ocularexam();
public slots:
    void resetPoint();
    void movePoint();
private slots:
    void on_continueButton_clicked();

private:
    Ui::ocularexam *ui;
    QLabel point;
    QPropertyAnimation *mAnimation;

};

#endif // OCULAREXAM_H
