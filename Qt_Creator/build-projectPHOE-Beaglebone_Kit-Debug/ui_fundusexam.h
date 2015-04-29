/********************************************************************************
** Form generated from reading UI file 'fundusexam.ui'
**
** Created: Tue Apr 28 21:40:05 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNDUSEXAM_H
#define UI_FUNDUSEXAM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fundusexam
{
public:
    QLabel *imageLabel;
    QPushButton *startButton;
    QPushButton *captureButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *leftButton;
    QPushButton *rightButton;
    QPushButton *endButton;
    QLabel *eyeLabel;
    QPushButton *stopButton;

    void setupUi(QDialog *fundusexam)
    {
        if (fundusexam->objectName().isEmpty())
            fundusexam->setObjectName(QString::fromUtf8("fundusexam"));
        fundusexam->resize(800, 465);
        imageLabel = new QLabel(fundusexam);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setGeometry(QRect(50, 40, 430, 360));
        QFont font;
        font.setPointSize(9);
        imageLabel->setFont(font);
        imageLabel->setStyleSheet(QString::fromUtf8("Background-color: #000;"));
        startButton = new QPushButton(fundusexam);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(550, 210, 221, 61));
        QFont font1;
        font1.setPointSize(22);
        startButton->setFont(font1);
        captureButton = new QPushButton(fundusexam);
        captureButton->setObjectName(QString::fromUtf8("captureButton"));
        captureButton->setGeometry(QRect(550, 370, 221, 61));
        captureButton->setFont(font1);
        layoutWidget = new QWidget(fundusexam);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(500, 40, 281, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        leftButton = new QPushButton(layoutWidget);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftButton->sizePolicy().hasHeightForWidth());
        leftButton->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(21);
        leftButton->setFont(font2);

        horizontalLayout->addWidget(leftButton);

        rightButton = new QPushButton(layoutWidget);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        sizePolicy.setHeightForWidth(rightButton->sizePolicy().hasHeightForWidth());
        rightButton->setSizePolicy(sizePolicy);
        rightButton->setFont(font2);

        horizontalLayout->addWidget(rightButton);

        endButton = new QPushButton(fundusexam);
        endButton->setObjectName(QString::fromUtf8("endButton"));
        endButton->setGeometry(QRect(10, 410, 151, 41));
        eyeLabel = new QLabel(fundusexam);
        eyeLabel->setObjectName(QString::fromUtf8("eyeLabel"));
        eyeLabel->setGeometry(QRect(490, 120, 291, 61));
        QFont font3;
        font3.setPointSize(18);
        eyeLabel->setFont(font3);
        eyeLabel->setAlignment(Qt::AlignCenter);
        stopButton = new QPushButton(fundusexam);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setGeometry(QRect(550, 290, 221, 61));
        stopButton->setFont(font1);

        retranslateUi(fundusexam);

        QMetaObject::connectSlotsByName(fundusexam);
    } // setupUi

    void retranslateUi(QDialog *fundusexam)
    {
        fundusexam->setWindowTitle(QApplication::translate("fundusexam", "Dialog", 0, QApplication::UnicodeUTF8));
        imageLabel->setText(QString());
        startButton->setText(QApplication::translate("fundusexam", "Start Video", 0, QApplication::UnicodeUTF8));
        captureButton->setText(QApplication::translate("fundusexam", "Capture", 0, QApplication::UnicodeUTF8));
        leftButton->setText(QApplication::translate("fundusexam", "Left Eye", 0, QApplication::UnicodeUTF8));
        rightButton->setText(QApplication::translate("fundusexam", "Right Eye", 0, QApplication::UnicodeUTF8));
        endButton->setText(QApplication::translate("fundusexam", "End Test", 0, QApplication::UnicodeUTF8));
        eyeLabel->setText(QApplication::translate("fundusexam", "Current Eye: Left Eye", 0, QApplication::UnicodeUTF8));
        stopButton->setText(QApplication::translate("fundusexam", "Stop Video", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fundusexam: public Ui_fundusexam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNDUSEXAM_H
