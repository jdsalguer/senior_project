/********************************************************************************
** Form generated from reading UI file 'exammenu.ui'
**
** Created: Tue Apr 28 13:53:08 2015
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
    QVBoxLayout *verticalLayout;
    QPushButton *fundusexamButton;
    QPushButton *ocularexamButton;
    QPushButton *fieldsexamButton;
    QPushButton *colorexamButton;
    QPushButton *acuityexamButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *genreportButton;
    QPushButton *menulogoutButton;

    void setupUi(QDialog *exammenu)
    {
        if (exammenu->objectName().isEmpty())
            exammenu->setObjectName(QString::fromUtf8("exammenu"));
        exammenu->resize(800, 465);
        label = new QLabel(exammenu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 411, 51));
        QFont font;
        font.setPointSize(23);
        label->setFont(font);
        widget = new QWidget(exammenu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(190, 58, 409, 281));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        fundusexamButton = new QPushButton(widget);
        fundusexamButton->setObjectName(QString::fromUtf8("fundusexamButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fundusexamButton->sizePolicy().hasHeightForWidth());
        fundusexamButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(18);
        fundusexamButton->setFont(font1);

        verticalLayout->addWidget(fundusexamButton);

        ocularexamButton = new QPushButton(widget);
        ocularexamButton->setObjectName(QString::fromUtf8("ocularexamButton"));
        sizePolicy.setHeightForWidth(ocularexamButton->sizePolicy().hasHeightForWidth());
        ocularexamButton->setSizePolicy(sizePolicy);
        ocularexamButton->setFont(font1);

        verticalLayout->addWidget(ocularexamButton);

        fieldsexamButton = new QPushButton(widget);
        fieldsexamButton->setObjectName(QString::fromUtf8("fieldsexamButton"));
        sizePolicy.setHeightForWidth(fieldsexamButton->sizePolicy().hasHeightForWidth());
        fieldsexamButton->setSizePolicy(sizePolicy);
        fieldsexamButton->setFont(font1);

        verticalLayout->addWidget(fieldsexamButton);

        colorexamButton = new QPushButton(widget);
        colorexamButton->setObjectName(QString::fromUtf8("colorexamButton"));
        sizePolicy.setHeightForWidth(colorexamButton->sizePolicy().hasHeightForWidth());
        colorexamButton->setSizePolicy(sizePolicy);
        colorexamButton->setFont(font1);

        verticalLayout->addWidget(colorexamButton);

        acuityexamButton = new QPushButton(widget);
        acuityexamButton->setObjectName(QString::fromUtf8("acuityexamButton"));
        sizePolicy.setHeightForWidth(acuityexamButton->sizePolicy().hasHeightForWidth());
        acuityexamButton->setSizePolicy(sizePolicy);
        acuityexamButton->setFont(font1);

        verticalLayout->addWidget(acuityexamButton);

        widget1 = new QWidget(exammenu);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(50, 380, 691, 71));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        genreportButton = new QPushButton(widget1);
        genreportButton->setObjectName(QString::fromUtf8("genreportButton"));
        sizePolicy.setHeightForWidth(genreportButton->sizePolicy().hasHeightForWidth());
        genreportButton->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(16);
        genreportButton->setFont(font2);

        horizontalLayout->addWidget(genreportButton);

        menulogoutButton = new QPushButton(widget1);
        menulogoutButton->setObjectName(QString::fromUtf8("menulogoutButton"));
        sizePolicy.setHeightForWidth(menulogoutButton->sizePolicy().hasHeightForWidth());
        menulogoutButton->setSizePolicy(sizePolicy);
        menulogoutButton->setFont(font2);

        horizontalLayout->addWidget(menulogoutButton);

        label->raise();
        ocularexamButton->raise();
        menulogoutButton->raise();
        genreportButton->raise();

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
