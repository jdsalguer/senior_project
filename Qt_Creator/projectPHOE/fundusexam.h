#ifndef FUNDUSEXAM_H
#define FUNDUSEXAM_H

#include <QDialog>
#include <Camera.h>

namespace Ui {
class fundusexam;
}

class fundusexam : public QDialog
{
    Q_OBJECT

    Camera *myPlayer;

public:
    explicit fundusexam(QWidget *parent = 0);
    ~fundusexam();

private slots:
    void on_startButton_clicked();

    void on_captureButton_clicked();

    void updatePlayerUI(QImage img);

    void on_leftButton_clicked();

    void on_rightButton_clicked();

    void on_endButton_clicked();

    void on_stopButton_clicked();

private:
    Ui::fundusexam *ui;
};

#endif // FUNDUSEXAM_H
