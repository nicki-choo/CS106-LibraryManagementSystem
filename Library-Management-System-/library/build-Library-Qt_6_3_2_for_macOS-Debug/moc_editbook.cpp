/****************************************************************************
** Meta object code from reading C++ file 'editbook.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Library/editbook.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editbook.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_editBook_t {
    uint offsetsAndSizes[16];
    char stringdata0[9];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[23];
    char stringdata5[21];
    char stringdata6[27];
    char stringdata7[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_editBook_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_editBook_t qt_meta_stringdata_editBook = {
    {
        QT_MOC_LITERAL(0, 8),  // "editBook"
        QT_MOC_LITERAL(9, 20),  // "on_cancelBtn_clicked"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 23),  // "on_selectImgBtn_clicked"
        QT_MOC_LITERAL(55, 22),  // "on_editBookBtn_clicked"
        QT_MOC_LITERAL(78, 20),  // "on_searchBtn_clicked"
        QT_MOC_LITERAL(99, 26),  // "on_changeAuthorBtn_clicked"
        QT_MOC_LITERAL(126, 25)   // "on_changeGenreBtn_clicked"
    },
    "editBook",
    "on_cancelBtn_clicked",
    "",
    "on_selectImgBtn_clicked",
    "on_editBookBtn_clicked",
    "on_searchBtn_clicked",
    "on_changeAuthorBtn_clicked",
    "on_changeGenreBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_editBook[] = {

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

void editBook::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<editBook *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_cancelBtn_clicked(); break;
        case 1: _t->on_selectImgBtn_clicked(); break;
        case 2: _t->on_editBookBtn_clicked(); break;
        case 3: _t->on_searchBtn_clicked(); break;
        case 4: _t->on_changeAuthorBtn_clicked(); break;
        case 5: _t->on_changeGenreBtn_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject editBook::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_editBook.offsetsAndSizes,
    qt_meta_data_editBook,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_editBook_t
, QtPrivate::TypeAndForceComplete<editBook, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *editBook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *editBook::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_editBook.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int editBook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
