#include "membersignup.h"
#include "ui_membersignup.h"
#include "memberlibrary.h"
#include <QMessageBox>
#include <memberlogin.h>
#include <QDebug>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <digitallibrary.h>
#include <addmember.h>
#include <membersignup2.h>


membersignup::membersignup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::membersignup)
{
    ui->setupUi(this);
    this->setWindowTitle("New Account");
}

membersignup::~membersignup()
{
    delete ui;
}


 /*void membersignup::on_createButton_clicked()
{
    //Get the content
    QString username = ui->username->text();
    QString name = ui->name->text();
    QString password = ui->password->text();

    //call the main Database
    memberlibrary memlib;
    auto db = memlib.db;

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
            }
     }
    else
     QMessageBox::warning(this, "Empty", "Fields are empty!");
}


void membersignup::setValidator()
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
/* void membersignup::on_createButton_clicked()
{
    //get the content of the fields
    QString firstName =ui->firstName->text();
    QString lastName = ui->lastName->text();
    QString username = ui->username->text();
   // QString name = ui->name->text();
    QString password = ui->password->text();
    QString  phone = ui->phone->text();
    QString email = ui->email->text();
    QString gender = ui->gender_2->currentText();

    //call the mail Database
    digitalLibrary lib;
    auto db = lib.db;

    //Make sure that the fields are not empty
    if((!firstName.isEmpty() & !lastName.isEmpty())&(!phone.isEmpty() & !email.isEmpty())&(!username.isEmpty() & !password.isEmpty())&& !gender.isEmpty())
    {
        //Create the query
        auto query = QSqlQuery(db);

        //Insert into db
        QString insert = {"INSERT INTO members ( firstName, lastName,username, password, phone, email, gender)"
                          "VALUES ('%1', '%2', '%3', '%4', '%5', '%6' , '%7')"};

        //Execute the query
        if(!query.exec(insert.arg(firstName).arg(lastName).arg(username).arg(password).arg(phone).arg(email).arg(gender)))
            qDebug() << "Cannot insert into members";
        else
            QMessageBox::information(this, "SUCCESS", "Member added succesfully!");
    }
    else
       QMessageBox::warning(this, "Empty", "Fields are empty!");

}

void membersignup::setValidator(){

    //regx for username
    QRegularExpression rxUsername("^[A-Za-z][A-Za-z0-9_]{7,29}$");
    QRegularExpressionValidator *valUsername = new QRegularExpressionValidator(rxUsername, this);
    ui->username->setValidator(valUsername);


    //regx for name
    QRegularExpression Name("^[a-zA-Z0-9_ ]*$");
    QRegularExpressionValidator *valName = new QRegularExpressionValidator(Name, this);
    ui->firstName->setValidator(valName);
    ui->lastName->setValidator(valName);


    //Validator for phone number
    QRegularExpression phone("[0-9]{10}");
    QRegularExpressionValidator *valPhone = new QRegularExpressionValidator(phone, this);
    ui->phone->setValidator(valPhone);

    //Validator for email
    QRegularExpression email("^[a-zA-Z0-9_.-]+@[a-zA-Z0-9.-]+$");
    QRegularExpressionValidator*valMail = new QRegularExpressionValidator(email, this);
    ui->email->setValidator(valMail);




} */
void membersignup::on_createButton_clicked()
{
    //get the content of the fields
    QString firstName =ui->firstName->text();
    QString lastName = ui->lastName->text();
    QString  phone = ui->phone->text();
    QString email = ui->email->text();
    QString gender = ui->gender_2->currentText();

    //call the mail Database
    digitalLibrary lib;
    auto db = lib.db;

    //Make sure that the fields are not empty
    if((!firstName.isEmpty() & !lastName.isEmpty())&(!phone.isEmpty() & !email.isEmpty())& !gender.isEmpty())
    {
        //Create the query
        auto query = QSqlQuery(db);

        //Insert into db
        QString insert = {"INSERT INTO members (firstName, lastName, phone, email, gender)"
                          "VALUES ('%1', '%2', '%3', '%4', '%5')"};

        //Execute the query
        if(!query.exec(insert.arg(firstName).arg(lastName).arg(phone).arg(email).arg(gender)))
            qDebug() << "Cannot insert into members";
        else
            QMessageBox::information(this, "SUCCESS", "Member added succesfully!");
        this->hide();
membersignup2 membersignup2;
membersignup2.exec();
    }
    else
       QMessageBox::warning(this, "Empty", "Fields are empty!");

}

void membersignup::setValidator(){
    //regx for name
    QRegularExpression Name("^[a-zA-Z0-9_ ]*$");
    QRegularExpressionValidator *valName = new QRegularExpressionValidator(Name, this);
    ui->firstName->setValidator(valName);
    ui->lastName->setValidator(valName);

    //Validator for phone number
    QRegularExpression phone("[0-9]{10}");
    QRegularExpressionValidator *valPhone = new QRegularExpressionValidator(phone, this);
    ui->phone->setValidator(valPhone);

    //Validator for email
    QRegularExpression email("^[a-zA-Z0-9_.-]+@[a-zA-Z0-9.-]+$");
    QRegularExpressionValidator*valMail = new QRegularExpressionValidator(email, this);
    ui->email->setValidator(valMail);




}


void membersignup::on_backButton_clicked()
{
    this->hide();
    memberlogin memberlogin;
    memberlogin.exec();
}

/*void membersignup::setValidator()
{
    //regx for username
    QRegularExpression rxUsername("^[A-Za-z][A-Za-z0-9_]{7,29}$");
    QRegularExpressionValidator *valUsername = new QRegularExpressionValidator(rxUsername, this);
    ui->username->setValidator(valUsername);

    //regx for name
    QRegularExpression rxName("^[a-zA-Z0-9_ ]*$");
    QRegularExpressionValidator *valName = new QRegularExpressionValidator(rxName, this);
    ui->name->setValidator(valName);
} */



/* void membersignup::on_backButton_clicked()
{
    this->hide();
    memberlogin memberlogin;
    memberlogin.exec();
}
*/
