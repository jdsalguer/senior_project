/********************************************************************************
** Form generated from reading UI file 'menulogout.ui'
**
** Created: Tue Apr 28 13:53:08 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENULOGOUT_H
#define UI_MENULOGOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menulogout
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *logoutbackButton;
    QPushButton *logout_outButton;

    void setupUi(QDialog *menulogout)
    {
        if (menulogout->objectName().isEmpty())
            menulogout->setObjectName(QString::fromUtf8("menulogout"));
        menulogout->resize(800, 465);
        label = new QLabel(menulogout);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 160, 241, 31));
        layoutWidget = new QWidget(menulogout);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(290, 230, 178, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        logoutbackButton = new QPushButton(layoutWidget);
        logoutbackButton->setObjectName(QString::fromUtf8("logoutbackButton"));

        horizontalLayout->addWidget(logoutbackButton);

        logout_outButton = new QPushButton(layoutWidget);
        logout_outButton->setObjectName(QString::fromUtf8("logout_outButton"));

        horizontalLayout->addWidget(logout_outButton);


        retranslateUi(menulogout);

        QMetaObject::connectSlotsByName(menulogout);
    } // setupUi

    void retranslateUi(QDialog *menulogout)
    {
        menulogout->setWindowTitle(QApplication::translate("menulogout", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("menulogout", "Are you sure you want to logout?", 0, QApplication::UnicodeUTF8));
        logoutbackButton->setText(QApplication::translate("menulogout", "<- BACK", 0, QApplication::UnicodeUTF8));
        logout_outButton->setText(QApplication::translate("menulogout", "LOGOUT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class menulogout: public Ui_menulogout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENULOGOUT_H
