/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signUp
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QPushButton *backButton;
    QPushButton *createButton;
    QLabel *label;
    QLineEdit *username;
    QLabel *label_2;
    QLineEdit *name;
    QLineEdit *password;

    void setupUi(QDialog *signUp)
    {
        if (signUp->objectName().isEmpty())
            signUp->setObjectName(QString::fromUtf8("signUp"));
        signUp->resize(517, 486);
        signUp->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        groupBox = new QGroupBox(signUp);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(11, 11, 501, 471));
        groupBox->setStyleSheet(QString::fromUtf8("font: 600 24pt \"Work Sans\";\n"
"border-color: rgb(196, 178, 255);\n"
"border-color: rgb(170, 0, 255);\n"
"color: #2A3540"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"font-color: #2A3540;\n"
"background-color: none;"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

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

        gridLayout->addWidget(backButton, 3, 2, 1, 1);

        createButton = new QPushButton(groupBox);
        createButton->setObjectName(QString::fromUtf8("createButton"));
        createButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(createButton, 3, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"font-color: #2A3540;\n"
"background-color: none;"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        username = new QLineEdit(groupBox);
        username->setObjectName(QString::fromUtf8("username"));
        username->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"}"));

        gridLayout->addWidget(username, 0, 1, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"font-color: #2A3540;\n"
"background-color: none;"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        name = new QLineEdit(groupBox);
        name->setObjectName(QString::fromUtf8("name"));
        name->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"}"));

        gridLayout->addWidget(name, 1, 1, 1, 2);

        password = new QLineEdit(groupBox);
        password->setObjectName(QString::fromUtf8("password"));
        password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"}"));
        password->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 2, 1, 1, 2);


        retranslateUi(signUp);

        QMetaObject::connectSlotsByName(signUp);
    } // setupUi

    void retranslateUi(QDialog *signUp)
    {
        signUp->setWindowTitle(QCoreApplication::translate("signUp", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("signUp", "Sign Up", nullptr));
        label_3->setText(QCoreApplication::translate("signUp", "PASSWORD", nullptr));
        backButton->setText(QCoreApplication::translate("signUp", "BACK", nullptr));
        createButton->setText(QCoreApplication::translate("signUp", "CREATE", nullptr));
        label->setText(QCoreApplication::translate("signUp", "USERNAME", nullptr));
        label_2->setText(QCoreApplication::translate("signUp", "NAME", nullptr));
        password->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signUp: public Ui_signUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
