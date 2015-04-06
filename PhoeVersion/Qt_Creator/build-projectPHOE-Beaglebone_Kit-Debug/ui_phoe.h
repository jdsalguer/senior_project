/********************************************************************************
** Form generated from reading UI file 'phoe.ui'
**
** Created: Sat Apr 4 21:41:34 2015
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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *IDlineEdit;
    QLineEdit *PASSlineEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *loginButton;
    QPushButton *newButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *phoe)
    {
        if (phoe->objectName().isEmpty())
            phoe->setObjectName(QString::fromUtf8("phoe"));
        phoe->resize(800, 465);
        centralWidget = new QWidget(phoe);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(210, 20, 381, 231));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        IDlineEdit = new QLineEdit(layoutWidget);
        IDlineEdit->setObjectName(QString::fromUtf8("IDlineEdit"));
        IDlineEdit->setFont(font);

        verticalLayout->addWidget(IDlineEdit);

        PASSlineEdit = new QLineEdit(layoutWidget);
        PASSlineEdit->setObjectName(QString::fromUtf8("PASSlineEdit"));
        PASSlineEdit->setFont(font);

        verticalLayout->addWidget(PASSlineEdit);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(170, 300, 451, 71));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        loginButton = new QPushButton(widget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy);
        loginButton->setFont(font);

        horizontalLayout->addWidget(loginButton);

        newButton = new QPushButton(widget);
        newButton->setObjectName(QString::fromUtf8("newButton"));
        sizePolicy.setHeightForWidth(newButton->sizePolicy().hasHeightForWidth());
        newButton->setSizePolicy(sizePolicy);
        newButton->setFont(font);

        horizontalLayout->addWidget(newButton);

        phoe->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(phoe);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 25));
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
        label->setText(QApplication::translate("phoe", "ENTER ACCOUNT INFORMATION", 0, QApplication::UnicodeUTF8));
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
