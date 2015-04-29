#ifndef PHOE_H
#define PHOE_H

#include <QMainWindow>

namespace Ui {
class phoe;
}

class phoe : public QMainWindow
{
    Q_OBJECT

public:
    explicit phoe(QWidget *parent = 0);
    ~phoe();

public slots:
    void keySignal(QString text);

private slots:
    void on_loginButton_clicked();

    void on_newButton_clicked();
    void setText();

    void on_kb_clicked();

private:
    Ui::phoe *ui;
};

#endif // PHOE_H
