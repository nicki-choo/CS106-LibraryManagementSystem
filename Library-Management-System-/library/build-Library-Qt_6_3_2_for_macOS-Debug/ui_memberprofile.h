/********************************************************************************
** Form generated from reading UI file 'memberprofile.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERPROFILE_H
#define UI_MEMBERPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_memberprofile
{
public:
    QLabel *label;

    void setupUi(QDialog *memberprofile)
    {
        if (memberprofile->objectName().isEmpty())
            memberprofile->setObjectName(QString::fromUtf8("memberprofile"));
        memberprofile->resize(640, 480);
        label = new QLabel(memberprofile);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 140, 211, 171));

        retranslateUi(memberprofile);

        QMetaObject::connectSlotsByName(memberprofile);
    } // setupUi

    void retranslateUi(QDialog *memberprofile)
    {
        memberprofile->setWindowTitle(QCoreApplication::translate("memberprofile", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("memberprofile", "memberprofile", nullptr));
    } // retranslateUi

};

namespace Ui {
    class memberprofile: public Ui_memberprofile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERPROFILE_H
