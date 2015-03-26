/********************************************************************************
** Form generated from reading UI file 'newsuccess.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSUCCESS_H
#define UI_NEWSUCCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_newsuccess
{
public:
    QPushButton *cresuccontButton;
    QLabel *label;

    void setupUi(QDialog *newsuccess)
    {
        if (newsuccess->objectName().isEmpty())
            newsuccess->setObjectName(QStringLiteral("newsuccess"));
        newsuccess->resize(400, 300);
        cresuccontButton = new QPushButton(newsuccess);
        cresuccontButton->setObjectName(QStringLiteral("cresuccontButton"));
        cresuccontButton->setGeometry(QRect(160, 190, 75, 23));
        label = new QLabel(newsuccess);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 140, 221, 31));

        retranslateUi(newsuccess);

        QMetaObject::connectSlotsByName(newsuccess);
    } // setupUi

    void retranslateUi(QDialog *newsuccess)
    {
        newsuccess->setWindowTitle(QApplication::translate("newsuccess", "Dialog", 0));
        cresuccontButton->setText(QApplication::translate("newsuccess", "CONTINUE", 0));
        label->setText(QApplication::translate("newsuccess", "You have succesfully created a new account!", 0));
    } // retranslateUi

};

namespace Ui {
    class newsuccess: public Ui_newsuccess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSUCCESS_H
