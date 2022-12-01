/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *loginGroup;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QPushButton *signUpButton;
    QPushButton *forgetPasswdBtn;
    QLineEdit *username;
    QLabel *label_6;
    QLineEdit *password;
    QPushButton *loginButton;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(779, 553);
        Login->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(Login);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_5 = new QLabel(Login);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8(""));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Icons/Group 6.png")));

        horizontalLayout_2->addWidget(label_5);

        horizontalSpacer_4 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        loginGroup = new QGroupBox(Login);
        loginGroup->setObjectName("loginGroup");
        loginGroup->setStyleSheet(QString::fromUtf8("font: 600 24pt \"Work Sans\";\n"
"border-color: rgb(196, 178, 255);\n"
"border-color: rgb(170, 0, 255);\n"
"color: #2A3540"));
        gridLayout_2 = new QGridLayout(loginGroup);
        gridLayout_2->setObjectName("gridLayout_2");
        label_7 = new QLabel(loginGroup);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"font-color: #2A3540;\n"
"background-color: none;"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        signUpButton = new QPushButton(loginGroup);
        signUpButton->setObjectName("signUpButton");
        signUpButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_2->addWidget(signUpButton, 2, 2, 1, 1);

        forgetPasswdBtn = new QPushButton(loginGroup);
        forgetPasswdBtn->setObjectName("forgetPasswdBtn");
        forgetPasswdBtn->setFocusPolicy(Qt::ClickFocus);
        forgetPasswdBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"}"));

        gridLayout_2->addWidget(forgetPasswdBtn, 3, 1, 1, 2);

        username = new QLineEdit(loginGroup);
        username->setObjectName("username");
        username->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"}"));

        gridLayout_2->addWidget(username, 0, 1, 1, 2);

        label_6 = new QLabel(loginGroup);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"font-color: #2A3540;\n"
"background-color: none;"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        password = new QLineEdit(loginGroup);
        password->setObjectName("password");
        password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"}"));
        password->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(password, 1, 1, 1, 2);

        loginButton = new QPushButton(loginGroup);
        loginButton->setObjectName("loginButton");
        loginButton->setMouseTracking(true);
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        loginButton->setAutoDefault(true);

        gridLayout_2->addWidget(loginButton, 2, 1, 1, 1);


        verticalLayout->addWidget(loginGroup);


        retranslateUi(Login);

        loginButton->setDefault(false);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        label_5->setText(QString());
        loginGroup->setTitle(QCoreApplication::translate("Login", "LOGIN", nullptr));
        label_7->setText(QCoreApplication::translate("Login", "USERNAME", nullptr));
        signUpButton->setText(QCoreApplication::translate("Login", "SIGN UP", nullptr));
        forgetPasswdBtn->setText(QCoreApplication::translate("Login", "FORGET PASSWORD", nullptr));
        label_6->setText(QCoreApplication::translate("Login", "PASSWORD", nullptr));
        loginButton->setText(QCoreApplication::translate("Login", "LOGIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
