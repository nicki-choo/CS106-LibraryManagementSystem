#include "memberlogin.h"
#include "ui_memberlogin.h"
#include <QDebug>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QMessageBox>
#include <memberlibrary.h>
#include <membersignup.h>
#include <digitallibrary.h>



memberlogin::memberlogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::memberlogin)
{
    ui->setupUi(this);
    this->setWindowTitle("Welcome to Bookkeeper");
    setValidator2();
}

memberlogin::~memberlogin()
{
    delete ui;
}

void memberlogin::on_loginButton2_clicked()
{
    //call the main Database
    digitalLibrary lib;
    auto db = lib.db;

    //Get the username
    QString username = ui->username->text();

    //Get the password
    QString password = ui->password->text();

    //Check if the db is opened
    if(!db.isOpen())
    {
        qDebug() << "Failed to open the database";
    }

    //Define the query
    auto query = QSqlQuery(db);

    if(!username.isEmpty() & !password.isEmpty())
    {
        //Create the body of the query
        QString checkLogin = {"SELECT * FROM accounts WHERE username='"
                              +username+"' AND password='"+password+"'"};

        if(query.exec(checkLogin))
        {
            int count = 0;
            while(query.next())
            {
                count++;
            }
            if(count == 1)
            {
                // lib.setUsername(username);

                //Hide the current window
                this->hide();

                //show the mainwindow
                lib.exec();
            }
            else if(count < 1)
                QMessageBox::warning(this, "Empty", "You are not registered!");
        }
        else
            qDebug() << "cannot select from accounts";
    }
    else
        QMessageBox::warning(this, "Empty", "Fields are empty!");



}


void memberlogin::on_forgetPasswdBtn2_clicked()
{
   /* this->hide();
    newPasswd newpass;
    newpass.exec(); */
}


void memberlogin::on_signUpButton2_clicked()
{
    this->hide();
    membersignup membersignup;
   membersignup.exec();
}

void memberlogin::setValidator2()
{
    //regx for username
    QRegularExpression rxName("^[a-zA-Z0-9_ ]*$");
    QRegularExpressionValidator*valName = new QRegularExpressionValidator(rxName, this);
    ui->username->setValidator(valName);
}
