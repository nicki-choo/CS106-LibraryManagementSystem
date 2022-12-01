QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addbook.cpp \
    addmember.cpp \
    authorslist.cpp \
    booklist.cpp \
    choosepage.cpp \
    deletebook.cpp \
    deletemember.cpp \
    digitallibrary.cpp \
    editbook.cpp \
    editmember.cpp \
    genrelist.cpp \
    issuebook.cpp \
    login.cpp \
    main.cpp \
    manageauthors.cpp \
    managebooks.cpp \
    memberedit.cpp \
    memberevents.cpp \
    memberlibrary.cpp \
    memberlogin.cpp \
    memberprebook.cpp \
    memberprofile.cpp \
    membersearch1.cpp \
    membersignup.cpp \
    membersignup2.cpp \
    memberslist.cpp \
    newpasswd.cpp \
    prebook.cpp \
    returnbook.cpp \
    signup.cpp

HEADERS += \
    addbook.h \
    addmember.h \
    authorslist.h \
    booklist.h \
    choosepage.h \
    deletebook.h \
    deletemember.h \
    digitallibrary.h \
    editbook.h \
    editmember.h \
    genrelist.h \
    issuebook.h \
    login.h \
    manageauthors.h \
    managebooks.h \
    memberedit.h \
    memberevents.h \
    memberlibrary.h \
    memberlogin.h \
    memberprebook.h \
    memberprofile.h \
    membersearch1.h \
    membersignup.h \
    membersignup2.h \
    memberslist.h \
    newpasswd.h \
    prebook.h \
    returnbook.h \
    signup.h

FORMS += \
    addbook.ui \
    addmember.ui \
    authorslist.ui \
    booklist.ui \
    choosepage.ui \
    deletebook.ui \
    deletemember.ui \
    digitallibrary.ui \
    editbook.ui \
    editmember.ui \
    genrelist.ui \
    issuebook.ui \
    login.ui \
    manageauthors.ui \
    managebooks.ui \
    memberedit.ui \
    memberevents.ui \
    memberlibrary.ui \
    memberlogin.ui \
    memberprebook.ui \
    memberprofile.ui \
    membersearch1.ui \
    membersignup.ui \
    membersignup2.ui \
    memberslist.ui \
    newpasswd.ui \
    prebook.ui \
    returnbook.ui \
    signup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icons.qrc

DISTFILES +=
