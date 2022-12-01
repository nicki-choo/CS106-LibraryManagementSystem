/********************************************************************************
** Form generated from reading UI file 'membersignup.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERSIGNUP_H
#define UI_MEMBERSIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_membersignup
{
public:
    QGroupBox *groupBox;
    QPushButton *createButton;
    QLineEdit *phone;
    QCheckBox *checkBox;
    QLineEdit *email;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *password;
    QLabel *label_5;
    QPushButton *backButton;
    QLineEdit *username;
    QLabel *label;
    QLineEdit *lastName;
    QLineEdit *firstName;
    QComboBox *gender_2;
    QLabel *label_12;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_4;
    QLabel *label_11;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;

    void setupUi(QDialog *membersignup)
    {
        if (membersignup->objectName().isEmpty())
            membersignup->setObjectName(QString::fromUtf8("membersignup"));
        membersignup->resize(799, 448);
        groupBox = new QGroupBox(membersignup);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(340, 20, 421, 401));
        groupBox->setStyleSheet(QString::fromUtf8("font: 600 24pt \"Work Sans\";\n"
"border-color: rgb(196, 178, 255);\n"
"border-color: rgb(170, 0, 255);\n"
"color: #2A3540"));
        createButton = new QPushButton(groupBox);
        createButton->setObjectName(QString::fromUtf8("createButton"));
        createButton->setGeometry(QRect(112, 359, 88, 35));
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
        phone = new QLineEdit(groupBox);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setGeometry(QRect(112, 214, 294, 26));
        phone->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"}"));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(70, 300, 294, 27));
        email = new QLineEdit(groupBox);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(112, 178, 294, 26));
        email->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"}"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(15, 142, 79, 22));
        label_6->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"font-color: #2A3540;\n"
"background-color: none;"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(15, 214, 54, 22));
        label_7->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"font-color: #2A3540;\n"
"background-color: none;"));
        password = new QLineEdit(groupBox);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(112, 142, 294, 26));
        password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"}"));
        password->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        password->setEchoMode(QLineEdit::Password);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(15, 178, 44, 22));
        label_5->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"font-color: #2A3540;\n"
"background-color: none;"));
        backButton = new QPushButton(groupBox);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(214, 359, 192, 35));
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
        username = new QLineEdit(groupBox);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(112, 106, 294, 26));
        username->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"}"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(15, 106, 83, 22));
        label->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"font-color: #2A3540;\n"
"background-color: none;"));
        lastName = new QLineEdit(groupBox);
        lastName->setObjectName(QString::fromUtf8("lastName"));
        lastName->setGeometry(QRect(112, 70, 291, 26));
        lastName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"}"));
        firstName = new QLineEdit(groupBox);
        firstName->setObjectName(QString::fromUtf8("firstName"));
        firstName->setGeometry(QRect(112, 33, 291, 27));
        firstName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"}"));
        gender_2 = new QComboBox(groupBox);
        gender_2->addItem(QString());
        gender_2->addItem(QString());
        gender_2->setObjectName(QString::fromUtf8("gender_2"));
        gender_2->setGeometry(QRect(110, 250, 88, 26));
        gender_2->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"	background-color: none;\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"font-color: #2A3540\n"
"}\n"
"\n"
"QComboBox:hover:!pressed\n"
"{\n"
"color: light blue;\n"
"}"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(13, 250, 60, 22));
        label_12->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"color:#2A3540;"));
        label_2 = new QLabel(membersignup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 20, 211, 211));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/MemResource/Group 42.png")));
        label_3 = new QLabel(membersignup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 70, 211, 221));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/MemResource/Group 42.png")));
        label_9 = new QLabel(membersignup);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(270, 0, 531, 451));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/MemResource/background.png")));
        label_4 = new QLabel(membersignup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(360, 60, 88, 20));
        label_4->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"font-color: #2A3540;\n"
"background-color: none;"));
        label_11 = new QLabel(membersignup);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(360, 90, 88, 22));
        label_11->setStyleSheet(QString::fromUtf8("font: 600 18pt \"Work Sans\";\n"
"font-color: #2A3540;\n"
"background-color: none;"));
        layoutWidget = new QWidget(membersignup);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget1 = new QWidget(membersignup);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        layoutWidget->raise();
        layoutWidget->raise();
        label_9->raise();
        groupBox->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_11->raise();

        retranslateUi(membersignup);

        QMetaObject::connectSlotsByName(membersignup);
    } // setupUi

    void retranslateUi(QDialog *membersignup)
    {
        membersignup->setWindowTitle(QCoreApplication::translate("membersignup", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("membersignup", "Sign Up", nullptr));
        createButton->setText(QCoreApplication::translate("membersignup", "Create", nullptr));
        checkBox->setText(QCoreApplication::translate("membersignup", "Allow Notifications", nullptr));
        label_6->setText(QCoreApplication::translate("membersignup", "Password", nullptr));
        label_7->setText(QCoreApplication::translate("membersignup", "Mobile", nullptr));
        password->setText(QString());
        label_5->setText(QCoreApplication::translate("membersignup", "Email", nullptr));
        backButton->setText(QCoreApplication::translate("membersignup", "BACK TO LOGIN", nullptr));
        label->setText(QCoreApplication::translate("membersignup", "Username", nullptr));
        gender_2->setItemText(0, QCoreApplication::translate("membersignup", "Male", nullptr));
        gender_2->setItemText(1, QCoreApplication::translate("membersignup", "Female", nullptr));

        label_12->setText(QCoreApplication::translate("membersignup", "Gender", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_9->setText(QString());
        label_4->setText(QCoreApplication::translate("membersignup", "First Name", nullptr));
        label_11->setText(QCoreApplication::translate("membersignup", "Last Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class membersignup: public Ui_membersignup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERSIGNUP_H
