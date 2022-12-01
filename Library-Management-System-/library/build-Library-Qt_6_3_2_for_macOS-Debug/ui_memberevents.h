/********************************************************************************
** Form generated from reading UI file 'memberevents.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBEREVENTS_H
#define UI_MEMBEREVENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_memberevents
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frame_3;
    QLabel *label_15;
    QLabel *label_4;
    QLabel *label_10;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_11;
    QLabel *label;

    void setupUi(QDialog *memberevents)
    {
        if (memberevents->objectName().isEmpty())
            memberevents->setObjectName(QString::fromUtf8("memberevents"));
        memberevents->resize(685, 620);
        buttonBox = new QDialogButtonBox(memberevents);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(100, 560, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frame_3 = new QFrame(memberevents);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(20, 10, 651, 541));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_15 = new QLabel(frame_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 80, 391, 41));
        label_15->setStyleSheet(QString::fromUtf8("font: 600 22pt \"Work Sans\";\n"
"color: #2A3540;\n"
"border-style: none;"));
        label_15->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(17, 345, 301, 171));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/MemResource/eventsimg2.jpeg")));
        label_10 = new QLabel(frame_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(370, 390, 201, 61));
        label_10->setStyleSheet(QString::fromUtf8(""));
        label_10->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 161, 61));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 40pt \"Work Sans\";\n"
"color:#2A3540;\n"
""));
        widget = new QWidget(frame_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(13, 131, 611, 211));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8(""));
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_11);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/MemResource/download.jpeg")));

        horizontalLayout->addWidget(label);


        retranslateUi(memberevents);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, memberevents, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, memberevents, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(memberevents);
    } // setupUi

    void retranslateUi(QDialog *memberevents)
    {
        memberevents->setWindowTitle(QCoreApplication::translate("memberevents", "Dialog", nullptr));
        label_15->setText(QCoreApplication::translate("memberevents", "Weekly updates for events at our library", nullptr));
        label_4->setText(QString());
        label_10->setText(QCoreApplication::translate("memberevents", "Every Friday at 3pm \n"
"a live musician arrives to entertain", nullptr));
        label_2->setText(QCoreApplication::translate("memberevents", "Events", nullptr));
        label_11->setText(QCoreApplication::translate("memberevents", "Buskers festival Friday 2nd December \n"
"a on the front lawn so bring the whole family!", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class memberevents: public Ui_memberevents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBEREVENTS_H
