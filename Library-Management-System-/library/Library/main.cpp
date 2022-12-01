#include "login.h"
#include "signup.h"
#include "newpasswd.h"
#include "managebooks.h"
#include "manageauthors.h"
#include "addmember.h"
#include "editmember.h"
#include "memberslist.h"
#include "addbook.h"
#include "choosepage.h"
#include "memberlibrary.h"
#include "digitallibrary.h"
#include <QApplication>
#include "membersearch1.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   choosepage w;
    w.show();
    return a.exec();
}
