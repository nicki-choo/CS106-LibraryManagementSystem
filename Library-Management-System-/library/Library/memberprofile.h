#ifndef MEMBERPROFILE_H
#define MEMBERPROFILE_H

#include <QDialog>

namespace Ui {
class memberprofile;
}

class memberprofile : public QDialog
{
    Q_OBJECT

public:
    explicit memberprofile(QWidget *parent = nullptr);
    ~memberprofile();

private slots:
    void showInfo();

private:
    Ui::memberprofile *ui;
};

#endif // MEMBERPROFILE_H
