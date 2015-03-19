/********************************************************************************
** Form generated from reading UI file 'exammenu.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMMENU_H
#define UI_EXAMMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_exammenu
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *exammenu)
    {
        if (exammenu->objectName().isEmpty())
            exammenu->setObjectName(QStringLiteral("exammenu"));
        exammenu->resize(400, 300);
        label = new QLabel(exammenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 20, 91, 16));
        widget = new QWidget(exammenu);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 50, 261, 181));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);


        retranslateUi(exammenu);

        QMetaObject::connectSlotsByName(exammenu);
    } // setupUi

    void retranslateUi(QDialog *exammenu)
    {
        exammenu->setWindowTitle(QApplication::translate("exammenu", "Dialog", 0));
        label->setText(QApplication::translate("exammenu", "Choose An Exam", 0));
        pushButton->setText(QApplication::translate("exammenu", "FUNDUS EXAMINATION", 0));
        pushButton_2->setText(QApplication::translate("exammenu", "OCCULAR MOVEMENTS", 0));
        pushButton_3->setText(QApplication::translate("exammenu", "VISUAL FIELDS", 0));
        pushButton_4->setText(QApplication::translate("exammenu", "COLOR BLINDNESS", 0));
        pushButton_5->setText(QApplication::translate("exammenu", "VISUAL ACUITY", 0));
    } // retranslateUi

};

namespace Ui {
    class exammenu: public Ui_exammenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMMENU_H
