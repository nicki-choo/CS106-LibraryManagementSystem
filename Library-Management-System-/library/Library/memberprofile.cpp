#include "memberprofile.h"
#include "ui_memberprofile.h"

memberprofile::memberprofile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::memberprofile)
{
    ui->setupUi(this);
}

memberprofile::~memberprofile()
{
    delete ui;
}
