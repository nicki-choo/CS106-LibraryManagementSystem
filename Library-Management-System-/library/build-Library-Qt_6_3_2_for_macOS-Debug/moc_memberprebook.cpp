/****************************************************************************
** Meta object code from reading C++ file 'memberprebook.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Library/memberprebook.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'memberprebook.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_memberprebook_t {
    uint offsetsAndSizes[16];
    char stringdata0[14];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[27];
    char stringdata5[19];
    char stringdata6[18];
    char stringdata7[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_memberprebook_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_memberprebook_t qt_meta_stringdata_memberprebook = {
    {
        QT_MOC_LITERAL(0, 13),  // "memberprebook"
        QT_MOC_LITERAL(14, 24),  // "on_SearchBookBtn_clicked"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 8),  // "showInfo"
        QT_MOC_LITERAL(49, 26),  // "on_SearchMemberBtn_clicked"
        QT_MOC_LITERAL(76, 18),  // "on_PREBOOK_clicked"
        QT_MOC_LITERAL(95, 17),  // "on_CANCEL_clicked"
        QT_MOC_LITERAL(113, 17)   // "on_DELETE_clicked"
    },
    "memberprebook",
    "on_SearchBookBtn_clicked",
    "",
    "showInfo",
    "on_SearchMemberBtn_clicked",
    "on_PREBOOK_clicked",
    "on_CANCEL_clicked",
    "on_DELETE_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_memberprebook[] = {

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

void memberprebook::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<memberprebook *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_SearchBookBtn_clicked(); break;
        case 1: _t->showInfo(); break;
        case 2: _t->on_SearchMemberBtn_clicked(); break;
        case 3: _t->on_PREBOOK_clicked(); break;
        case 4: _t->on_CANCEL_clicked(); break;
        case 5: _t->on_DELETE_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject memberprebook::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_memberprebook.offsetsAndSizes,
    qt_meta_data_memberprebook,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_memberprebook_t
, QtPrivate::TypeAndForceComplete<memberprebook, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *memberprebook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *memberprebook::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_memberprebook.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int memberprebook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
