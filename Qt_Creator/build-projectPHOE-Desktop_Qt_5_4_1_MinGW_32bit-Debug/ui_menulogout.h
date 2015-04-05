/********************************************************************************
** Form generated from reading UI file 'menulogout.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENULOGOUT_H
#define UI_MENULOGOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

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
            menulogout->setObjectName(QStringLiteral("menulogout"));
        menulogout->resize(800, 465);
        label = new QLabel(menulogout);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 120, 161, 31));
        layoutWidget = new QWidget(menulogout);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 220, 158, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        logoutbackButton = new QPushButton(layoutWidget);
        logoutbackButton->setObjectName(QStringLiteral("logoutbackButton"));

        horizontalLayout->addWidget(logoutbackButton);

        logout_outButton = new QPushButton(layoutWidget);
        logout_outButton->setObjectName(QStringLiteral("logout_outButton"));

        horizontalLayout->addWidget(logout_outButton);


        retranslateUi(menulogout);

        QMetaObject::connectSlotsByName(menulogout);
    } // setupUi

    void retranslateUi(QDialog *menulogout)
    {
        menulogout->setWindowTitle(QApplication::translate("menulogout", "Dialog", 0));
        label->setText(QApplication::translate("menulogout", "Are you sure you want to logout?", 0));
        logoutbackButton->setText(QApplication::translate("menulogout", "<- BACK", 0));
        logout_outButton->setText(QApplication::translate("menulogout", "LOGOUT", 0));
    } // retranslateUi

};

namespace Ui {
    class menulogout: public Ui_menulogout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENULOGOUT_H
