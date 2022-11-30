#include "choosepage.h"
#include "ui_choosepage.h"

choosepage::choosepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::choosepage)
{
    ui->setupUi(this);
}

choosepage::~choosepage()
{
    delete ui;
}
