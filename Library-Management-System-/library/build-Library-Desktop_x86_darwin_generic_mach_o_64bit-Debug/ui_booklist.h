/********************************************************************************
** Form generated from reading UI file 'booklist.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKLIST_H
#define UI_BOOKLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_bookList
{
public:
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *value;
    QTableView *tableView;
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

    void setupUi(QDialog *bookList)
    {
        if (bookList->objectName().isEmpty())
            bookList->setObjectName("bookList");
        bookList->resize(948, 505);
        bookList->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame = new QFrame(bookList);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 10, 581, 481));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(frame);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("font: 500 15pt \"Work Sans\";\n"
"color: #2A3540;"));

        horizontalLayout->addWidget(label);

        value = new QLineEdit(frame);
        value->setObjectName("value");
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
        tableView->setObjectName("tableView");
        tableView->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color: rgb(255, 255, 255);\n"
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

        frame_2 = new QFrame(bookList);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(590, 10, 351, 481));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        coverLabel = new QLabel(frame_2);
        coverLabel->setObjectName("coverLabel");
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
        verticalLayout_3->setObjectName("verticalLayout_3");
        ISBN = new QLabel(frame_2);
        ISBN->setObjectName("ISBN");
        sizePolicy.setHeightForWidth(ISBN->sizePolicy().hasHeightForWidth());
        ISBN->setSizePolicy(sizePolicy);
        ISBN->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        verticalLayout_3->addWidget(ISBN);

        name = new QLabel(frame_2);
        name->setObjectName("name");
        sizePolicy.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy);
        name->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        verticalLayout_3->addWidget(name);

        author = new QLabel(frame_2);
        author->setObjectName("author");
        sizePolicy.setHeightForWidth(author->sizePolicy().hasHeightForWidth());
        author->setSizePolicy(sizePolicy);
        author->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        verticalLayout_3->addWidget(author);

        genre = new QLabel(frame_2);
        genre->setObjectName("genre");
        sizePolicy.setHeightForWidth(genre->sizePolicy().hasHeightForWidth());
        genre->setSizePolicy(sizePolicy);
        genre->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        verticalLayout_3->addWidget(genre);

        publisher = new QLabel(frame_2);
        publisher->setObjectName("publisher");
        sizePolicy.setHeightForWidth(publisher->sizePolicy().hasHeightForWidth());
        publisher->setSizePolicy(sizePolicy);
        publisher->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        verticalLayout_3->addWidget(publisher);

        price = new QLabel(frame_2);
        price->setObjectName("price");
        sizePolicy.setHeightForWidth(price->sizePolicy().hasHeightForWidth());
        price->setSizePolicy(sizePolicy);
        price->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        verticalLayout_3->addWidget(price);

        quantity = new QLabel(frame_2);
        quantity->setObjectName("quantity");
        sizePolicy.setHeightForWidth(quantity->sizePolicy().hasHeightForWidth());
        quantity->setSizePolicy(sizePolicy);
        quantity->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        verticalLayout_3->addWidget(quantity);

        date = new QLabel(frame_2);
        date->setObjectName("date");
        sizePolicy.setHeightForWidth(date->sizePolicy().hasHeightForWidth());
        date->setSizePolicy(sizePolicy);
        date->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        verticalLayout_3->addWidget(date);

        desc = new QLabel(frame_2);
        desc->setObjectName("desc");
        sizePolicy.setHeightForWidth(desc->sizePolicy().hasHeightForWidth());
        desc->setSizePolicy(sizePolicy);
        desc->setStyleSheet(QString::fromUtf8("font: 500 13pt \"Work Sans\";\n"
"color: #2A3540;"));

        verticalLayout_3->addWidget(desc);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(bookList);

        QMetaObject::connectSlotsByName(bookList);
    } // setupUi

    void retranslateUi(QDialog *bookList)
    {
        bookList->setWindowTitle(QCoreApplication::translate("bookList", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("bookList", "Value to search", nullptr));
        coverLabel->setText(QString());
        ISBN->setText(QCoreApplication::translate("bookList", "ISBN", nullptr));
        name->setText(QCoreApplication::translate("bookList", "Name", nullptr));
        author->setText(QCoreApplication::translate("bookList", "Author", nullptr));
        genre->setText(QCoreApplication::translate("bookList", "Genre", nullptr));
        publisher->setText(QCoreApplication::translate("bookList", "Publisher", nullptr));
        price->setText(QCoreApplication::translate("bookList", "Price", nullptr));
        quantity->setText(QCoreApplication::translate("bookList", "Quantity", nullptr));
        date->setText(QCoreApplication::translate("bookList", "Date Received", nullptr));
        desc->setText(QCoreApplication::translate("bookList", "Description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bookList: public Ui_bookList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKLIST_H
