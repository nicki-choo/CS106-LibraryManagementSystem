#include "membersignup2.h"
#include "ui_membersignup2.h"
#include "digitallibrary.h"
#include <QMessageBox>
#include <login.h>
#include <QDebug>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <memberlogin.h>

membersignup2::membersignup2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::membersignup2)
{
    ui->setupUi(this);
    this->setWindowTitle("New Account");
    setValidator();
}
void membersignup2::on_createButton_clicked()
{
    //Get the content
    QString username = ui->username->text();
    QString name = ui->name->text();
    QString password = ui->password->text();

    //call the main Database
    digitalLibrary lib;
    auto db = lib.db;

    //Add name password and username to the db
    if((!username.isEmpty() & !name.isEmpty()) & !password.isEmpty())
    {

        auto search = QSqlQuery(db);
        QString searchAcc = {"SELECT * FROM accounts WHERE username='"
                             +username+"' AND name='"+name+"' AND password='"
                             +password+"'"};
        if(!search.exec(searchAcc))
             qDebug() << "Cannot select";
        int count = 0;
        while(search.next())
        {
            count++;
        }

        if(count>=1)
            QMessageBox::warning(this, "Failed", "Account Already Exist!");
        else
        {
            QString addEntry = {"INSERT INTO accounts (username, name, password)"
                                "VALUES ('%1', '%2', '%3')"};
            auto query = QSqlQuery(db);

            if(!query.exec(addEntry.arg(username).arg(name).arg(password)))
                qDebug() << "Cannot add entry";
            else
                QMessageBox::information(this, "SUCCESS", "You registered succesfully!");

            this->hide();
            memberlogin memberlogin;
            memberlogin.exec();

            }
     }
    else
     QMessageBox::warning(this, "Empty", "Fields are empty!");
}

void membersignup2::on_backButton_clicked()
{
    this->hide();
    Login login;
    login.exec();
}
void membersignup2::setValidator()
{
    //regx for username
    QRegularExpression rxUsername("^[A-Za-z][A-Za-z0-9_]{7,29}$");
    QRegularExpressionValidator *valUsername = new QRegularExpressionValidator(rxUsername, this);
    ui->username->setValidator(valUsername);

    //regx for name
    QRegularExpression rxName("^[a-zA-Z0-9_ ]*$");
    QRegularExpressionValidator *valName = new QRegularExpressionValidator(rxName, this);
    ui->name->setValidator(valName);
}
membersignup2::~membersignup2()
{
    delete ui;
}
