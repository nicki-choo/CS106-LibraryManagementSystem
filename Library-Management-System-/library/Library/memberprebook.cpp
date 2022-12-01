#include "memberprebook.h"
#include "ui_memberprebook.h"
#include "addbook.h"
#include "addmember.h"
#include "digitallibrary.h"
#include <QDebug>
#include <QMessageBox>
#include <QDateTime>

memberprebook::memberprebook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::memberprebook)
{


ui->setupUi(this);
this->setWindowTitle("Prebook Book");
ui->FromDate->setDate(QDate::currentDate());
ui->ToDate->setDate(QDate::currentDate());

//Validator for ID
QRegularExpression ID("[0-9]{1}");
QRegularExpressionValidator *valID = new QRegularExpressionValidator(ID, this);
ui->BookIDline->setValidator(valID);
ui->MemberIDLine->setValidator(valID);

//call the main Database
digitalLibrary lib;
auto db = lib.db;

auto query = QSqlQuery(db);
QString select{"SELECT * FROM prebook_list"};
if(!query.exec(select))
    qDebug() << "Cannot select from prebook_list";
QSqlQueryModel * model = new QSqlQueryModel;
model->setQuery(query);
ui->tableView->setModel(model);

//make connection
connect(ui->tableView, &QTableView::doubleClicked, this, &memberprebook::showInfo);
}

 memberprebook::~memberprebook()
{
delete ui;
}



 void memberprebook::on_SearchBookBtn_clicked()
 {
     //Get the ID
     QString bookID = ui->BookIDline->text();
     QString bookName;
     int quantity;

     //call the main Database
     digitalLibrary lib;
     auto db = lib.db;

     //search the book
     auto query = QSqlQuery(db);
     QString searchBook{"SELECT * FROM books WHERE ID = '%1'"};
     if(!query.exec(searchBook.arg(bookID)))
         qDebug() << "Cannot select from  books";

     int count = 0;
     while(query.next())
         count++;
     if(count > 0)
     {
         if(query.first())
         {
             bookName = query.value(2).toString();
             ui->BookName->setText(bookName);

             quantity = query.value(5).toInt();
             if(quantity > 0)
             {
                 ui->availability->setText("Yes");
                 ui->availability->setStyleSheet("QLabel {color : green; font: 13pt Work Sans;}");
             }
             else
             {
                 ui->availability->setText("No");
                 ui->availability->setStyleSheet("QLabel {color : red; font: 13pt Work Sans;}");
             }

         }
     }
     else
         QMessageBox::critical(this,"Failed", "Book Not found");

 }



 void memberprebook::on_SearchMemberBtn_clicked()
 {
     //Get the ID
     // QString memberID = ui->MemberIDLine->text();
     QString memberName = ui->MemberIDLine->text();

     //call the main Database
     digitalLibrary lib;
     auto db = lib.db;

     //search the member
     auto query = QSqlQuery(db);
     QString searchMember{"SELECT * FROM members WHERE ID = '%1'"};
     if(!query.exec(searchMember.arg(memberName)))
         qDebug() << "Cannot select from  members";

     int count = 0;
     while(query.next())
         count++;

     if(count > 0)
     {
         if(query.first())
         {
             memberName = query.value(1).toString();
             ui->MemberName->setText(memberName);
         }
     }
     else
         QMessageBox::critical(this,"Failed", "Member Not found");
 }



 void memberprebook::on_PREBOOK_clicked()
 {
     //call the main Database
     digitalLibrary lib;
     auto db = lib.db;

     //retrieve the IDs
     QString name = ui->BookIDline->text();
     QString username = ui->MemberIDLine->text();
     QString prebookfrom = ui->FromDate->text();
     QString prebookto = ui->ToDate->text();
     QString notes = ui->textEdit->toPlainText();

     //retrieve prebook from
     QStringList datetimeList_1 = prebookfrom.split("/");
     QDate Datetime_1;
     if(datetimeList_1.length() == 3)
         Datetime_1 = QDate(datetimeList_1[2].toInt(), datetimeList_1[1].toInt(), datetimeList_1[0].toInt());

     //retrieve prebook to
     QStringList datetimeList_2 = prebookto.split("/");
     QDate Datetime_2;
     if(datetimeList_2.length() == 3)
         Datetime_2 = QDate(datetimeList_2[2].toInt(), datetimeList_2[1].toInt(), datetimeList_2[0].toInt());

     //test
     if(Datetime_1 > Datetime_2)
         QMessageBox::critical(this, "Failed", "Invalid prebook, please make sure date and time are input correctly");
     else{
         auto query = QSqlQuery(db);
         QString insert{"INSERT INTO prebook_list (Name, Username, PrebookFrom, PrebookTo, Note) VALUES ('%1', '%2','%3', '%4', '%5')"};
         if(!query.exec(insert.arg(name).arg(username).arg(prebookfrom).arg(prebookto).arg(notes)))
         {
             qDebug() << "cannot fill prebook_list";
         }
         else
             QMessageBox::information(this, "SUCCESS", "Book issued successfully");
     }
 }




 void memberprebook::showInfo()
 {
     QModelIndexList selectedRow = ui->tableView->selectionModel()->selectedRows();

     if(!selectedRow.isEmpty())
     {
         QModelIndex row = selectedRow.at(0);
         auto name = ui->tableView->model()->data(ui->tableView->model()->index(row.row(), 0)).toString();
         auto username = ui->tableView->model()->data(ui->tableView->model()->index(row.row(), 1)).toString();
         auto prebookfrom = ui->tableView->model()->data(ui->tableView->model()->index(row.row(), 2)).toString();
         auto prebookto = ui->tableView->model()->data(ui->tableView->model()->index(row.row(), 3)).toString();
         auto note = ui->tableView->model()->data(ui->tableView->model()->index(row.row(), 4)).toString();

         ui->BookIDline->setText(name);
         ui->MemberIDLine->setText(username);

         //retrieve prebook from
         QStringList datetimeList_1 = prebookfrom.split("/");
         QDate Datetime_1;
         if(datetimeList_1.length() == 3)
             Datetime_1 = QDate(datetimeList_1[2].toInt(), datetimeList_1[1].toInt(), datetimeList_1[0].toInt());

         //retrieve prebook to
         QStringList datetimeList_2 = prebookto.split("/");
         QDate Datetime_2;
         if(datetimeList_2.length() == 3)
             Datetime_2 = QDate(datetimeList_2[2].toInt(), datetimeList_2[1].toInt(), datetimeList_2[0].toInt());

         //retrieve the notes
         ui->textEdit->setText(note);
     }
 }



 void memberprebook::on_DELETE_clicked()
 {
     //call the main Database
     digitalLibrary lib;
     auto db = lib.db;

     QString name = ui->BookIDline->text();
     QString username = ui->MemberIDLine->text();

     auto Deletequery = QSqlQuery(db);
     QString deleteprebook{"DELETE FROM prebook_list WHERE (Name = '%1') AND (Username = '%2')"};
     if(!Deletequery.exec(deleteprebook))
         qDebug() << "cannot delete from prebook_list";
     else
         QMessageBox::information(this, "SUCCESS", "Prebook deleted successfully");

     //update the table view
     auto query = QSqlQuery(db);
     QString select{"SELECT * FROM prebook_list"};
     if(!query.exec(select))
         qDebug() << "Cannot select from prebook_list";
     QSqlQueryModel * model = new QSqlQueryModel;
     model->setQuery(query);
     ui->tableView->setModel(model);
 }

 void memberprebook::on_CANCEL_clicked()
 {
     this->hide();
 }


