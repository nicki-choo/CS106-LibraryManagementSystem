#ifndef CHOOSEPAGE_H
#define CHOOSEPAGE_H

#include <QDialog>

namespace Ui {
class choosepage;
}

class choosepage : public QDialog
{
    Q_OBJECT


public:
    choosepage(QWidget *parent = nullptr);
    ~choosepage();

private slots:


    void on_adminButton_clicked();

    void on_memberButton_clicked();

private:
    Ui::choosepage *ui;
};
#endif // CHOOSEPAGE_H
