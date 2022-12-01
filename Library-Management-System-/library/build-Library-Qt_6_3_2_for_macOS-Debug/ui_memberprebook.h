/********************************************************************************
** Form generated from reading UI file 'memberprebook.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERPREBOOK_H
#define UI_MEMBERPREBOOK_H

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

class Ui_memberprebook
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QLineEdit *BookIDline;
    QPushButton *SearchBookBtn;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_6;
    QLabel *BookName;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_8;
    QLineEdit *MemberIDLine;
    QPushButton *SearchMemberBtn;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_8;
    QLabel *MemberName;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_9;
    QLabel *availability;
    QSpacerItem *horizontalSpacer_10;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_10;
    QDateEdit *FromDate;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_11;
    QDateEdit *ToDate;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *PREBOOK;
    QPushButton *DELETE;
    QPushButton *CANCEL;
    QTableView *tableView;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *memberprebook)
    {
        if (memberprebook->objectName().isEmpty())
            memberprebook->setObjectName(QString::fromUtf8("memberprebook"));
        memberprebook->resize(1021, 743);
        layoutWidget = new QWidget(memberprebook);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 144, 461, 561));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        horizontalLayout_10->addWidget(label_7);

        BookIDline = new QLineEdit(layoutWidget);
        BookIDline->setObjectName(QString::fromUtf8("BookIDline"));
        BookIDline->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #FFFFFF;\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt;\n"
"}"));

        horizontalLayout_10->addWidget(BookIDline);

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

        horizontalLayout_10->addWidget(SearchBookBtn);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_6 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_6);

        BookName = new QLabel(layoutWidget);
        BookName->setObjectName(QString::fromUtf8("BookName"));
        BookName->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        horizontalLayout_11->addWidget(BookName);

        horizontalSpacer_7 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_7);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        horizontalLayout_12->addWidget(label_8);

        MemberIDLine = new QLineEdit(layoutWidget);
        MemberIDLine->setObjectName(QString::fromUtf8("MemberIDLine"));
        MemberIDLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #FFFFFF;\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt;\n"
"}"));

        horizontalLayout_12->addWidget(MemberIDLine);

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

        horizontalLayout_12->addWidget(SearchMemberBtn);


        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_8 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_8);

        MemberName = new QLabel(layoutWidget);
        MemberName->setObjectName(QString::fromUtf8("MemberName"));

        horizontalLayout_13->addWidget(MemberName);

        horizontalSpacer_9 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_9);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        horizontalLayout_14->addWidget(label_9);

        availability = new QLabel(layoutWidget);
        availability->setObjectName(QString::fromUtf8("availability"));
        availability->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        horizontalLayout_14->addWidget(availability);

        horizontalSpacer_10 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_10);


        verticalLayout_3->addLayout(horizontalLayout_14);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_15->addWidget(label_10);

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

        horizontalLayout_15->addWidget(FromDate);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_16->addWidget(label_11);

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

        horizontalLayout_16->addWidget(ToDate);


        verticalLayout_2->addLayout(horizontalLayout_16);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
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

        verticalLayout_4->addWidget(textEdit);


        verticalLayout_3->addWidget(groupBox_2);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
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

        horizontalLayout_17->addWidget(PREBOOK);

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

        horizontalLayout_17->addWidget(DELETE);

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

        horizontalLayout_17->addWidget(CANCEL);


        verticalLayout_3->addLayout(horizontalLayout_17);

        tableView = new QTableView(memberprebook);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(490, 60, 491, 641));
        tableView->setStyleSheet(QString::fromUtf8("QTableView { background-color: #FFFFFF;\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt;}"));
        label = new QLabel(memberprebook);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 32, 281, 91));
        label->setStyleSheet(QString::fromUtf8("font: 700 40pt \"Work Sans\";\n"
"color:#2A3540;\n"
""));
        label_2 = new QLabel(memberprebook);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 991, 711));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/MemResource/background.png")));
        label_2->raise();
        layoutWidget->raise();
        tableView->raise();
        label->raise();

        retranslateUi(memberprebook);

        QMetaObject::connectSlotsByName(memberprebook);
    } // setupUi

    void retranslateUi(QDialog *memberprebook)
    {
        memberprebook->setWindowTitle(QCoreApplication::translate("memberprebook", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("memberprebook", "Book ID", nullptr));
        SearchBookBtn->setText(QCoreApplication::translate("memberprebook", "Search Book", nullptr));
        BookName->setText(QString());
        label_8->setText(QCoreApplication::translate("memberprebook", "Enter your member ID", nullptr));
        SearchMemberBtn->setText(QCoreApplication::translate("memberprebook", "Assign", nullptr));
        MemberName->setText(QString());
        label_9->setText(QCoreApplication::translate("memberprebook", "Is This Book Available:", nullptr));
        availability->setText(QCoreApplication::translate("memberprebook", "Yes-Or-No", nullptr));
        groupBox->setTitle(QCoreApplication::translate("memberprebook", "Prebook Date and Time", nullptr));
        label_10->setText(QCoreApplication::translate("memberprebook", "From", nullptr));
        label_11->setText(QCoreApplication::translate("memberprebook", "To", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("memberprebook", "Note", nullptr));
        PREBOOK->setText(QCoreApplication::translate("memberprebook", "Prebook", nullptr));
        DELETE->setText(QCoreApplication::translate("memberprebook", "Delete", nullptr));
        CANCEL->setText(QCoreApplication::translate("memberprebook", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("memberprebook", "Prebook", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class memberprebook: public Ui_memberprebook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERPREBOOK_H
