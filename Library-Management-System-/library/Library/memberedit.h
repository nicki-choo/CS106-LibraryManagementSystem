#ifndef MEMBEREDIT_H
#define MEMBEREDIT_H

#include <QDialog>

namespace Ui {
class memberedit;
}

class memberedit : public QDialog
{
    Q_OBJECT

public:
    explicit memberedit(QWidget *parent = nullptr);
    ~memberedit();
      void setValidator();

private slots:

    void on_searchMemberBtn_clicked();

    void on_editMemberBtn_clicked();
private:
    Ui::memberedit *ui;
      int count = 0;
};

#endif // MEMBEREDIT_H
