/********************************************************************************
** Form generated from reading UI file 'membersearch1.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERSEARCH1_H
#define UI_MEMBERSEARCH1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_membersearch1
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *coverLabel;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLabel *ISBN;
    QLabel *name;
    QLabel *author;
    QLabel *genre;
    QLabel *publisher;
    QLabel *price;
    QLabel *quantity;
    QLabel *date;
    QLabel *desc;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *value;
    QTableView *tableView;

    void setupUi(QDialog *membersearch1)
    {
        if (membersearch1->objectName().isEmpty())
            membersearch1->setObjectName(QString::fromUtf8("membersearch1"));
        membersearch1->resize(895, 560);
        buttonBox = new QDialogButtonBox(membersearch1);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(-240, 481, 461, 31));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frame_2 = new QFrame(membersearch1);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(500, 10, 351, 501));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        coverLabel = new QLabel(frame_2);
        coverLabel->setObjectName(QString::fromUtf8("coverLabel"));
        coverLabel->setFocusPolicy(Qt::StrongFocus);
        coverLabel->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;\n"
"background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;"));
        coverLabel->setFrameShape(QFrame::Box);
        coverLabel->setFrameShadow(QFrame::Raised);
        coverLabel->setMidLineWidth(1);

        horizontalLayout_2->addWidget(coverLabel);

        horizontalSpacer = new QSpacerItem(138, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        ISBN = new QLabel(frame_2);
        ISBN->setObjectName(QString::fromUtf8("ISBN"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ISBN->sizePolicy().hasHeightForWidth());
        ISBN->setSizePolicy(sizePolicy);
        ISBN->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        verticalLayout_3->addWidget(ISBN);

        name = new QLabel(frame_2);
        name->setObjectName(QString::fromUtf8("name"));
        sizePolicy.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy);
        name->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        verticalLayout_3->addWidget(name);

        author = new QLabel(frame_2);
        author->setObjectName(QString::fromUtf8("author"));
        sizePolicy.setHeightForWidth(author->sizePolicy().hasHeightForWidth());
        author->setSizePolicy(sizePolicy);
        author->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        verticalLayout_3->addWidget(author);

        genre = new QLabel(frame_2);
        genre->setObjectName(QString::fromUtf8("genre"));
        sizePolicy.setHeightForWidth(genre->sizePolicy().hasHeightForWidth());
        genre->setSizePolicy(sizePolicy);
        genre->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        verticalLayout_3->addWidget(genre);

        publisher = new QLabel(frame_2);
        publisher->setObjectName(QString::fromUtf8("publisher"));
        sizePolicy.setHeightForWidth(publisher->sizePolicy().hasHeightForWidth());
        publisher->setSizePolicy(sizePolicy);
        publisher->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        verticalLayout_3->addWidget(publisher);

        price = new QLabel(frame_2);
        price->setObjectName(QString::fromUtf8("price"));
        sizePolicy.setHeightForWidth(price->sizePolicy().hasHeightForWidth());
        price->setSizePolicy(sizePolicy);
        price->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        verticalLayout_3->addWidget(price);

        quantity = new QLabel(frame_2);
        quantity->setObjectName(QString::fromUtf8("quantity"));
        sizePolicy.setHeightForWidth(quantity->sizePolicy().hasHeightForWidth());
        quantity->setSizePolicy(sizePolicy);
        quantity->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        verticalLayout_3->addWidget(quantity);

        date = new QLabel(frame_2);
        date->setObjectName(QString::fromUtf8("date"));
        sizePolicy.setHeightForWidth(date->sizePolicy().hasHeightForWidth());
        date->setSizePolicy(sizePolicy);
        date->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        verticalLayout_3->addWidget(date);

        desc = new QLabel(frame_2);
        desc->setObjectName(QString::fromUtf8("desc"));
        sizePolicy.setHeightForWidth(desc->sizePolicy().hasHeightForWidth());
        desc->setSizePolicy(sizePolicy);
        desc->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        verticalLayout_3->addWidget(desc);


        verticalLayout_4->addLayout(verticalLayout_3);

        frame = new QFrame(membersearch1);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 491, 471));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("font: 500 15pt \"Work Sans\";\n"
"color: #2A3540;"));

        horizontalLayout->addWidget(label);

        value = new QLineEdit(frame);
        value->setObjectName(QString::fromUtf8("value"));
        value->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 20pt \"Work Sans\";\n"
"font-color: #2A3540\n"
"}"));

        horizontalLayout->addWidget(value);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(frame);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setStyleSheet(QString::fromUtf8("QTableView { background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	border-color: #001873;\n"
"	font: 18pt \"Work Sans\";\n"
"font-color: #2A3540;}\n"
""));
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->horizontalHeader()->setHighlightSections(true);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setHighlightSections(false);

        verticalLayout->addWidget(tableView);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(membersearch1);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, membersearch1, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, membersearch1, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(membersearch1);
    } // setupUi

    void retranslateUi(QDialog *membersearch1)
    {
        membersearch1->setWindowTitle(QCoreApplication::translate("membersearch1", "Dialog", nullptr));
        coverLabel->setText(QString());
        ISBN->setText(QCoreApplication::translate("membersearch1", "ISBN", nullptr));
        name->setText(QCoreApplication::translate("membersearch1", "Name", nullptr));
        author->setText(QCoreApplication::translate("membersearch1", "Author", nullptr));
        genre->setText(QCoreApplication::translate("membersearch1", "Genre", nullptr));
        publisher->setText(QCoreApplication::translate("membersearch1", "Publisher", nullptr));
        price->setText(QCoreApplication::translate("membersearch1", "Price", nullptr));
        quantity->setText(QCoreApplication::translate("membersearch1", "Quantity", nullptr));
        date->setText(QCoreApplication::translate("membersearch1", "Date Received", nullptr));
        desc->setText(QCoreApplication::translate("membersearch1", "Description", nullptr));
        label->setText(QCoreApplication::translate("membersearch1", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class membersearch1: public Ui_membersearch1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERSEARCH1_H
