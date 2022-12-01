/********************************************************************************
** Form generated from reading UI file 'choosepage.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEPAGE_H
#define UI_CHOOSEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_choosepage
{
public:
    QPushButton *memberButton;
    QPushButton *adminButton;

    void setupUi(QDialog *choosepage)
    {
        if (choosepage->objectName().isEmpty())
            choosepage->setObjectName(QString::fromUtf8("choosepage"));
        choosepage->resize(697, 515);
        memberButton = new QPushButton(choosepage);
        memberButton->setObjectName(QString::fromUtf8("memberButton"));
        memberButton->setGeometry(QRect(440, 280, 100, 32));
        adminButton = new QPushButton(choosepage);
        adminButton->setObjectName(QString::fromUtf8("adminButton"));
        adminButton->setGeometry(QRect(140, 280, 100, 32));

        retranslateUi(choosepage);

        QMetaObject::connectSlotsByName(choosepage);
    } // setupUi

    void retranslateUi(QDialog *choosepage)
    {
        choosepage->setWindowTitle(QCoreApplication::translate("choosepage", "Dialog", nullptr));
        memberButton->setText(QCoreApplication::translate("choosepage", "MEMBER", nullptr));
        adminButton->setText(QCoreApplication::translate("choosepage", "ADMIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class choosepage: public Ui_choosepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEPAGE_H
