/********************************************************************************
** Form generated from reading UI file 'memberlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERLOGIN_H
#define UI_MEMBERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_memberlogin
{
public:
    QLabel *label_3;
    QGroupBox *loginGroup;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *password;
    QLabel *label_7;
    QLineEdit *username;
    QPushButton *loginButton2;
    QPushButton *signUpButton2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *memberlogin)
    {
        if (memberlogin->objectName().isEmpty())
            memberlogin->setObjectName(QString::fromUtf8("memberlogin"));
        memberlogin->resize(571, 815);
        label_3 = new QLabel(memberlogin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 300, 281, 71));
        loginGroup = new QGroupBox(memberlogin);
        loginGroup->setObjectName(QString::fromUtf8("loginGroup"));
        loginGroup->setGeometry(QRect(50, 380, 471, 381));
        loginGroup->setStyleSheet(QString::fromUtf8("font: 600 24pt \"Work Sans\";\n"
"border-color: rgb(196, 178, 255);\n"
"border-color: rgb(170, 0, 255);\n"
"color: #2A3540"));
        gridLayout_2 = new QGridLayout(loginGroup);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(loginGroup);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"font-color: #2A3540;\n"
"background-color: none;"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        password = new QLineEdit(loginGroup);
        password->setObjectName(QString::fromUtf8("password"));
        password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"}"));
        password->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(password, 1, 1, 1, 3);

        label_7 = new QLabel(loginGroup);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"font-color: #2A3540;\n"
"background-color: none;"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        username = new QLineEdit(loginGroup);
        username->setObjectName(QString::fromUtf8("username"));
        username->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"}"));

        gridLayout_2->addWidget(username, 0, 1, 1, 3);

        loginButton2 = new QPushButton(loginGroup);
        loginButton2->setObjectName(QString::fromUtf8("loginButton2"));
        loginButton2->setMouseTracking(true);
        loginButton2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #FFFFFF;\n"
"border-radius:10px;\n"
"border-color: #001873;\n"
"border-width: 3px;\n"
"border-style: solid;\n"
"color: #2A3540;\n"
"font: 600 24pt \"Work Sans\";\n"
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
        loginButton2->setAutoDefault(true);

        gridLayout_2->addWidget(loginButton2, 2, 1, 1, 3);

        signUpButton2 = new QPushButton(loginGroup);
        signUpButton2->setObjectName(QString::fromUtf8("signUpButton2"));
        signUpButton2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #FFFFFF;\n"
"border-radius:10px;\n"
"border-color: #001873;\n"
"border-width: 3px;\n"
"border-style: solid;\n"
"color: #2A3540;\n"
"font: 600 24pt \"Work Sans\";\n"
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

        gridLayout_2->addWidget(signUpButton2, 3, 1, 1, 3);

        label = new QLabel(memberlogin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 10, 281, 301));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/MemResource/libimg2.png")));
        label_2 = new QLabel(memberlogin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 370, 571, 451));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/MemResource/background.png")));
        label_2->raise();
        label_3->raise();
        loginGroup->raise();
        label->raise();

        retranslateUi(memberlogin);

        loginButton2->setDefault(false);


        QMetaObject::connectSlotsByName(memberlogin);
    } // setupUi

    void retranslateUi(QDialog *memberlogin)
    {
        memberlogin->setWindowTitle(QCoreApplication::translate("memberlogin", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("memberlogin", "Choose from our great selection of books!", nullptr));
        loginGroup->setTitle(QCoreApplication::translate("memberlogin", "Login", nullptr));
        label_6->setText(QCoreApplication::translate("memberlogin", "Password", nullptr));
        label_7->setText(QCoreApplication::translate("memberlogin", "Username", nullptr));
        loginButton2->setText(QCoreApplication::translate("memberlogin", "Login", nullptr));
        signUpButton2->setText(QCoreApplication::translate("memberlogin", "Sign Up", nullptr));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class memberlogin: public Ui_memberlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERLOGIN_H
