/********************************************************************************
** Form generated from reading UI file 'colorexam.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLOREXAM_H
#define UI_COLOREXAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_colorexam
{
public:
    QLabel *plateImage;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *submitButton;
    QLabel *countLabel;

    void setupUi(QDialog *colorexam)
    {
        if (colorexam->objectName().isEmpty())
            colorexam->setObjectName(QStringLiteral("colorexam"));
        colorexam->resize(800, 465);
        plateImage = new QLabel(colorexam);
        plateImage->setObjectName(QStringLiteral("plateImage"));
        plateImage->setGeometry(QRect(90, 80, 350, 350));
        label_2 = new QLabel(colorexam);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(530, 10, 251, 71));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(colorexam);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(540, 80, 231, 51));
        submitButton = new QPushButton(colorexam);
        submitButton->setObjectName(QStringLiteral("submitButton"));
        submitButton->setGeometry(QRect(560, 410, 201, 41));
        countLabel = new QLabel(colorexam);
        countLabel->setObjectName(QStringLiteral("countLabel"));
        countLabel->setGeometry(QRect(60, 10, 241, 61));
        countLabel->setFont(font);

        retranslateUi(colorexam);

        QMetaObject::connectSlotsByName(colorexam);
    } // setupUi

    void retranslateUi(QDialog *colorexam)
    {
        colorexam->setWindowTitle(QApplication::translate("colorexam", "Dialog", 0));
        plateImage->setText(QString());
        label_2->setText(QApplication::translate("colorexam", "Please input what you \n"
"saw in the image.", 0));
        submitButton->setText(QApplication::translate("colorexam", "Submit", 0));
        countLabel->setText(QApplication::translate("colorexam", "Plate 1 out of 38", 0));
    } // retranslateUi

};

namespace Ui {
    class colorexam: public Ui_colorexam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLOREXAM_H
