/********************************************************************************
** Form generated from reading UI file 'examcomplete.ui'
**
** Created: Tue Apr 28 13:53:08 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMCOMPLETE_H
#define UI_EXAMCOMPLETE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_examComplete
{
public:
    QLabel *label;
    QPushButton *okButton;

    void setupUi(QDialog *examComplete)
    {
        if (examComplete->objectName().isEmpty())
            examComplete->setObjectName(QString::fromUtf8("examComplete"));
        examComplete->resize(800, 480);
        label = new QLabel(examComplete);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 130, 651, 91));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        okButton = new QPushButton(examComplete);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(260, 310, 261, 91));
        okButton->setFont(font);

        retranslateUi(examComplete);

        QMetaObject::connectSlotsByName(examComplete);
    } // setupUi

    void retranslateUi(QDialog *examComplete)
    {
        examComplete->setWindowTitle(QApplication::translate("examComplete", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("examComplete", "You have completed the exam", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("examComplete", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class examComplete: public Ui_examComplete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMCOMPLETE_H
