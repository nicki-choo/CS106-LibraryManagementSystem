#ifndef SEARCHBOOKS_H
#define SEARCHBOOKS_H

#include <QDialog>

namespace Ui {
class searchbooks;
}

class searchbooks : public QDialog
{
    Q_OBJECT

public:
    explicit searchbooks(QWidget *parent = nullptr);
    ~searchbooks();

private:
    Ui::searchbooks *ui;
};

#endif // SEARCHBOOKS_H
