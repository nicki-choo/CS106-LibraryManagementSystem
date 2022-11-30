/********************************************************************************
** Form generated from reading UI file 'prebook.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREBOOK_H
#define UI_PREBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prebook
{
public:
    QTableView *tableView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *BookIDline;
    QPushButton *SearchBookBtn;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *BookName;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *MemberIDLine;
    QPushButton *SearchMemberBtn;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *MemberName;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLabel *availability;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QDateEdit *FromDate;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QDateEdit *ToDate;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *PREBOOK;
    QPushButton *DELETE;
    QPushButton *CANCEL;

    void setupUi(QDialog *Prebook)
    {
        if (Prebook->objectName().isEmpty())
            Prebook->setObjectName(QString::fromUtf8("Prebook"));
        Prebook->resize(965, 671);
        Prebook->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tableView = new QTableView(Prebook);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(425, 21, 491, 641));
        tableView->setStyleSheet(QString::fromUtf8("QTableView { background-color: #FFFFFF;\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt;}"));
        layoutWidget = new QWidget(Prebook);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 21, 406, 645));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        horizontalLayout->addWidget(label);

        BookIDline = new QLineEdit(layoutWidget);
        BookIDline->setObjectName(QString::fromUtf8("BookIDline"));
        BookIDline->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #FFFFFF;\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt;\n"
"}"));

        horizontalLayout->addWidget(BookIDline);

        SearchBookBtn = new QPushButton(layoutWidget);
        SearchBookBtn->setObjectName(QString::fromUtf8("SearchBookBtn"));
        SearchBookBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"QPushButton:hover:!pressed\n"
"\n"
"{\n"
"background:#4f85e2;\n"
"}\n"
"QToolButton\n"
"{\n"
"\n"
"border-radius:10px;\n"
"bacground:red;\n"
"color:red;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"              font-size: 19px;\n"
"              transition: 0.9s; \n"
"}"));

        horizontalLayout->addWidget(SearchBookBtn);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        BookName = new QLabel(layoutWidget);
        BookName->setObjectName(QString::fromUtf8("BookName"));
        BookName->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        horizontalLayout_2->addWidget(BookName);

        horizontalSpacer_2 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        horizontalLayout_3->addWidget(label_2);

        MemberIDLine = new QLineEdit(layoutWidget);
        MemberIDLine->setObjectName(QString::fromUtf8("MemberIDLine"));
        MemberIDLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #FFFFFF;\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt;\n"
"}"));

        horizontalLayout_3->addWidget(MemberIDLine);

        SearchMemberBtn = new QPushButton(layoutWidget);
        SearchMemberBtn->setObjectName(QString::fromUtf8("SearchMemberBtn"));
        SearchMemberBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"QPushButton:hover:!pressed\n"
"\n"
"{\n"
"background:#4f85e2;\n"
"}\n"
"QToolButton\n"
"{\n"
"\n"
"border-radius:10px;\n"
"bacground:red;\n"
"color:red;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"              font-size: 19px;\n"
"              transition: 0.9s; \n"
"}"));

        horizontalLayout_3->addWidget(SearchMemberBtn);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        MemberName = new QLabel(layoutWidget);
        MemberName->setObjectName(QString::fromUtf8("MemberName"));

        horizontalLayout_4->addWidget(MemberName);

        horizontalSpacer_3 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        horizontalLayout_5->addWidget(label_3);

        availability = new QLabel(layoutWidget);
        availability->setObjectName(QString::fromUtf8("availability"));
        availability->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        horizontalLayout_5->addWidget(availability);

        horizontalSpacer_5 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_5);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        FromDate = new QDateEdit(groupBox);
        FromDate->setObjectName(QString::fromUtf8("FromDate"));
        FromDate->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"		background-color: #FFFFFF;\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt;\n"
"}"));
        FromDate->setCalendarPopup(true);

        horizontalLayout_6->addWidget(FromDate);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        ToDate = new QDateEdit(groupBox);
        ToDate->setObjectName(QString::fromUtf8("ToDate"));
        ToDate->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"	background-color: #FFFFFF;\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt;\n"
"}"));
        ToDate->setCalendarPopup(true);

        horizontalLayout_7->addWidget(ToDate);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textEdit = new QTextEdit(groupBox_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"	background-color: #FFFFFF;\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt;\n"
"	\n"
"}"));

        verticalLayout_2->addWidget(textEdit);


        verticalLayout_3->addWidget(groupBox_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        PREBOOK = new QPushButton(layoutWidget);
        PREBOOK->setObjectName(QString::fromUtf8("PREBOOK"));
        PREBOOK->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"QPushButton:hover:!pressed\n"
"\n"
"{\n"
"background:#4f85e2;\n"
"}\n"
"QToolButton\n"
"{\n"
"\n"
"border-radius:10px;\n"
"bacground:red;\n"
"color:red;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"              font-size: 19px;\n"
"              transition: 0.9s; \n"
"}"));

        horizontalLayout_8->addWidget(PREBOOK);

        DELETE = new QPushButton(layoutWidget);
        DELETE->setObjectName(QString::fromUtf8("DELETE"));
        DELETE->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"QPushButton:hover:!pressed\n"
"\n"
"{\n"
"background:#4f85e2;\n"
"}\n"
"QToolButton\n"
"{\n"
"\n"
"border-radius:10px;\n"
"bacground:red;\n"
"color:red;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"              font-size: 19px;\n"
"              transition: 0.9s; \n"
"}"));

        horizontalLayout_8->addWidget(DELETE);

        CANCEL = new QPushButton(layoutWidget);
        CANCEL->setObjectName(QString::fromUtf8("CANCEL"));
        CANCEL->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"QPushButton:hover:!pressed\n"
"\n"
"{\n"
"background:#4f85e2;\n"
"}\n"
"QToolButton\n"
"{\n"
"\n"
"border-radius:10px;\n"
"bacground:red;\n"
"color:red;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"              font-size: 19px;\n"
"              transition: 0.9s; \n"
"}"));

        horizontalLayout_8->addWidget(CANCEL);


        verticalLayout_3->addLayout(horizontalLayout_8);


        retranslateUi(Prebook);

        QMetaObject::connectSlotsByName(Prebook);
    } // setupUi

    void retranslateUi(QDialog *Prebook)
    {
        Prebook->setWindowTitle(QCoreApplication::translate("Prebook", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Prebook", "Book ID", nullptr));
        SearchBookBtn->setText(QCoreApplication::translate("Prebook", "SEARCH BOOK", nullptr));
        BookName->setText(QString());
        label_2->setText(QCoreApplication::translate("Prebook", "Member ID", nullptr));
        SearchMemberBtn->setText(QCoreApplication::translate("Prebook", "SEARCH MEMBER", nullptr));
        MemberName->setText(QString());
        label_3->setText(QCoreApplication::translate("Prebook", "Is This Book Available:", nullptr));
        availability->setText(QCoreApplication::translate("Prebook", "Yes-Or-No", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Prebook", "Prebook Date and Time", nullptr));
        label_4->setText(QCoreApplication::translate("Prebook", "From", nullptr));
        label_5->setText(QCoreApplication::translate("Prebook", "To", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Prebook", "Note", nullptr));
        PREBOOK->setText(QCoreApplication::translate("Prebook", "PREBOOK", nullptr));
        DELETE->setText(QCoreApplication::translate("Prebook", "DELETE", nullptr));
        CANCEL->setText(QCoreApplication::translate("Prebook", "CANCEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Prebook: public Ui_Prebook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREBOOK_H
