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
#include <QtWidgets/QHBoxLayout>
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
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *fundusexamButton;
    QPushButton *ocularexamButton;
    QPushButton *fieldsexamButton;
    QPushButton *colorexamButton;
    QPushButton *acuityexamButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *genreportButton;
    QPushButton *menulogoutButton;

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
        widget->setGeometry(QRect(70, 50, 271, 231));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        fundusexamButton = new QPushButton(widget);
        fundusexamButton->setObjectName(QStringLiteral("fundusexamButton"));

        verticalLayout->addWidget(fundusexamButton);

        ocularexamButton = new QPushButton(widget);
        ocularexamButton->setObjectName(QStringLiteral("ocularexamButton"));

        verticalLayout->addWidget(ocularexamButton);

        fieldsexamButton = new QPushButton(widget);
        fieldsexamButton->setObjectName(QStringLiteral("fieldsexamButton"));

        verticalLayout->addWidget(fieldsexamButton);

        colorexamButton = new QPushButton(widget);
        colorexamButton->setObjectName(QStringLiteral("colorexamButton"));

        verticalLayout->addWidget(colorexamButton);

        acuityexamButton = new QPushButton(widget);
        acuityexamButton->setObjectName(QStringLiteral("acuityexamButton"));

        verticalLayout->addWidget(acuityexamButton);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        genreportButton = new QPushButton(widget);
        genreportButton->setObjectName(QStringLiteral("genreportButton"));

        horizontalLayout->addWidget(genreportButton);

        menulogoutButton = new QPushButton(widget);
        menulogoutButton->setObjectName(QStringLiteral("menulogoutButton"));

        horizontalLayout->addWidget(menulogoutButton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(exammenu);

        QMetaObject::connectSlotsByName(exammenu);
    } // setupUi

    void retranslateUi(QDialog *exammenu)
    {
        exammenu->setWindowTitle(QApplication::translate("exammenu", "Dialog", 0));
        label->setText(QApplication::translate("exammenu", "Choose An Exam", 0));
        fundusexamButton->setText(QApplication::translate("exammenu", "FUNDUS EXAMINATION", 0));
        ocularexamButton->setText(QApplication::translate("exammenu", "OCULAR MOVEMENTS", 0));
        fieldsexamButton->setText(QApplication::translate("exammenu", "VISUAL FIELDS", 0));
        colorexamButton->setText(QApplication::translate("exammenu", "COLOR BLINDNESS", 0));
        acuityexamButton->setText(QApplication::translate("exammenu", "VISUAL ACUITY", 0));
        genreportButton->setText(QApplication::translate("exammenu", "GENERATE REPORT", 0));
        menulogoutButton->setText(QApplication::translate("exammenu", "LOG OUT", 0));
    } // retranslateUi

};

namespace Ui {
    class exammenu: public Ui_exammenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMMENU_H
