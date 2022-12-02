#include "login.h"
#include "signup.h"
#include "newpasswd.h"
#include "managebooks.h"
#include "manageauthors.h"
#include "addmember.h"
#include "editmember.h"
#include "memberslist.h"
#include "addbook.h"
<<<<<<< HEAD
#include "choosepage.h"
#include "memberlibrary.h"
#include "digitallibrary.h"
#include <QApplication>
#include "membersearch1.h"
#include "memberedit.h"
=======

#include <QApplication>
>>>>>>> dev

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
<<<<<<< HEAD
   choosepage w;
=======
    Login w;
>>>>>>> dev
    w.show();
    return a.exec();
}
