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
    explicit choosepage(QWidget *parent = nullptr);
    ~choosepage();

private:
    Ui::choosepage *ui;
};

#endif // CHOOSEPAGE_H
