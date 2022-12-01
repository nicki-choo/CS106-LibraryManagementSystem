#ifndef MEMBERSIGNUP_H
#define MEMBERSIGNUP_H

#include <QDialog>

namespace Ui {
class membersignup;
}

class membersignup : public QDialog
{
    Q_OBJECT

public:
    explicit membersignup(QWidget *parent = nullptr);
    ~membersignup();

    void setValidator();

private slots:
    void on_createButton_clicked();

    void on_backButton_clicked();

private:
    Ui::membersignup *ui;
};

#endif // MEMBERSIGNUP_H
