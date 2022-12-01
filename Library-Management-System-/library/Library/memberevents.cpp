#include "memberevents.h"
#include "ui_memberevents.h"


memberevents::memberevents(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::memberevents)
{
    ui->setupUi(this);
}

memberevents::~memberevents()
{
    delete ui;
}
