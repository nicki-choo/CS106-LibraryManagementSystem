/********************************************************************************
** Form generated from reading UI file 'deletebook.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEBOOK_H
#define UI_DELETEBOOK_H

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

class Ui_deleteBook
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
    QPushButton *deleteBookBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *deleteBook)
    {
        if (deleteBook->objectName().isEmpty())
            deleteBook->setObjectName(QString::fromUtf8("deleteBook"));
        deleteBook->resize(400, 163);
        deleteBook->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout_2 = new QVBoxLayout(deleteBook);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(deleteBook);
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
        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        deleteBookBtn = new QPushButton(frame);
        deleteBookBtn->setObjectName(QString::fromUtf8("deleteBookBtn"));
        deleteBookBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_2->addWidget(deleteBookBtn);

        horizontalSpacer_2 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(frame);


        retranslateUi(deleteBook);

        QMetaObject::connectSlotsByName(deleteBook);
    } // setupUi

    void retranslateUi(QDialog *deleteBook)
    {
        deleteBook->setWindowTitle(QCoreApplication::translate("deleteBook", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("deleteBook", "Book ID ", nullptr));
        deleteBookBtn->setText(QCoreApplication::translate("deleteBook", "DELETE BOOK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteBook: public Ui_deleteBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEBOOK_H
