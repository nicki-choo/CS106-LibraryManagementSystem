/****************************************************************************
** Meta object code from reading C++ file 'memberlibrary.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Library/memberlibrary.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'memberlibrary.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_memberlibrary_t {
    uint offsetsAndSizes[16];
    char stringdata0[14];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[20];
    char stringdata5[23];
    char stringdata6[24];
    char stringdata7[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_memberlibrary_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_memberlibrary_t qt_meta_stringdata_memberlibrary = {
    {
        QT_MOC_LITERAL(0, 13),  // "memberlibrary"
        QT_MOC_LITERAL(14, 21),  // "on_viewEvents_clicked"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 21),  // "on_searchBook_clicked"
        QT_MOC_LITERAL(59, 19),  // "on_prebook1_clicked"
        QT_MOC_LITERAL(79, 22),  // "on_viewProfile_clicked"
        QT_MOC_LITERAL(102, 23),  // "on_logoutbutton_clicked"
        QT_MOC_LITERAL(126, 22)   // "on_editProfile_clicked"
    },
    "memberlibrary",
    "on_viewEvents_clicked",
    "",
    "on_searchBook_clicked",
    "on_prebook1_clicked",
    "on_viewProfile_clicked",
    "on_logoutbutton_clicked",
    "on_editProfile_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_memberlibrary[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void memberlibrary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<memberlibrary *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_viewEvents_clicked(); break;
        case 1: _t->on_searchBook_clicked(); break;
        case 2: _t->on_prebook1_clicked(); break;
        case 3: _t->on_viewProfile_clicked(); break;
        case 4: _t->on_logoutbutton_clicked(); break;
        case 5: _t->on_editProfile_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject memberlibrary::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_memberlibrary.offsetsAndSizes,
    qt_meta_data_memberlibrary,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_memberlibrary_t
, QtPrivate::TypeAndForceComplete<memberlibrary, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *memberlibrary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *memberlibrary::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_memberlibrary.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int memberlibrary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
