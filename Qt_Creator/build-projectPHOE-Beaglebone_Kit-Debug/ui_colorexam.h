/********************************************************************************
** Form generated from reading UI file 'colorexam.ui'
**
** Created: Tue Apr 28 13:53:08 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLOREXAM_H
#define UI_COLOREXAM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_colorexam
{
public:
    QLabel *plateImage;
    QLabel *countLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *endTestButton;
    QPushButton *submitButton;
    QWidget *layoutWidget1;
    QVBoxLayout *inputLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *oneButton;
    QPushButton *twoButton;
    QPushButton *threeButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *fourButton;
    QPushButton *fiveButton;
    QPushButton *sixButton;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *sevenButton;
    QPushButton *eightButton;
    QPushButton *nineButton;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *delButton;
    QPushButton *zeroButton;
    QPushButton *nothingButton;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *instructionsLabel;
    QLabel *label;
    QLineEdit *answerEdit;

    void setupUi(QDialog *colorexam)
    {
        if (colorexam->objectName().isEmpty())
            colorexam->setObjectName(QString::fromUtf8("colorexam"));
        colorexam->resize(800, 465);
        plateImage = new QLabel(colorexam);
        plateImage->setObjectName(QString::fromUtf8("plateImage"));
        plateImage->setGeometry(QRect(90, 80, 350, 350));
        QFont font;
        font.setPointSize(11);
        plateImage->setFont(font);
        countLabel = new QLabel(colorexam);
        countLabel->setObjectName(QString::fromUtf8("countLabel"));
        countLabel->setGeometry(QRect(60, 10, 241, 61));
        QFont font1;
        font1.setPointSize(22);
        countLabel->setFont(font1);
        layoutWidget = new QWidget(colorexam);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(480, 390, 311, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        endTestButton = new QPushButton(layoutWidget);
        endTestButton->setObjectName(QString::fromUtf8("endTestButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(endTestButton->sizePolicy().hasHeightForWidth());
        endTestButton->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(17);
        endTestButton->setFont(font2);

        horizontalLayout->addWidget(endTestButton);

        submitButton = new QPushButton(layoutWidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        sizePolicy.setHeightForWidth(submitButton->sizePolicy().hasHeightForWidth());
        submitButton->setSizePolicy(sizePolicy);
        submitButton->setFont(font2);

        horizontalLayout->addWidget(submitButton);

        layoutWidget1 = new QWidget(colorexam);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(90, 95, 341, 291));
        QFont font3;
        font3.setPointSize(19);
        layoutWidget1->setFont(font3);
        inputLayout = new QVBoxLayout(layoutWidget1);
        inputLayout->setObjectName(QString::fromUtf8("inputLayout"));
        inputLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        oneButton = new QPushButton(layoutWidget1);
        oneButton->setObjectName(QString::fromUtf8("oneButton"));
        sizePolicy.setHeightForWidth(oneButton->sizePolicy().hasHeightForWidth());
        oneButton->setSizePolicy(sizePolicy);
        oneButton->setFont(font3);
        oneButton->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(oneButton);

        twoButton = new QPushButton(layoutWidget1);
        twoButton->setObjectName(QString::fromUtf8("twoButton"));
        sizePolicy.setHeightForWidth(twoButton->sizePolicy().hasHeightForWidth());
        twoButton->setSizePolicy(sizePolicy);
        twoButton->setFont(font3);

        horizontalLayout_2->addWidget(twoButton);

        threeButton = new QPushButton(layoutWidget1);
        threeButton->setObjectName(QString::fromUtf8("threeButton"));
        sizePolicy.setHeightForWidth(threeButton->sizePolicy().hasHeightForWidth());
        threeButton->setSizePolicy(sizePolicy);
        threeButton->setFont(font3);

        horizontalLayout_2->addWidget(threeButton);


        inputLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        fourButton = new QPushButton(layoutWidget1);
        fourButton->setObjectName(QString::fromUtf8("fourButton"));
        sizePolicy.setHeightForWidth(fourButton->sizePolicy().hasHeightForWidth());
        fourButton->setSizePolicy(sizePolicy);
        fourButton->setFont(font3);

        horizontalLayout_3->addWidget(fourButton);

        fiveButton = new QPushButton(layoutWidget1);
        fiveButton->setObjectName(QString::fromUtf8("fiveButton"));
        sizePolicy.setHeightForWidth(fiveButton->sizePolicy().hasHeightForWidth());
        fiveButton->setSizePolicy(sizePolicy);
        fiveButton->setFont(font3);

        horizontalLayout_3->addWidget(fiveButton);

        sixButton = new QPushButton(layoutWidget1);
        sixButton->setObjectName(QString::fromUtf8("sixButton"));
        sizePolicy.setHeightForWidth(sixButton->sizePolicy().hasHeightForWidth());
        sixButton->setSizePolicy(sizePolicy);
        sixButton->setFont(font3);

        horizontalLayout_3->addWidget(sixButton);


        inputLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        sevenButton = new QPushButton(layoutWidget1);
        sevenButton->setObjectName(QString::fromUtf8("sevenButton"));
        sizePolicy.setHeightForWidth(sevenButton->sizePolicy().hasHeightForWidth());
        sevenButton->setSizePolicy(sizePolicy);
        sevenButton->setFont(font3);

        horizontalLayout_4->addWidget(sevenButton);

        eightButton = new QPushButton(layoutWidget1);
        eightButton->setObjectName(QString::fromUtf8("eightButton"));
        sizePolicy.setHeightForWidth(eightButton->sizePolicy().hasHeightForWidth());
        eightButton->setSizePolicy(sizePolicy);
        eightButton->setFont(font3);

        horizontalLayout_4->addWidget(eightButton);

        nineButton = new QPushButton(layoutWidget1);
        nineButton->setObjectName(QString::fromUtf8("nineButton"));
        sizePolicy.setHeightForWidth(nineButton->sizePolicy().hasHeightForWidth());
        nineButton->setSizePolicy(sizePolicy);
        nineButton->setFont(font3);

        horizontalLayout_4->addWidget(nineButton);


        inputLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        delButton = new QPushButton(layoutWidget1);
        delButton->setObjectName(QString::fromUtf8("delButton"));
        sizePolicy.setHeightForWidth(delButton->sizePolicy().hasHeightForWidth());
        delButton->setSizePolicy(sizePolicy);
        delButton->setFont(font3);

        horizontalLayout_5->addWidget(delButton);

        zeroButton = new QPushButton(layoutWidget1);
        zeroButton->setObjectName(QString::fromUtf8("zeroButton"));
        sizePolicy.setHeightForWidth(zeroButton->sizePolicy().hasHeightForWidth());
        zeroButton->setSizePolicy(sizePolicy);
        zeroButton->setFont(font3);

        horizontalLayout_5->addWidget(zeroButton);

        nothingButton = new QPushButton(layoutWidget1);
        nothingButton->setObjectName(QString::fromUtf8("nothingButton"));
        sizePolicy.setHeightForWidth(nothingButton->sizePolicy().hasHeightForWidth());
        nothingButton->setSizePolicy(sizePolicy);
        nothingButton->setFont(font3);

        horizontalLayout_5->addWidget(nothingButton);


        inputLayout->addLayout(horizontalLayout_5);

        layoutWidget2 = new QWidget(colorexam);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(470, 90, 318, 181));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        instructionsLabel = new QLabel(layoutWidget2);
        instructionsLabel->setObjectName(QString::fromUtf8("instructionsLabel"));
        instructionsLabel->setFont(font1);
        instructionsLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(instructionsLabel);

        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font4;
        font4.setPointSize(20);
        label->setFont(font4);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        verticalLayout_2->addLayout(verticalLayout);

        answerEdit = new QLineEdit(layoutWidget2);
        answerEdit->setObjectName(QString::fromUtf8("answerEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(answerEdit->sizePolicy().hasHeightForWidth());
        answerEdit->setSizePolicy(sizePolicy1);
        answerEdit->setFont(font1);

        verticalLayout_2->addWidget(answerEdit);

        countLabel->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        plateImage->raise();

        retranslateUi(colorexam);

        QMetaObject::connectSlotsByName(colorexam);
    } // setupUi

    void retranslateUi(QDialog *colorexam)
    {
        colorexam->setWindowTitle(QApplication::translate("colorexam", "Dialog", 0, QApplication::UnicodeUTF8));
        plateImage->setText(QString());
        countLabel->setText(QApplication::translate("colorexam", "Plate 1 out of 38", 0, QApplication::UnicodeUTF8));
        endTestButton->setText(QApplication::translate("colorexam", "End Test", 0, QApplication::UnicodeUTF8));
        submitButton->setText(QApplication::translate("colorexam", "Submit", 0, QApplication::UnicodeUTF8));
        oneButton->setText(QApplication::translate("colorexam", "1", 0, QApplication::UnicodeUTF8));
        twoButton->setText(QApplication::translate("colorexam", "2", 0, QApplication::UnicodeUTF8));
        threeButton->setText(QApplication::translate("colorexam", "3", 0, QApplication::UnicodeUTF8));
        fourButton->setText(QApplication::translate("colorexam", "4", 0, QApplication::UnicodeUTF8));
        fiveButton->setText(QApplication::translate("colorexam", "5", 0, QApplication::UnicodeUTF8));
        sixButton->setText(QApplication::translate("colorexam", "6", 0, QApplication::UnicodeUTF8));
        sevenButton->setText(QApplication::translate("colorexam", "7", 0, QApplication::UnicodeUTF8));
        eightButton->setText(QApplication::translate("colorexam", "8", 0, QApplication::UnicodeUTF8));
        nineButton->setText(QApplication::translate("colorexam", "9", 0, QApplication::UnicodeUTF8));
        delButton->setText(QApplication::translate("colorexam", "<-", 0, QApplication::UnicodeUTF8));
        zeroButton->setText(QApplication::translate("colorexam", "0", 0, QApplication::UnicodeUTF8));
        nothingButton->setText(QApplication::translate("colorexam", "Nothing", 0, QApplication::UnicodeUTF8));
        instructionsLabel->setText(QApplication::translate("colorexam", "Please input what you \n"
"saw in the image.", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("colorexam", "(number/number of lines)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class colorexam: public Ui_colorexam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLOREXAM_H
