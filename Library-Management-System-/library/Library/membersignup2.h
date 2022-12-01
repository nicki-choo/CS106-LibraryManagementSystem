#ifndef MEMBERSIGNUP2_H
#define MEMBERSIGNUP2_H

#include <QDialog>

namespace Ui {
class membersignup2;
}

class membersignup2 : public QDialog
{
    Q_OBJECT

public:
    explicit membersignup2(QWidget *parent = nullptr);
    ~membersignup2();
    void setValidator();

private slots:
    void on_createButton_clicked();

    void on_backButton_clicked();
private:
    Ui::membersignup2 *ui;
};

#endif // MEMBERSIGNUP2_H
