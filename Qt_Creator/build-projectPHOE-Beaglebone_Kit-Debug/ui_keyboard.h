/********************************************************************************
** Form generated from reading UI file 'keyboard.ui'
**
** Created: Tue Apr 28 13:53:08 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBOARD_H
#define UI_KEYBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Keyboard
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *testButton;

    void setupUi(QDialog *Keyboard)
    {
        if (Keyboard->objectName().isEmpty())
            Keyboard->setObjectName(QString::fromUtf8("Keyboard"));
        Keyboard->resize(400, 300);
        buttonBox = new QDialogButtonBox(Keyboard);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(290, 20, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        testButton = new QPushButton(Keyboard);
        testButton->setObjectName(QString::fromUtf8("testButton"));
        testButton->setGeometry(QRect(140, 180, 99, 27));

        retranslateUi(Keyboard);
        QObject::connect(buttonBox, SIGNAL(accepted()), Keyboard, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Keyboard, SLOT(reject()));

        QMetaObject::connectSlotsByName(Keyboard);
    } // setupUi

    void retranslateUi(QDialog *Keyboard)
    {
        Keyboard->setWindowTitle(QApplication::translate("Keyboard", "Dialog", 0, QApplication::UnicodeUTF8));
        testButton->setText(QApplication::translate("Keyboard", "Test", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Keyboard: public Ui_Keyboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBOARD_H
