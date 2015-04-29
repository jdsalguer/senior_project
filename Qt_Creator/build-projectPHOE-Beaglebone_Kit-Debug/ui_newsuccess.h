/********************************************************************************
** Form generated from reading UI file 'newsuccess.ui'
**
** Created: Tue Apr 28 13:53:08 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSUCCESS_H
#define UI_NEWSUCCESS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_newsuccess
{
public:
    QPushButton *cresuccontButton;
    QLabel *label;

    void setupUi(QDialog *newsuccess)
    {
        if (newsuccess->objectName().isEmpty())
            newsuccess->setObjectName(QString::fromUtf8("newsuccess"));
        newsuccess->resize(800, 465);
        cresuccontButton = new QPushButton(newsuccess);
        cresuccontButton->setObjectName(QString::fromUtf8("cresuccontButton"));
        cresuccontButton->setGeometry(QRect(310, 240, 171, 71));
        QFont font;
        font.setPointSize(16);
        cresuccontButton->setFont(font);
        label = new QLabel(newsuccess);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 60, 451, 131));
        label->setFont(font);

        retranslateUi(newsuccess);

        QMetaObject::connectSlotsByName(newsuccess);
    } // setupUi

    void retranslateUi(QDialog *newsuccess)
    {
        newsuccess->setWindowTitle(QApplication::translate("newsuccess", "Dialog", 0, QApplication::UnicodeUTF8));
        cresuccontButton->setText(QApplication::translate("newsuccess", "CONTINUE", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("newsuccess", "You have succesfully created a new account!", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class newsuccess: public Ui_newsuccess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSUCCESS_H
