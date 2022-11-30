/********************************************************************************
** Form generated from reading UI file 'digitallibrary.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGITALLIBRARY_H
#define UI_DIGITALLIBRARY_H

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

class Ui_digitalLibrary
{
public:
    QFrame *frame_4;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *username;
    QHBoxLayout *horizontalLayout_21;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_24;
    QSpacerItem *verticalSpacer_10;
    QLabel *bookNum;
    QSpacerItem *horizontalSpacer_19;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_20;
    QSpacerItem *verticalSpacer_8;
    QLabel *memberNum;
    QSpacerItem *horizontalSpacer_21;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_20;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_13;
    QSpacerItem *verticalSpacer_7;
    QLabel *authorNum;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_15;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *cover_1;
    QLabel *cover_2;
    QLabel *cover_3;
    QLabel *cover_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *manageGenre;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *manageAuthorButton;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *addMemberBtn;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *editMemberBtn;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *deleteMemberBtn;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *membersListBtn;
    QHBoxLayout *horizontalLayout_18;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *addBookBtn;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *editBookBtn;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *deleteBookBtn;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *booksListBtn;
    QHBoxLayout *horizontalLayout_19;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *issueBookBtn;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *returnBookBtn;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *prebookbookbtn;
    QLabel *label_2;

    void setupUi(QDialog *digitalLibrary)
    {
        if (digitalLibrary->objectName().isEmpty())
            digitalLibrary->setObjectName(QString::fromUtf8("digitalLibrary"));
        digitalLibrary->resize(850, 864);
        frame_4 = new QFrame(digitalLibrary);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(12, 12, 826, 821));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frame_4);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(238, 13, 551, 771));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(frame_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 700 40pt \"Work Sans\";\n"
"color:#2A3540;\n"
""));

        verticalLayout_2->addWidget(label);

        username = new QLabel(frame_3);
        username->setObjectName(QString::fromUtf8("username"));
        username->setStyleSheet(QString::fromUtf8("font: 600 35pt \"Work Sans\";\n"
"color:#2A3540;\n"
""));

        verticalLayout_2->addWidget(username);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        frame_9 = new QFrame(frame_3);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 8px;\n"
"border-style: solid;\n"
"border-color: #001873;\n"
"border-width: 2px;"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        verticalLayout_12 = new QVBoxLayout(frame_9);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        label_24 = new QLabel(frame_9);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setStyleSheet(QString::fromUtf8("font: 600 22pt \"Work Sans\";\n"
"color: #2A3540;\n"
"border-style: none;\n"
"\n"
""));
        label_24->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(label_24);

        verticalSpacer_10 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_13->addItem(verticalSpacer_10);

        bookNum = new QLabel(frame_9);
        bookNum->setObjectName(QString::fromUtf8("bookNum"));
        bookNum->setStyleSheet(QString::fromUtf8("font: 600 25pt \"Work Sans\";\n"
"color: #2A3540;\n"
"border-style: none;\n"
""));
        bookNum->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(bookNum);


        verticalLayout_12->addLayout(verticalLayout_13);


        horizontalLayout_21->addWidget(frame_9);

        horizontalSpacer_19 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_19);

        frame_8 = new QFrame(frame_3);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setStyleSheet(QString::fromUtf8("border-radius: 8px;\n"
"border-style: solid;\n"
"border-color: #001873;\n"
"border-width: 2px;"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(frame_8);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_20 = new QLabel(frame_8);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setStyleSheet(QString::fromUtf8("font: 600 22pt \"Work Sans\";\n"
"color: #2A3540;\n"
"border-style: none;"));
        label_20->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_20);

        verticalSpacer_8 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_8);

        memberNum = new QLabel(frame_8);
        memberNum->setObjectName(QString::fromUtf8("memberNum"));
        memberNum->setStyleSheet(QString::fromUtf8("font: 600 25pt \"Work Sans\";\n"
"color: #2A3540;\n"
"border-style: none;\n"
""));
        memberNum->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(memberNum);


        verticalLayout_9->addLayout(verticalLayout_8);


        horizontalLayout_21->addWidget(frame_8);

        horizontalSpacer_21 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_21);

        frame_6 = new QFrame(frame_3);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setStyleSheet(QString::fromUtf8("border-radius: 8px;\n"
"border-style: solid;\n"
"border-color: #001873;\n"
"border-width: 2px;"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_20 = new QHBoxLayout(frame_6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_13 = new QLabel(frame_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setStyleSheet(QString::fromUtf8("font: 600 22pt \"Work Sans\";\n"
"color: #2A3540;\n"
"border-style: none;"));
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_13);

        verticalSpacer_7 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_7);

        authorNum = new QLabel(frame_6);
        authorNum->setObjectName(QString::fromUtf8("authorNum"));
        authorNum->setStyleSheet(QString::fromUtf8("font: 600 25pt \"Work Sans\";\n"
"color: #2A3540;\n"
"border-style: none;\n"
""));
        authorNum->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(authorNum);


        horizontalLayout_20->addLayout(verticalLayout_7);


        horizontalLayout_21->addWidget(frame_6);


        verticalLayout_3->addLayout(horizontalLayout_21);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_3 = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_3);

        frame_7 = new QFrame(frame_3);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setStyleSheet(QString::fromUtf8("border-radius: 8px;\n"
"border-style: solid;\n"
"border-color: #001873;\n"
"border-width: 2px;"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_7);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_15 = new QLabel(frame_7);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setStyleSheet(QString::fromUtf8("font: 600 22pt \"Work Sans\";\n"
"color: #2A3540;\n"
"border-style: none;"));
        label_15->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_15);

        verticalSpacer_6 = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        cover_1 = new QLabel(frame_7);
        cover_1->setObjectName(QString::fromUtf8("cover_1"));
        cover_1->setStyleSheet(QString::fromUtf8("border-style: none;"));

        horizontalLayout_2->addWidget(cover_1);

        cover_2 = new QLabel(frame_7);
        cover_2->setObjectName(QString::fromUtf8("cover_2"));
        cover_2->setStyleSheet(QString::fromUtf8("border-style: none;"));

        horizontalLayout_2->addWidget(cover_2);

        cover_3 = new QLabel(frame_7);
        cover_3->setObjectName(QString::fromUtf8("cover_3"));
        cover_3->setStyleSheet(QString::fromUtf8("border-style: none;"));

        horizontalLayout_2->addWidget(cover_3);

        cover_4 = new QLabel(frame_7);
        cover_4->setObjectName(QString::fromUtf8("cover_4"));
        cover_4->setStyleSheet(QString::fromUtf8("border-style: none;"));

        horizontalLayout_2->addWidget(cover_4);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_4->addWidget(frame_7);


        verticalLayout_3->addLayout(verticalLayout_4);

        frame = new QFrame(frame_4);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(14, 122, 192, 661));
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

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/Icons/three-books-svgrepo-com 1.png);\n"
"image-position: left;\n"
"font: 600 15pt \"Work Sans\";\n"
"color: #2A3540;"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        manageGenre = new QPushButton(frame);
        manageGenre->setObjectName(QString::fromUtf8("manageGenre"));
        manageGenre->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 500 10pt \"Work Sans\";\n"
"color: #2A3540;\n"
"padding : 0 8px;\n"
"\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#FFFFFF;\n"
"border-radius:8px;\n"
"}"));
        manageGenre->setAutoDefault(false);
        manageGenre->setFlat(true);

        horizontalLayout_5->addWidget(manageGenre);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_18 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_18);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/Icons/writer-svgrepo-com 1.png);\n"
"image-position: left;\n"
"font: 600 15pt \"Work Sans\";\n"
"color: #2A3540;"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        manageAuthorButton = new QPushButton(frame);
        manageAuthorButton->setObjectName(QString::fromUtf8("manageAuthorButton"));
        manageAuthorButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 500 10pt \"Work Sans\";\n"
"color: #2A3540;\n"
"padding : 0 8px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#FFFFFF;\n"
"border-radius:8px;\n"
"}"));
        manageAuthorButton->setAutoDefault(false);
        manageAuthorButton->setFlat(true);

        horizontalLayout_6->addWidget(manageAuthorButton);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalSpacer_16 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_16);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("image: url(:/Icons/add member.png);\n"
"image-position: left;\n"
"font: 600 15pt \"Work Sans\";\n"
"color: #2A3540;"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_17);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_5 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        addMemberBtn = new QPushButton(frame);
        addMemberBtn->setObjectName(QString::fromUtf8("addMemberBtn"));
        addMemberBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 500 10pt \"Work Sans\";\n"
"color: #2A3540;\n"
"padding : 0 8px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#FFFFFF;\n"
"border-radius:8px;\n"
"}"));
        addMemberBtn->setAutoDefault(false);
        addMemberBtn->setFlat(true);

        horizontalLayout_7->addWidget(addMemberBtn);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_6 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        editMemberBtn = new QPushButton(frame);
        editMemberBtn->setObjectName(QString::fromUtf8("editMemberBtn"));
        editMemberBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 500 10pt \"Work Sans\";\n"
"color: #2A3540;\n"
"padding : 0 8px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#FFFFFF;\n"
"border-radius:8px;\n"
"}"));
        editMemberBtn->setAutoDefault(false);
        editMemberBtn->setFlat(true);

        horizontalLayout_8->addWidget(editMemberBtn);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_7 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        deleteMemberBtn = new QPushButton(frame);
        deleteMemberBtn->setObjectName(QString::fromUtf8("deleteMemberBtn"));
        deleteMemberBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 500 10pt \"Work Sans\";\n"
"color: #2A3540;\n"
"padding : 0 8px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#FFFFFF;\n"
"border-radius:8px;\n"
"}"));
        deleteMemberBtn->setAutoDefault(false);
        deleteMemberBtn->setFlat(true);

        horizontalLayout_9->addWidget(deleteMemberBtn);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_8 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        membersListBtn = new QPushButton(frame);
        membersListBtn->setObjectName(QString::fromUtf8("membersListBtn"));
        membersListBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 500 10pt \"Work Sans\";\n"
"color: #2A3540;\n"
"padding : 0 8px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#FFFFFF;\n"
"border-radius:8px;\n"
"}"));
        membersListBtn->setAutoDefault(false);
        membersListBtn->setFlat(true);

        horizontalLayout_10->addWidget(membersListBtn);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalSpacer_11 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_11);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("image: url(:/Icons/school-class-library-with-books-svgrepo-com 1.png);\n"
"image-position: left;\n"
"font: 600 15pt \"Work Sans\";\n"
"color: #2A3540;"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(label_8);


        verticalLayout->addLayout(horizontalLayout_18);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_9 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_9);

        addBookBtn = new QPushButton(frame);
        addBookBtn->setObjectName(QString::fromUtf8("addBookBtn"));
        addBookBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 500 10pt \"Work Sans\";\n"
"color: #2A3540;\n"
"padding : 0 8px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#FFFFFF;\n"
"border-radius:8px;\n"
"}"));
        addBookBtn->setAutoDefault(false);
        addBookBtn->setFlat(true);

        horizontalLayout_11->addWidget(addBookBtn);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_10 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_10);

        editBookBtn = new QPushButton(frame);
        editBookBtn->setObjectName(QString::fromUtf8("editBookBtn"));
        editBookBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 500 10pt \"Work Sans\";\n"
"color: #2A3540;\n"
"padding : 0 8px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#FFFFFF;\n"
"border-radius:8px;\n"
"}"));
        editBookBtn->setAutoDefault(false);
        editBookBtn->setFlat(true);

        horizontalLayout_12->addWidget(editBookBtn);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_12 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_12);

        deleteBookBtn = new QPushButton(frame);
        deleteBookBtn->setObjectName(QString::fromUtf8("deleteBookBtn"));
        deleteBookBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 500 10pt \"Work Sans\";\n"
"color: #2A3540;\n"
"padding : 0 8px;\n"
"}\n"
"\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#FFFFFF;\n"
"border-radius:8px;\n"
"}"));
        deleteBookBtn->setAutoDefault(false);
        deleteBookBtn->setFlat(true);

        horizontalLayout_13->addWidget(deleteBookBtn);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalSpacer_13 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_13);

        booksListBtn = new QPushButton(frame);
        booksListBtn->setObjectName(QString::fromUtf8("booksListBtn"));
        booksListBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 500 10pt \"Work Sans\";\n"
"color: #2A3540;\n"
"padding : 0 8px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#FFFFFF;\n"
"border-radius:8px;\n"
"}"));
        booksListBtn->setAutoDefault(false);
        booksListBtn->setFlat(true);

        horizontalLayout_14->addWidget(booksListBtn);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalSpacer_17 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_17);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("image: url(:/Icons/Group 82.png);\n"
"image-position: left;\n"
"font: 600 15pt \"Work Sans\";\n"
"color: #2A3540;"));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_19->addWidget(label_9);


        verticalLayout->addLayout(horizontalLayout_19);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalSpacer_14 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_14);

        issueBookBtn = new QPushButton(frame);
        issueBookBtn->setObjectName(QString::fromUtf8("issueBookBtn"));
        issueBookBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 500 10pt \"Work Sans\";\n"
"color: #2A3540;\n"
"padding : 0 8px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#FFFFFF;\n"
"border-radius:8px;\n"
"}"));
        issueBookBtn->setAutoDefault(false);
        issueBookBtn->setFlat(true);

        horizontalLayout_15->addWidget(issueBookBtn);


        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalSpacer_15 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_15);

        returnBookBtn = new QPushButton(frame);
        returnBookBtn->setObjectName(QString::fromUtf8("returnBookBtn"));
        returnBookBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 500 10pt \"Work Sans\";\n"
"color: #2A3540;\n"
"padding : 0 8px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#FFFFFF;\n"
"border-radius:8px;\n"
"}"));
        returnBookBtn->setAutoDefault(false);
        returnBookBtn->setFlat(true);

        horizontalLayout_16->addWidget(returnBookBtn);


        verticalLayout->addLayout(horizontalLayout_16);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        prebookbookbtn = new QPushButton(frame);
        prebookbookbtn->setObjectName(QString::fromUtf8("prebookbookbtn"));
        prebookbookbtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 500 10pt \"Work Sans\";\n"
"color: #2A3540;\n"
"padding : 0 8px;\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"background:#FFFFFF;\n"
"border-radius:8px;\n"
"}"));

        horizontalLayout->addWidget(prebookbookbtn);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(frame_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 10, 101, 101));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Icons/Group 42.jpg")));
        label_2->setScaledContents(true);

        retranslateUi(digitalLibrary);

        manageGenre->setDefault(false);
        manageAuthorButton->setDefault(false);
        addMemberBtn->setDefault(false);
        editMemberBtn->setDefault(false);
        deleteMemberBtn->setDefault(false);
        membersListBtn->setDefault(false);
        addBookBtn->setDefault(false);
        editBookBtn->setDefault(false);
        deleteBookBtn->setDefault(false);
        booksListBtn->setDefault(false);
        issueBookBtn->setDefault(false);
        returnBookBtn->setDefault(false);


        QMetaObject::connectSlotsByName(digitalLibrary);
    } // setupUi

    void retranslateUi(QDialog *digitalLibrary)
    {
        digitalLibrary->setWindowTitle(QCoreApplication::translate("digitalLibrary", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("digitalLibrary", "WELCOME BACK ", nullptr));
        username->setText(QCoreApplication::translate("digitalLibrary", "[+username]", nullptr));
        label_24->setText(QCoreApplication::translate("digitalLibrary", "Books", nullptr));
        bookNum->setText(QCoreApplication::translate("digitalLibrary", "50", nullptr));
        label_20->setText(QCoreApplication::translate("digitalLibrary", "Members", nullptr));
        memberNum->setText(QCoreApplication::translate("digitalLibrary", "22", nullptr));
        label_13->setText(QCoreApplication::translate("digitalLibrary", "Authors", nullptr));
        authorNum->setText(QCoreApplication::translate("digitalLibrary", "7", nullptr));
        label_15->setText(QCoreApplication::translate("digitalLibrary", "Latest Book Added", nullptr));
        cover_1->setText(QString());
        cover_2->setText(QString());
        cover_3->setText(QString());
        cover_4->setText(QString());
        label_5->setText(QCoreApplication::translate("digitalLibrary", "Genres", nullptr));
        manageGenre->setText(QCoreApplication::translate("digitalLibrary", "Manage Genres", nullptr));
        label_6->setText(QCoreApplication::translate("digitalLibrary", "Authors", nullptr));
        manageAuthorButton->setText(QCoreApplication::translate("digitalLibrary", "Manage Authors", nullptr));
        label_7->setText(QCoreApplication::translate("digitalLibrary", "Members", nullptr));
        addMemberBtn->setText(QCoreApplication::translate("digitalLibrary", "Add Member", nullptr));
        editMemberBtn->setText(QCoreApplication::translate("digitalLibrary", "Edit Member", nullptr));
        deleteMemberBtn->setText(QCoreApplication::translate("digitalLibrary", "Delete Member", nullptr));
        membersListBtn->setText(QCoreApplication::translate("digitalLibrary", "Members List", nullptr));
        label_8->setText(QCoreApplication::translate("digitalLibrary", "Books", nullptr));
        addBookBtn->setText(QCoreApplication::translate("digitalLibrary", "Add Book", nullptr));
        editBookBtn->setText(QCoreApplication::translate("digitalLibrary", "Edit Book", nullptr));
        deleteBookBtn->setText(QCoreApplication::translate("digitalLibrary", "Delete Book", nullptr));
        booksListBtn->setText(QCoreApplication::translate("digitalLibrary", "Books List", nullptr));
        label_9->setText(QCoreApplication::translate("digitalLibrary", "Circulation", nullptr));
        issueBookBtn->setText(QCoreApplication::translate("digitalLibrary", "Issue Book", nullptr));
        returnBookBtn->setText(QCoreApplication::translate("digitalLibrary", "Return Book", nullptr));
        prebookbookbtn->setText(QCoreApplication::translate("digitalLibrary", "Prebook Book", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class digitalLibrary: public Ui_digitalLibrary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGITALLIBRARY_H
