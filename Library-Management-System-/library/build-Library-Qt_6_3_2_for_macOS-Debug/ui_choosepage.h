/********************************************************************************
** Form generated from reading UI file 'choosepage.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEPAGE_H
#define UI_CHOOSEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_choosepage
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *adminButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *memberButton;

    void setupUi(QDialog *choosepage)
    {
        if (choosepage->objectName().isEmpty())
            choosepage->setObjectName(QString::fromUtf8("choosepage"));
        choosepage->resize(697, 515);
        widget = new QWidget(choosepage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 100, 576, 285));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/MemResource/adminimg.png")));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/MemResource/memberimg.png")));

        horizontalLayout->addWidget(label_2);

        widget1 = new QWidget(choosepage);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(160, 400, 395, 32));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        adminButton = new QPushButton(widget1);
        adminButton->setObjectName(QString::fromUtf8("adminButton"));

        horizontalLayout_2->addWidget(adminButton);

        horizontalSpacer = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        memberButton = new QPushButton(widget1);
        memberButton->setObjectName(QString::fromUtf8("memberButton"));

        horizontalLayout_2->addWidget(memberButton);


        retranslateUi(choosepage);

        QMetaObject::connectSlotsByName(choosepage);
    } // setupUi

    void retranslateUi(QDialog *choosepage)
    {
        choosepage->setWindowTitle(QCoreApplication::translate("choosepage", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        adminButton->setText(QCoreApplication::translate("choosepage", "ADMIN", nullptr));
        memberButton->setText(QCoreApplication::translate("choosepage", "MEMBER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class choosepage: public Ui_choosepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEPAGE_H
