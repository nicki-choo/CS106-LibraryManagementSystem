#ifndef MEMBERSEARCH1_H
#define MEMBERSEARCH1_H

#include <QDialog>

namespace Ui {
class membersearch1;
}

class membersearch1 : public QDialog
{
    Q_OBJECT

public:
    explicit membersearch1(QWidget *parent = nullptr);
    ~membersearch1();

private:
    Ui::membersearch1 *ui;
private slots:
    void on_value_textEdited(const QString &arg1);
    void showInfo();
};

#endif // MEMBERSEARCH1_H
