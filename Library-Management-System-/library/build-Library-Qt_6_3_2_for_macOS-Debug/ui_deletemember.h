/********************************************************************************
** Form generated from reading UI file 'deletemember.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEMEMBER_H
#define UI_DELETEMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_deleteMember
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *ID;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *deleteMemberBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *deleteMember)
    {
        if (deleteMember->objectName().isEmpty())
            deleteMember->setObjectName(QString::fromUtf8("deleteMember"));
        deleteMember->resize(397, 152);
        deleteMember->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout_2 = new QVBoxLayout(deleteMember);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(deleteMember);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        horizontalLayout->addWidget(label);

        ID = new QLineEdit(frame);
        ID->setObjectName(QString::fromUtf8("ID"));
        ID->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"	font-color: #2A3540;\n"
"}"));

        horizontalLayout->addWidget(ID);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        deleteMemberBtn = new QPushButton(frame);
        deleteMemberBtn->setObjectName(QString::fromUtf8("deleteMemberBtn"));
        deleteMemberBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_2->addWidget(deleteMemberBtn);

        horizontalSpacer_2 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(frame);


        retranslateUi(deleteMember);

        QMetaObject::connectSlotsByName(deleteMember);
    } // setupUi

    void retranslateUi(QDialog *deleteMember)
    {
        deleteMember->setWindowTitle(QCoreApplication::translate("deleteMember", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("deleteMember", "Member ID ", nullptr));
        deleteMemberBtn->setText(QCoreApplication::translate("deleteMember", "DELETE MEMBER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteMember: public Ui_deleteMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEMEMBER_H
