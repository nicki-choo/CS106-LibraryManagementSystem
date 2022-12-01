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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_memberprofile
{
public:
    QTableView *tableView;

    void setupUi(QDialog *memberprofile)
    {
        if (memberprofile->objectName().isEmpty())
            memberprofile->setObjectName(QString::fromUtf8("memberprofile"));
        memberprofile->resize(640, 480);
        tableView = new QTableView(memberprofile);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 30, 581, 341));
        tableView->setStyleSheet(QString::fromUtf8("QTableView { background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 18pt \"Work Sans\";\n"
"font-color: #2A3540;}\n"
""));
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->horizontalHeader()->setHighlightSections(true);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setHighlightSections(false);

        retranslateUi(memberprofile);

        QMetaObject::connectSlotsByName(memberprofile);
    } // setupUi

    void retranslateUi(QDialog *memberprofile)
    {
        memberprofile->setWindowTitle(QCoreApplication::translate("memberprofile", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class memberprofile: public Ui_memberprofile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERPROFILE_H
