#include "choosepage.h"
#include "ui_choosepage.h"
#include "memberlogin.h"
#include "login.h"


choosepage::choosepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::choosepage)
{
    ui->setupUi(this);
     this->setWindowTitle("Bookkeeper");
}

choosepage::~choosepage()
{
    delete ui;
}



void choosepage::on_adminButton_clicked()
{
    this->hide();
    Login login;
    login.exec();
}


void choosepage::on_memberButton_clicked()
{
    this->hide();
   memberlogin memberlogin;
   memberlogin.exec();
}

