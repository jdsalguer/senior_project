#ifndef NEWLOGIN_H
#define NEWLOGIN_H

#include <QDialog>

namespace Ui {
class newlogin;
}

class newlogin : public QDialog
{
    Q_OBJECT

public:
    explicit newlogin(QWidget *parent = 0);
    ~newlogin();

private slots:

    void on_newcanButton_clicked();

    void on_newbakButton_clicked();

    void on_newcreButton_clicked();

    void on_loginPassConfirmEdit_editingFinished();

    void on_loginPassEdit_editingFinished();

    void on_loginIdEdit_editingFinished();

    void on_dobEdit_editingFinished();

    void on_phoneEdit_editingFinished();

    void on_zipCodeEdit_editingFinished();

    void on_stateEdit_editingFinished();

    void on_cityEdit_editingFinished();

    void on_address2Edit_editingFinished();

    void on_address1Edit_editingFinished();

    void on_lastNameEdit_editingFinished();

    void on_firstNameEdit_editingFinished();

private:
    Ui::newlogin *ui;
};

#endif // NEWLOGIN_H
