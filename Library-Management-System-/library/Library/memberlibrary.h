#ifndef MEMBERLIBRARY_H
#define MEMBERLIBRARY_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDir>


namespace Ui {
class memberlibrary;
}

class memberlibrary : public QDialog
{
    Q_OBJECT

public:
    explicit memberlibrary(QWidget *parent = nullptr);
    ~memberlibrary();

    QSqlDatabase db;
    void connectDB();

    void setUsername(QString username);
    void setID(QString ID);
    void showBookNum();
    void showMemberNum();
    void showAuthorNum();
    void showCover();


private slots:


    void on_viewEvents_clicked();

    void on_searchBook_clicked();

    void on_prebook1_clicked();

    void on_viewProfile_clicked();

    void on_logoutbutton_clicked();

    void on_editProfile_clicked();

private:
    /*  Ui::memberlibrary *ui;

    QString filename = QDir::homePath()+ "/librarymem.sql;";

    QString username; */

     Ui::memberlibrary *ui;

    QString filename = QDir::homePath()+ "/libraryDB.sqlite";

    QString username;
};

#endif // MEMBERLIBRARY_H
