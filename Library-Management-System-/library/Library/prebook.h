#ifndef PREBOOK_H
#define PREBOOK_H

#include <QDialog>

namespace Ui {
class Prebook;
}

class Prebook : public QDialog
{
    Q_OBJECT

public:
    explicit Prebook(QWidget *parent = nullptr);
    ~Prebook();

private slots:

    void on_SearchBookBtn_clicked();

    void showInfo();

    void on_SearchMemberBtn_clicked();

    void on_PREBOOK_clicked();

    void on_CANCEL_clicked();



    void on_DELETE_clicked();

private:
    Ui::Prebook *ui;
};

#endif // PREBOOK_H
