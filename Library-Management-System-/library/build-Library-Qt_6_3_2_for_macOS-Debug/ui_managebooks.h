/********************************************************************************
** Form generated from reading UI file 'managebooks.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEBOOKS_H
#define UI_MANAGEBOOKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_manageBooks
{
public:
    QHBoxLayout *horizontalLayout_6;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *ID;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *Name;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *add;
    QPushButton *edit;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QTableView *genreTableView;

    void setupUi(QDialog *manageBooks)
    {
        if (manageBooks->objectName().isEmpty())
            manageBooks->setObjectName(QString::fromUtf8("manageBooks"));
        manageBooks->resize(802, 510);
        horizontalLayout_6 = new QHBoxLayout(manageBooks);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        frame = new QFrame(manageBooks);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 68, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        ID = new QLineEdit(frame);
        ID->setObjectName(QString::fromUtf8("ID"));
        ID->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		background-color: #FFFFFF;\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt;\n"
"	\n"
"}"));

        horizontalLayout_2->addWidget(ID);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        horizontalLayout_3->addWidget(label_3);

        Name = new QLineEdit(frame);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #FFFFFF;\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt;\n"
"	\n"
"}"));

        horizontalLayout_3->addWidget(Name);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(17, 68, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_3 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        add = new QPushButton(frame);
        add->setObjectName(QString::fromUtf8("add"));
        add->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{ \n"
"	color: #2A3540;\n"
"font: 600 14pt \"Work Sans\";\n"
"border-radius:8px;\n"
"padding : 3px;\n"
"background: #FFFFFF;\n"
"border-width: 1px;\n"
"border-style: solid;\n"
"border-color: #001873;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover:!pressed\n"
"\n"
"{\n"
"background:#4f85e2;\n"
"}\n"
""));

        horizontalLayout->addWidget(add);

        edit = new QPushButton(frame);
        edit->setObjectName(QString::fromUtf8("edit"));
        edit->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{ \n"
"	color: #2A3540;\n"
"font: 600 14pt \"Work Sans\";\n"
"border-radius:8px;\n"
"padding : 3px;\n"
"background: #FFFFFF;\n"
"border-width: 1px;\n"
"border-style: solid;\n"
"border-color: #001873;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover:!pressed\n"
"\n"
"{\n"
"background:#4f85e2;\n"
"}\n"
""));

        horizontalLayout->addWidget(edit);

        deleteButton = new QPushButton(frame);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{ \n"
"color: #2A3540;\n"
"font: 600 14pt \"Work Sans\";\n"
"border-radius:8px;\n"
"padding : 3px;\n"
"background: #FFFFFF;\n"
"border-width: 1px;\n"
"border-style: solid;\n"
"border-color: #001873;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover:!pressed\n"
"\n"
"{\n"
"background:#4f85e2;\n"
"}\n"
""));

        horizontalLayout->addWidget(deleteButton);


        horizontalLayout_7->addLayout(horizontalLayout);

        horizontalSpacer_4 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer_4 = new QSpacerItem(17, 88, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        genreTableView = new QTableView(frame);
        genreTableView->setObjectName(QString::fromUtf8("genreTableView"));
        genreTableView->setStyleSheet(QString::fromUtf8("QTableView {	background-color: #FFFFFF;\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt;\n"
"	}"));
        genreTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        genreTableView->horizontalHeader()->setDefaultSectionSize(200);
        genreTableView->verticalHeader()->setVisible(false);

        horizontalLayout_4->addWidget(genreTableView);


        horizontalLayout_6->addWidget(frame);


        retranslateUi(manageBooks);

        QMetaObject::connectSlotsByName(manageBooks);
    } // setupUi

    void retranslateUi(QDialog *manageBooks)
    {
        manageBooks->setWindowTitle(QCoreApplication::translate("manageBooks", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("manageBooks", "ID", nullptr));
        label_3->setText(QCoreApplication::translate("manageBooks", "Name", nullptr));
        add->setText(QCoreApplication::translate("manageBooks", "ADD", nullptr));
        edit->setText(QCoreApplication::translate("manageBooks", "EDIT", nullptr));
        deleteButton->setText(QCoreApplication::translate("manageBooks", "DELETE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class manageBooks: public Ui_manageBooks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEBOOKS_H
