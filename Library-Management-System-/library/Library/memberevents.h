#ifndef MEMBEREVENTS_H
#define MEMBEREVENTS_H

#include <QDialog>

namespace Ui {
class memberevents;
}

class memberevents : public QDialog
{
    Q_OBJECT

public:
    explicit memberevents(QWidget *parent = nullptr);
    ~memberevents();

private:
    Ui::memberevents *ui;
};

#endif // MEMBEREVENTS_H
