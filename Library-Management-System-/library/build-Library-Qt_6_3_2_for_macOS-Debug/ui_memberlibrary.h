/********************************************************************************
** Form generated from reading UI file 'memberlibrary.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERLIBRARY_H
#define UI_MEMBERLIBRARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_memberlibrary
{
public:
    QFrame *frame_4;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QLabel *label_25;
    QLabel *label_14;
    QLabel *label_20;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *library1;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *viewEvents;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_16;
    QLabel *profile1;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *viewBorrows;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *editProfile;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *viewProfile;
    QHBoxLayout *horizontalLayout_18;
    QSpacerItem *horizontalSpacer_11;
    QLabel *catalogue;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *searchBook;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *prebook1;
    QLabel *label;
    QLabel *username;
    QLabel *label_10;
    QLabel *label_15;
    QLabel *label_3;

    void setupUi(QDialog *memberlibrary)
    {
        if (memberlibrary->objectName().isEmpty())
            memberlibrary->setObjectName(QString::fromUtf8("memberlibrary"));
        memberlibrary->resize(798, 868);
        frame_4 = new QFrame(memberlibrary);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(10, 10, 781, 851));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frame_4);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(360, 190, 401, 631));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/MemResource/headerimg.png")));

        verticalLayout_6->addWidget(label_2);

        label_25 = new QLabel(frame_3);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setStyleSheet(QString::fromUtf8("font: 600 22pt \"Work Sans\";\n"
"color: #2A3540;\n"
"border-style: none;\n"
"\n"
""));
        label_25->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_25);

        label_14 = new QLabel(frame_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_6->addWidget(label_14);

        label_20 = new QLabel(frame_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setStyleSheet(QString::fromUtf8("font: 600 22pt \"Work Sans\";\n"
"color: #2A3540;\n"
"border-style: none;"));
        label_20->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_20);

        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/MemResource/scifi.png")));

        verticalLayout_6->addWidget(label_5);

        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/MemResource/romance.png")));

        verticalLayout_6->addWidget(label_4);

        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/MemResource/thriller.png")));

        verticalLayout_6->addWidget(label_6);


        verticalLayout_3->addLayout(verticalLayout_6);

        frame = new QFrame(frame_4);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 190, 311, 391));
        frame->setStyleSheet(QString::fromUtf8("background-color: #ECECEC;\n"
"border-radius:8px"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        library1 = new QLabel(frame);
        library1->setObjectName(QString::fromUtf8("library1"));
        library1->setStyleSheet(QString::fromUtf8("image: url(:/Icons/three-books-svgrepo-com 1.png);\n"
"image-position: left;\n"
"font: 600 15pt \"Work Sans\";\n"
"color: #2A3540;"));
        library1->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(library1);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        viewEvents = new QPushButton(frame);
        viewEvents->setObjectName(QString::fromUtf8("viewEvents"));
        viewEvents->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 500 10pt \"Work Sans\";\n"
"color: #2A3540;\n"
"padding : 0 8px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#FFFFFF;\n"
"border-radius:8px;\n"
"}"));
        viewEvents->setAutoDefault(false);
        viewEvents->setFlat(true);

        horizontalLayout_5->addWidget(viewEvents);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalSpacer_16 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_16);

        profile1 = new QLabel(frame);
        profile1->setObjectName(QString::fromUtf8("profile1"));
        profile1->setStyleSheet(QString::fromUtf8("image: url(:/Icons/add member.png);\n"
"image-position: left;\n"
"font: 600 15pt \"Work Sans\";\n"
"color: #2A3540;"));
        profile1->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(profile1);


        verticalLayout->addLayout(horizontalLayout_17);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_5 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        viewBorrows = new QPushButton(frame);
        viewBorrows->setObjectName(QString::fromUtf8("viewBorrows"));
        viewBorrows->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 500 10pt \"Work Sans\";\n"
"color: #2A3540;\n"
"padding : 0 8px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#FFFFFF;\n"
"border-radius:8px;\n"
"}"));
        viewBorrows->setAutoDefault(false);
        viewBorrows->setFlat(true);

        horizontalLayout_7->addWidget(viewBorrows);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_6 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        editProfile = new QPushButton(frame);
        editProfile->setObjectName(QString::fromUtf8("editProfile"));
        editProfile->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 500 10pt \"Work Sans\";\n"
"color: #2A3540;\n"
"padding : 0 8px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#FFFFFF;\n"
"border-radius:8px;\n"
"}"));
        editProfile->setAutoDefault(false);
        editProfile->setFlat(true);

        horizontalLayout_8->addWidget(editProfile);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_7 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        viewProfile = new QPushButton(frame);
        viewProfile->setObjectName(QString::fromUtf8("viewProfile"));
        viewProfile->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 500 10pt \"Work Sans\";\n"
"color: #2A3540;\n"
"padding : 0 8px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#FFFFFF;\n"
"border-radius:8px;\n"
"}"));
        viewProfile->setAutoDefault(false);
        viewProfile->setFlat(true);

        horizontalLayout_9->addWidget(viewProfile);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalSpacer_11 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_11);

        catalogue = new QLabel(frame);
        catalogue->setObjectName(QString::fromUtf8("catalogue"));
        catalogue->setStyleSheet(QString::fromUtf8("image: url(:/Icons/school-class-library-with-books-svgrepo-com 1.png);\n"
"image-position: left;\n"
"font: 600 15pt \"Work Sans\";\n"
"color: #2A3540;"));
        catalogue->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(catalogue);


        verticalLayout->addLayout(horizontalLayout_18);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_9 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_9);

        searchBook = new QPushButton(frame);
        searchBook->setObjectName(QString::fromUtf8("searchBook"));
        searchBook->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 500 10pt \"Work Sans\";\n"
"color: #2A3540;\n"
"padding : 0 8px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#FFFFFF;\n"
"border-radius:8px;\n"
"}"));
        searchBook->setAutoDefault(false);
        searchBook->setFlat(true);

        horizontalLayout_11->addWidget(searchBook);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_10 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_10);

        prebook1 = new QPushButton(frame);
        prebook1->setObjectName(QString::fromUtf8("prebook1"));
        prebook1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 500 10pt \"Work Sans\";\n"
"color: #2A3540;\n"
"padding : 0 8px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#FFFFFF;\n"
"border-radius:8px;\n"
"}"));
        prebook1->setAutoDefault(false);
        prebook1->setFlat(true);

        horizontalLayout_12->addWidget(prebook1);


        verticalLayout->addLayout(horizontalLayout_12);

        label = new QLabel(frame_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 100, 181, 73));
        label->setStyleSheet(QString::fromUtf8("font: 700 40pt \"Work Sans\";\n"
"color:#2A3540;\n"
""));
        username = new QLabel(frame_4);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(170, 100, 383, 65));
        username->setStyleSheet(QString::fromUtf8("font: 600 35pt \"Work Sans\";\n"
"color:#2A3540;\n"
""));
        label_10 = new QLabel(frame_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(550, 110, 201, 61));
        label_10->setStyleSheet(QString::fromUtf8(""));
        label_10->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(frame_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 10, 651, 91));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/Icons/Group 6.png")));
        label_3 = new QLabel(frame_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-3, 180, 791, 671));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/MemResource/background.png")));
        label_3->raise();
        frame_3->raise();
        frame->raise();
        label->raise();
        username->raise();
        label_10->raise();
        label_15->raise();

        retranslateUi(memberlibrary);

        viewEvents->setDefault(false);
        viewBorrows->setDefault(false);
        editProfile->setDefault(false);
        viewProfile->setDefault(false);
        searchBook->setDefault(false);
        prebook1->setDefault(false);


        QMetaObject::connectSlotsByName(memberlibrary);
    } // setupUi

    void retranslateUi(QDialog *memberlibrary)
    {
        memberlibrary->setWindowTitle(QCoreApplication::translate("memberlibrary", "Dialog", nullptr));
        label_2->setText(QString());
        label_25->setText(QCoreApplication::translate("memberlibrary", "About Us", nullptr));
        label_14->setText(QCoreApplication::translate("memberlibrary", "We have all sorts of titles available to suit  your\n"
"interests and to boost your knowledge!\n"
"Choose from our categories below or search our \n"
"catalogue.\n"
"", nullptr));
        label_20->setText(QCoreApplication::translate("memberlibrary", "Book Genres", nullptr));
        label_5->setText(QString());
        label_4->setText(QString());
        label_6->setText(QString());
        library1->setText(QCoreApplication::translate("memberlibrary", "Library", nullptr));
        viewEvents->setText(QCoreApplication::translate("memberlibrary", "Events", nullptr));
        profile1->setText(QCoreApplication::translate("memberlibrary", "Profile", nullptr));
        viewBorrows->setText(QCoreApplication::translate("memberlibrary", "Borrowed Books", nullptr));
        editProfile->setText(QCoreApplication::translate("memberlibrary", "Edit Profile", nullptr));
        viewProfile->setText(QCoreApplication::translate("memberlibrary", "View Profile", nullptr));
        catalogue->setText(QCoreApplication::translate("memberlibrary", "Catalogue", nullptr));
        searchBook->setText(QCoreApplication::translate("memberlibrary", "Search", nullptr));
        prebook1->setText(QCoreApplication::translate("memberlibrary", "Prebook", nullptr));
        label->setText(QCoreApplication::translate("memberlibrary", "Kia Ora, ", nullptr));
        username->setText(QCoreApplication::translate("memberlibrary", "[+username]", nullptr));
        label_10->setText(QCoreApplication::translate("memberlibrary", "Contact us:\n"
"03 3334445\n"
"bookkeeper@library.co.nz", nullptr));
        label_15->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class memberlibrary: public Ui_memberlibrary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERLIBRARY_H
