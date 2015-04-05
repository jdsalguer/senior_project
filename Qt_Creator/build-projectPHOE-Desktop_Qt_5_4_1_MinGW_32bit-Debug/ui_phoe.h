/********************************************************************************
** Form generated from reading UI file 'phoe.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHOE_H
#define UI_PHOE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_phoe
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *IDlineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *PASSlineEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *loginButton;
    QPushButton *newButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *phoe)
    {
        if (phoe->objectName().isEmpty())
            phoe->setObjectName(QStringLiteral("phoe"));
        phoe->resize(800, 465);
        centralWidget = new QWidget(phoe);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 90, 501, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        IDlineEdit = new QLineEdit(layoutWidget);
        IDlineEdit->setObjectName(QStringLiteral("IDlineEdit"));

        horizontalLayout->addWidget(IDlineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        PASSlineEdit = new QLineEdit(layoutWidget);
        PASSlineEdit->setObjectName(QStringLiteral("PASSlineEdit"));

        horizontalLayout_2->addWidget(PASSlineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        loginButton = new QPushButton(layoutWidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));

        horizontalLayout_3->addWidget(loginButton);

        newButton = new QPushButton(layoutWidget);
        newButton->setObjectName(QStringLiteral("newButton"));

        horizontalLayout_3->addWidget(newButton);


        verticalLayout->addLayout(horizontalLayout_3);

        phoe->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(phoe);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        phoe->setMenuBar(menuBar);
        mainToolBar = new QToolBar(phoe);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        phoe->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(phoe);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        phoe->setStatusBar(statusBar);

        retranslateUi(phoe);

        QMetaObject::connectSlotsByName(phoe);
    } // setupUi

    void retranslateUi(QMainWindow *phoe)
    {
        phoe->setWindowTitle(QApplication::translate("phoe", "phoe", 0));
        label->setText(QApplication::translate("phoe", "                     ENTER ACCOUNT INFORMATION", 0));
        label_2->setText(QApplication::translate("phoe", "ID :", 0));
        label_3->setText(QApplication::translate("phoe", "PASSWORD :", 0));
        loginButton->setText(QApplication::translate("phoe", "LOGIN", 0));
        newButton->setText(QApplication::translate("phoe", "NEW", 0));
    } // retranslateUi

};

namespace Ui {
    class phoe: public Ui_phoe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHOE_H
