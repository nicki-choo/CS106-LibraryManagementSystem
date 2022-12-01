#ifndef MEMBERLOGIN_H
#define MEMBERLOGIN_H

#include <QDialog>

namespace Ui {
class memberlogin;
}

class memberlogin : public QDialog
{
    Q_OBJECT

public:
    explicit memberlogin(QWidget *parent = nullptr);
    ~memberlogin();

private slots:

    void on_loginButton2_clicked();

    void on_forgetPasswdBtn2_clicked();

    void on_signUpButton2_clicked();

    void setValidator2();
private:
    Ui::memberlogin *ui;
};

#endif // MEMBERLOGIN_H

