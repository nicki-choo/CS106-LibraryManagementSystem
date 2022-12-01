#include "memberlibrary.h"
#include "ui_memberlibrary.h"
#include "memberlogin.h"
#include <QMessageBox>
#include <QDebug>
#include <QSqlQuery>
#include "memberevents.h"
#include "membersearch1.h"
#include "digitallibrary.h"
#include "memberprebook.h"
#include "memberprofile.h"
#include "memberedit.h"

memberlibrary::memberlibrary(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::memberlibrary)
{
    ui->setupUi(this);

   //  setMemUsername(username_2);
}
void memberlibrary::connectDB()
{
    //Add the database with the SQLITE driver
    db = QSqlDatabase::addDatabase("QSQLITE", "SQLITE");

    //Set the database path
    db.setDatabaseName(this->filename);

    //check if the database is opened
    if(!db.open())
        QMessageBox::critical(this, "FAILED", "DB is not opened");

    //define the query
    auto query = QSqlQuery(db);

    //Create a table named accounts
    QString accountTable{"CREATE TABLE IF NOT EXISTS accounts"
                         "firstName VARCHAR(20), lastName VARCHAR(20), (username VARCHAR(20),"
                         "password VARCHAR(20))"};

    if(!query.exec(accountTable))
        QMessageBox::critical(this,"Info","Cannot create accounts");

    //Create a table named genres
    QString genreTable{"CREATE TABLE IF NOT EXISTS genres"
                            "(ID INTEGER, name VARCHAR(20))"};
    if(!query.exec(genreTable))
        QMessageBox::critical(this,"Info","Cannot create genre Table");

    //Create a table named authors
    QString authorTable{"CREATE TABLE IF NOT EXISTS authors"
                      "(ID INTEGER, firstName VARCHAR(20), lastName VARCHAR(20),"
                       "expertise VARCHAR(20), about VARCHAR(40))"};
    if(!query.exec(authorTable))
        QMessageBox::critical(this,"Info","Cannot create authors Table");

    //Create a table named members
    QString memberTable{"CREATE TABLE IF NOT EXISTS members"
                      "(ID INTEGER PRIMARY KEY, firstName VARCHAR(20), lastName VARCHAR(20), Username VARCHAR(20),"
                       "phone VARCHAR(20), email VARCHAR(40), gender VARCHAR(10))"};
    if(!query.exec(memberTable))
        QMessageBox::critical(this,"Info","Cannot create members Table");

    //Create a table named books
    QString bookTable{"CREATE TABLE IF NOT EXISTS books"
                      "(ID INTEGER PRIMARY KEY, ISBN VARCHAR(20), name VARCHAR(20),"
                      "author VARCHAR(20), genre VARCHAR(20), quantity INT,"
                      "publisher VARCHAR(20), price REAL, date VARCHAR(10),"
                      "description VARCHAR(80), cover VARCHAR(50))"};
    if(!query.exec(bookTable))
        QMessageBox::critical(this,"Failed","Cannot create books Table");

    //Create a table named bookStatus
    QString Table{"CREATE TABLE IF NOT EXISTS bookStatus"
                      "(Book INTEGER, Member INTEGER, Status VARCHAR(10),"
                       "IssueDate date, ReturnDate date, Note VARCHAR(50))"};
    if(!query.exec(Table))
        QMessageBox::critical(this,"Info","Cannot create bookStatus Table");
}

void memberlibrary::setUsername(QString username)
{
    ui->username->setText(username);
}
memberlibrary::~memberlibrary()
{
    delete ui;
}



void memberlibrary::on_viewEvents_clicked()
{
    memberevents memberevents;
    memberevents.exec();
}

void memberlibrary::on_searchBook_clicked()
{
membersearch1 membersearch1;
        membersearch1.exec();
}


void memberlibrary::on_prebook1_clicked()
{
memberprebook memberprebook;
memberprebook.exec();
}


void memberlibrary::on_viewProfile_clicked()
{
    memberprofile memberprofile;
    memberprofile.exec();
}


void memberlibrary::on_logoutbutton_clicked()
{
    this->hide();
    memberlogin memberlogin;
    memberlogin.exec();
}


void memberlibrary::on_editProfile_clicked()
{
    memberedit memberedit;
    memberedit.exec();
}

