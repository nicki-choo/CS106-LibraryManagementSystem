#ifndef MEMBERPREBOOK_H
#define MEMBERPREBOOK_H

#include <QDialog>

namespace Ui {
class memberprebook;
}

class memberprebook : public QDialog
{
    Q_OBJECT

public:
    explicit memberprebook(QWidget *parent = nullptr);
    ~memberprebook();

private slots:

    void on_SearchBookBtn_clicked();

    void showInfo();

    void on_SearchMemberBtn_clicked();

    void on_PREBOOK_clicked();

    void on_CANCEL_clicked();



    void on_DELETE_clicked();
private:
    Ui::memberprebook *ui;
};

#endif // MEMBERPREBOOK_H
