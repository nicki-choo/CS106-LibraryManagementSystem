/****************************************************************************
** Meta object code from reading C++ file 'returnbook.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Library/returnbook.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'returnbook.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReturnBook_t {
    uint offsetsAndSizes[16];
    char stringdata0[11];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[19];
    char stringdata5[21];
    char stringdata6[34];
    char stringdata7[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ReturnBook_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ReturnBook_t qt_meta_stringdata_ReturnBook = {
    {
        QT_MOC_LITERAL(0, 10),  // "ReturnBook"
        QT_MOC_LITERAL(11, 20),  // "on_returnBtn_clicked"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 8),  // "showInfo"
        QT_MOC_LITERAL(42, 18),  // "on_lostBtn_clicked"
        QT_MOC_LITERAL(61, 20),  // "on_deleteBtn_clicked"
        QT_MOC_LITERAL(82, 33),  // "on_bookStatus_currentIndexCha..."
        QT_MOC_LITERAL(116, 5)   // "index"
    },
    "ReturnBook",
    "on_returnBtn_clicked",
    "",
    "showInfo",
    "on_lostBtn_clicked",
    "on_deleteBtn_clicked",
    "on_bookStatus_currentIndexChanged",
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReturnBook[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    1,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void ReturnBook::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReturnBook *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_returnBtn_clicked(); break;
        case 1: _t->showInfo(); break;
        case 2: _t->on_lostBtn_clicked(); break;
        case 3: _t->on_deleteBtn_clicked(); break;
        case 4: _t->on_bookStatus_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ReturnBook::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ReturnBook.offsetsAndSizes,
    qt_meta_data_ReturnBook,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ReturnBook_t
, QtPrivate::TypeAndForceComplete<ReturnBook, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *ReturnBook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReturnBook::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReturnBook.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ReturnBook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE