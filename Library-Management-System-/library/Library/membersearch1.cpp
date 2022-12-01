#include "membersearch1.h"
#include "ui_membersearch1.h"
#include "digitallibrary.h"
#include "booklist.h"
membersearch1::membersearch1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::membersearch1)
{
    ui->setupUi(this);
    this->setWindowTitle("Search Book Catalogue");

    //call the mail Database
    digitalLibrary lib;
    auto db = lib.db;

    auto query = QSqlQuery(db);
    QString select{"SELECT * FROM books"};
    if(!query.exec(select))
        qDebug() << "Cannot select from books";
    QSqlQueryModel * model = new QSqlQueryModel;
    model->setQuery(query);
    ui->tableView->setModel(model);

    //Connect to table view
    connect(ui->tableView, &QTableView::doubleClicked, this, &membersearch1::showInfo);
}

membersearch1::~membersearch1()
{
    delete ui;
}

void membersearch1::on_value_textEdited(const QString &arg1)
{
    //get the content of the line edit
    QString value = ui->value->text() + "%";

    //call the mail Database
    digitalLibrary lib;
    auto db = lib.db;

    if(!value.isEmpty())
    {
        //define the query on the db and the model
        auto query = QSqlQuery(db);
        QString select{"SELECT * FROM books WHERE ID LIKE '"+value+"'"
                       "OR ISBN LIKE '"+value+"' OR name LIKE '"+value+"' OR author LIKE '"+value+"'"
                       "OR genre LIKE '"+value+"' OR quantity LIKE '"+value+"'"
                       "OR publisher LIKE '"+value+"' OR price LIKE '"+value+"' OR date LIKE '"+value+"'"};

        //execute the query
        if(!query.exec(select))
            qDebug() << "Cannot select from books";
        else
        {
            //define the model
            QSqlQueryModel * model = new QSqlQueryModel;
            model->setQuery(query);
            ui->tableView->setModel(model);
        }
    }
    else
    {
        //define the query on the db and the model
        auto query = QSqlQuery(db);
        QString select{"SELECT * FROM books"};

        //execute the query
        if(!query.exec(select))
            qDebug() << "Cannot select from books";

        //define the model
        QSqlQueryModel * model = new QSqlQueryModel;
        model->setQuery(query);
        ui->tableView->setModel(model);
    }
}

void membersearch1::showInfo()
{
    //get the clicked item
    auto row = ui->tableView->currentIndex().row();

    //show information in the left side
    QString ISBN = ui->tableView->model()->data(ui->tableView->model()->index(row, 1)).toString();
    QString name = ui->tableView->model()->data(ui->tableView->model()->index(row,2)).toString();
    QString author = ui->tableView->model()->data(ui->tableView->model()->index(row,3)).toString();
    QString genre = ui->tableView->model()->data(ui->tableView->model()->index(row,4)).toString();
    QString quantity = ui->tableView->model()->data(ui->tableView->model()->index(row,5)).toString();
    QString publisher = ui->tableView->model()->data(ui->tableView->model()->index(row,6)).toString();
    QString price = ui->tableView->model()->data(ui->tableView->model()->index(row,7)).toString();
    QString date = ui->tableView->model()->data(ui->tableView->model()->index(row,8)).toString();
    QString desc = ui->tableView->model()->data(ui->tableView->model()->index(row,9)).toString();
    QString cover = ui->tableView->model()->data(ui->tableView->model()->index(row,10)).toString();

    ui->coverLabel->setPixmap(cover);
    ui->ISBN->setText(ISBN);
    ui->name->setText(name);
    ui->author->setText(author);
    ui->genre->setText(genre);
    ui->publisher->setText(publisher);
    ui->price->setText(price);
    ui->quantity->setText(quantity);
    ui->date->setText(date);
    ui->desc->setText(desc);
}
