/********************************************************************************
** Form generated from reading UI file 'editmember.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITMEMBER_H
#define UI_EDITMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_editMember
{
public:
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_11;
    QLineEdit *ID;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QPushButton *searchMemberBtn;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLineEdit *firstName;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_10;
    QLineEdit *lastName;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QLineEdit *phone;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QLineEdit *mail;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QComboBox *gender;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *editMemberBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *editMember)
    {
        if (editMember->objectName().isEmpty())
            editMember->setObjectName(QString::fromUtf8("editMember"));
        editMember->resize(376, 507);
        editMember->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame = new QFrame(editMember);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(11, 11, 358, 490));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_11 = new QLabel(frame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"color:#2A3540;"));

        verticalLayout_2->addWidget(label_11);

        ID = new QLineEdit(frame);
        ID->setObjectName(QString::fromUtf8("ID"));
        ID->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"	font-color: #2A3540\n"
"}"));

        verticalLayout_2->addWidget(ID);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        searchMemberBtn = new QPushButton(frame);
        searchMemberBtn->setObjectName(QString::fromUtf8("searchMemberBtn"));
        searchMemberBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout_3->addWidget(searchMemberBtn);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"color:#2A3540;"));

        verticalLayout->addWidget(label_6);

        firstName = new QLineEdit(frame);
        firstName->setObjectName(QString::fromUtf8("firstName"));
        firstName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"	font-color: #2A3540\n"
"}"));

        verticalLayout->addWidget(firstName);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"color:#2A3540;"));

        verticalLayout_10->addWidget(label_10);

        lastName = new QLineEdit(frame);
        lastName->setObjectName(QString::fromUtf8("lastName"));
        lastName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"	font-color: #2A3540\n"
"}"));

        verticalLayout_10->addWidget(lastName);


        verticalLayout_4->addLayout(verticalLayout_10);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"color:#2A3540;"));

        verticalLayout_7->addWidget(label_7);

        phone = new QLineEdit(frame);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"	font-color: #2A3540;\n"
"}"));

        verticalLayout_7->addWidget(phone);


        verticalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"color:#2A3540;"));

        verticalLayout_8->addWidget(label_8);

        mail = new QLineEdit(frame);
        mail->setObjectName(QString::fromUtf8("mail"));
        mail->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"	font-color: #2A3540\n"
"}"));

        verticalLayout_8->addWidget(mail);


        verticalLayout_4->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"color:#2A3540;"));

        verticalLayout_9->addWidget(label_9);

        gender = new QComboBox(frame);
        gender->addItem(QString());
        gender->addItem(QString());
        gender->setObjectName(QString::fromUtf8("gender"));
        gender->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"	background-color: none;\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"	font-color: #2A3540\n"
"}"));

        verticalLayout_9->addWidget(gender);


        verticalLayout_4->addLayout(verticalLayout_9);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        editMemberBtn = new QPushButton(frame);
        editMemberBtn->setObjectName(QString::fromUtf8("editMemberBtn"));
        editMemberBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #2A3540;\n"
"font: 600 14pt \"Work Sans\";\n"
"border-radius:8px;\n"
"padding : 5px;\n"
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

        horizontalLayout_2->addWidget(editMemberBtn);

        horizontalSpacer_2 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_2);


        retranslateUi(editMember);

        QMetaObject::connectSlotsByName(editMember);
    } // setupUi

    void retranslateUi(QDialog *editMember)
    {
        editMember->setWindowTitle(QCoreApplication::translate("editMember", "Dialog", nullptr));
        label_11->setText(QCoreApplication::translate("editMember", "Member ID", nullptr));
        searchMemberBtn->setText(QCoreApplication::translate("editMember", "SEARCH", nullptr));
        label_6->setText(QCoreApplication::translate("editMember", "First Name", nullptr));
        label_10->setText(QCoreApplication::translate("editMember", "Last Name ", nullptr));
        label_7->setText(QCoreApplication::translate("editMember", "Phone Number", nullptr));
        label_8->setText(QCoreApplication::translate("editMember", "Email ", nullptr));
        label_9->setText(QCoreApplication::translate("editMember", "Gender", nullptr));
        gender->setItemText(0, QCoreApplication::translate("editMember", "Male", nullptr));
        gender->setItemText(1, QCoreApplication::translate("editMember", "Female", nullptr));

        editMemberBtn->setText(QCoreApplication::translate("editMember", "EDIT MEMBER INFO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editMember: public Ui_editMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITMEMBER_H
