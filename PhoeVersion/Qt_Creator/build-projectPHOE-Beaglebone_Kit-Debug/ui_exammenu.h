/********************************************************************************
** Form generated from reading UI file 'exammenu.ui'
**
** Created: Sat Mar 28 18:33:41 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMMENU_H
#define UI_EXAMMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

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
            exammenu->setObjectName(QString::fromUtf8("exammenu"));
        exammenu->resize(400, 300);
        label = new QLabel(exammenu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 20, 91, 16));
        widget = new QWidget(exammenu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 50, 271, 231));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        fundusexamButton = new QPushButton(widget);
        fundusexamButton->setObjectName(QString::fromUtf8("fundusexamButton"));

        verticalLayout->addWidget(fundusexamButton);

        ocularexamButton = new QPushButton(widget);
        ocularexamButton->setObjectName(QString::fromUtf8("ocularexamButton"));

        verticalLayout->addWidget(ocularexamButton);

        fieldsexamButton = new QPushButton(widget);
        fieldsexamButton->setObjectName(QString::fromUtf8("fieldsexamButton"));

        verticalLayout->addWidget(fieldsexamButton);

        colorexamButton = new QPushButton(widget);
        colorexamButton->setObjectName(QString::fromUtf8("colorexamButton"));

        verticalLayout->addWidget(colorexamButton);

        acuityexamButton = new QPushButton(widget);
        acuityexamButton->setObjectName(QString::fromUtf8("acuityexamButton"));

        verticalLayout->addWidget(acuityexamButton);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        genreportButton = new QPushButton(widget);
        genreportButton->setObjectName(QString::fromUtf8("genreportButton"));

        horizontalLayout->addWidget(genreportButton);

        menulogoutButton = new QPushButton(widget);
        menulogoutButton->setObjectName(QString::fromUtf8("menulogoutButton"));

        horizontalLayout->addWidget(menulogoutButton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(exammenu);

        QMetaObject::connectSlotsByName(exammenu);
    } // setupUi

    void retranslateUi(QDialog *exammenu)
    {
        exammenu->setWindowTitle(QApplication::translate("exammenu", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("exammenu", "Choose An Exam", 0, QApplication::UnicodeUTF8));
        fundusexamButton->setText(QApplication::translate("exammenu", "FUNDUS EXAMINATION", 0, QApplication::UnicodeUTF8));
        ocularexamButton->setText(QApplication::translate("exammenu", "OCULAR MOVEMENTS", 0, QApplication::UnicodeUTF8));
        fieldsexamButton->setText(QApplication::translate("exammenu", "VISUAL FIELDS", 0, QApplication::UnicodeUTF8));
        colorexamButton->setText(QApplication::translate("exammenu", "COLOR BLINDNESS", 0, QApplication::UnicodeUTF8));
        acuityexamButton->setText(QApplication::translate("exammenu", "VISUAL ACUITY", 0, QApplication::UnicodeUTF8));
        genreportButton->setText(QApplication::translate("exammenu", "GENERATE REPORT", 0, QApplication::UnicodeUTF8));
        menulogoutButton->setText(QApplication::translate("exammenu", "LOG OUT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class exammenu: public Ui_exammenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMMENU_H
