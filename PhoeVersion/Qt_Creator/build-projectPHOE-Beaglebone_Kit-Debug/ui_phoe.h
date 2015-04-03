/********************************************************************************
** Form generated from reading UI file 'phoe.ui'
**
** Created: Sat Mar 28 18:33:41 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHOE_H
#define UI_PHOE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_phoe
{
public:
    QWidget *centralWidget;
    QWidget *widget;
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
            phoe->setObjectName(QString::fromUtf8("phoe"));
        phoe->resize(485, 318);
        centralWidget = new QWidget(phoe);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 60, 298, 131));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        IDlineEdit = new QLineEdit(widget);
        IDlineEdit->setObjectName(QString::fromUtf8("IDlineEdit"));

        horizontalLayout->addWidget(IDlineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        PASSlineEdit = new QLineEdit(widget);
        PASSlineEdit->setObjectName(QString::fromUtf8("PASSlineEdit"));

        horizontalLayout_2->addWidget(PASSlineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        loginButton = new QPushButton(widget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));

        horizontalLayout_3->addWidget(loginButton);

        newButton = new QPushButton(widget);
        newButton->setObjectName(QString::fromUtf8("newButton"));

        horizontalLayout_3->addWidget(newButton);


        verticalLayout->addLayout(horizontalLayout_3);

        phoe->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(phoe);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 485, 21));
        phoe->setMenuBar(menuBar);
        mainToolBar = new QToolBar(phoe);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        phoe->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(phoe);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        phoe->setStatusBar(statusBar);

        retranslateUi(phoe);

        QMetaObject::connectSlotsByName(phoe);
    } // setupUi

    void retranslateUi(QMainWindow *phoe)
    {
        phoe->setWindowTitle(QApplication::translate("phoe", "phoe", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("phoe", "                     ENTER ACCOUNT INFORMATION", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("phoe", "ID :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("phoe", "PASSWORD :", 0, QApplication::UnicodeUTF8));
        loginButton->setText(QApplication::translate("phoe", "LOGIN", 0, QApplication::UnicodeUTF8));
        newButton->setText(QApplication::translate("phoe", "NEW", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class phoe: public Ui_phoe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHOE_H
