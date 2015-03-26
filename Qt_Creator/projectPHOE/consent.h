#ifndef CONSENT_H
#define CONSENT_H

#include <QDialog>

namespace Ui {
class consent;
}

class consent : public QDialog
{
    Q_OBJECT

public:
    explicit consent(QWidget *parent = 0);
    ~consent();

private slots:
    void on_consentcontButton_clicked();

    void on_consentbackButton_clicked();

private:
    Ui::consent *ui;
};

#endif // CONSENT_H
