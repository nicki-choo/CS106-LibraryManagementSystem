/********************************************************************************
** Form generated from reading UI file 'newpasswd.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPASSWD_H
#define UI_NEWPASSWD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_newPasswd
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *username;
    QLabel *label;
    QLineEdit *name;
    QLabel *label_2;
    QPushButton *backButton;
    QLineEdit *newpass;
    QLabel *label_3;
    QPushButton *submitButton;

    void setupUi(QDialog *newPasswd)
    {
        if (newPasswd->objectName().isEmpty())
            newPasswd->setObjectName(QString::fromUtf8("newPasswd"));
        newPasswd->resize(502, 589);
        newPasswd->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(newPasswd);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(newPasswd);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("font: 600 24pt \"Work Sans\";\n"
"border-color: rgb(196, 178, 255);\n"
"border-color: rgb(170, 0, 255);\n"
"color: #2A3540"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        username = new QLineEdit(groupBox);
        username->setObjectName(QString::fromUtf8("username"));
        username->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"}"));

        gridLayout->addWidget(username, 0, 1, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"font-color: #2A3540;\n"
"background-color: none;"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        name = new QLineEdit(groupBox);
        name->setObjectName(QString::fromUtf8("name"));
        name->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"}"));

        gridLayout->addWidget(name, 1, 1, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"font-color: #2A3540;\n"
"background-color: none;"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        backButton = new QPushButton(groupBox);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(backButton, 3, 1, 1, 1);

        newpass = new QLineEdit(groupBox);
        newpass->setObjectName(QString::fromUtf8("newpass"));
        newpass->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"}"));
        newpass->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(newpass, 2, 1, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"font-color: #2A3540;\n"
"background-color: none;"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        submitButton = new QPushButton(groupBox);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(submitButton, 3, 2, 1, 1);


        verticalLayout->addWidget(groupBox);


        retranslateUi(newPasswd);

        QMetaObject::connectSlotsByName(newPasswd);
    } // setupUi

    void retranslateUi(QDialog *newPasswd)
    {
        newPasswd->setWindowTitle(QCoreApplication::translate("newPasswd", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("newPasswd", "Forget Password", nullptr));
        label->setText(QCoreApplication::translate("newPasswd", "USERNAME", nullptr));
        label_2->setText(QCoreApplication::translate("newPasswd", "NEW PASSWORD", nullptr));
        backButton->setText(QCoreApplication::translate("newPasswd", "BACK", nullptr));
        label_3->setText(QCoreApplication::translate("newPasswd", "NAME", nullptr));
        submitButton->setText(QCoreApplication::translate("newPasswd", "SUBMIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newPasswd: public Ui_newPasswd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPASSWD_H
