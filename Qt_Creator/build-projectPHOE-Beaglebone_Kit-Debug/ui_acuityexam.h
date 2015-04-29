/********************************************************************************
** Form generated from reading UI file 'acuityexam.ui'
**
** Created: Tue Apr 28 13:53:08 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACUITYEXAM_H
#define UI_ACUITYEXAM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_acuityexam
{
public:
    QLabel *acuityLabel;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *yesButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *noButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *snellenHolder;
    QLabel *eyeDirection;

    void setupUi(QDialog *acuityexam)
    {
        if (acuityexam->objectName().isEmpty())
            acuityexam->setObjectName(QString::fromUtf8("acuityexam"));
        acuityexam->resize(800, 465);
        acuityLabel = new QLabel(acuityexam);
        acuityLabel->setObjectName(QString::fromUtf8("acuityLabel"));
        acuityLabel->setGeometry(QRect(10, 10, 91, 61));
        QFont font;
        font.setPointSize(19);
        acuityLabel->setFont(font);
        label = new QLabel(acuityexam);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 300, 591, 51));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        layoutWidget = new QWidget(acuityexam);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 370, 541, 81));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        yesButton = new QPushButton(layoutWidget);
        yesButton->setObjectName(QString::fromUtf8("yesButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(yesButton->sizePolicy().hasHeightForWidth());
        yesButton->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(26);
        yesButton->setFont(font2);

        horizontalLayout->addWidget(yesButton);

        horizontalSpacer = new QSpacerItem(53, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        noButton = new QPushButton(layoutWidget);
        noButton->setObjectName(QString::fromUtf8("noButton"));
        sizePolicy.setHeightForWidth(noButton->sizePolicy().hasHeightForWidth());
        noButton->setSizePolicy(sizePolicy);
        noButton->setFont(font2);

        horizontalLayout->addWidget(noButton);

        horizontalLayoutWidget = new QWidget(acuityexam);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(60, 80, 691, 221));
        snellenHolder = new QHBoxLayout(horizontalLayoutWidget);
        snellenHolder->setObjectName(QString::fromUtf8("snellenHolder"));
        snellenHolder->setContentsMargins(0, 0, 0, 0);
        eyeDirection = new QLabel(acuityexam);
        eyeDirection->setObjectName(QString::fromUtf8("eyeDirection"));
        eyeDirection->setGeometry(QRect(230, 20, 301, 41));
        QFont font3;
        font3.setPointSize(22);
        eyeDirection->setFont(font3);
        eyeDirection->setAlignment(Qt::AlignCenter);

        retranslateUi(acuityexam);

        QMetaObject::connectSlotsByName(acuityexam);
    } // setupUi

    void retranslateUi(QDialog *acuityexam)
    {
        acuityexam->setWindowTitle(QApplication::translate("acuityexam", "Dialog", 0, QApplication::UnicodeUTF8));
        acuityLabel->setText(QApplication::translate("acuityexam", "200/20", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("acuityexam", "Is the patient able to identify the characters displayed above?", 0, QApplication::UnicodeUTF8));
        yesButton->setText(QApplication::translate("acuityexam", "Yes", 0, QApplication::UnicodeUTF8));
        noButton->setText(QApplication::translate("acuityexam", "No", 0, QApplication::UnicodeUTF8));
        eyeDirection->setText(QApplication::translate("acuityexam", "Cover Your Right Eye", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class acuityexam: public Ui_acuityexam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACUITYEXAM_H
