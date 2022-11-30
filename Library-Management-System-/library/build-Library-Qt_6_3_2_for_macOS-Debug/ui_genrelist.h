/********************************************************************************
** Form generated from reading UI file 'genrelist.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENRELIST_H
#define UI_GENRELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_genreList
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QLineEdit *value;
    QTableView *TableView;

    void setupUi(QDialog *genreList)
    {
        if (genreList->objectName().isEmpty())
            genreList->setObjectName(QString::fromUtf8("genreList"));
        genreList->resize(369, 328);
        QFont font;
        font.setPointSize(6);
        genreList->setFont(font);
        verticalLayout_2 = new QVBoxLayout(genreList);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_9 = new QLabel(genreList);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("font: 500 15pt \"Work Sans\";\n"
"color: #2A3540;"));

        horizontalLayout->addWidget(label_9);

        value = new QLineEdit(genreList);
        value->setObjectName(QString::fromUtf8("value"));
        value->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"font-color: #2A3540\n"
"}"));

        horizontalLayout->addWidget(value);


        verticalLayout->addLayout(horizontalLayout);

        TableView = new QTableView(genreList);
        TableView->setObjectName(QString::fromUtf8("TableView"));
        TableView->setContextMenuPolicy(Qt::PreventContextMenu);
        TableView->setStyleSheet(QString::fromUtf8("QTableView { background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 18pt \"Work Sans\";\n"
"font-color: #2A3540}"));
        TableView->setSelectionMode(QAbstractItemView::SingleSelection);
        TableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        TableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(TableView);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(genreList);

        QMetaObject::connectSlotsByName(genreList);
    } // setupUi

    void retranslateUi(QDialog *genreList)
    {
        genreList->setWindowTitle(QCoreApplication::translate("genreList", "Dialog", nullptr));
        label_9->setText(QCoreApplication::translate("genreList", "Search Genre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class genreList: public Ui_genreList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENRELIST_H
