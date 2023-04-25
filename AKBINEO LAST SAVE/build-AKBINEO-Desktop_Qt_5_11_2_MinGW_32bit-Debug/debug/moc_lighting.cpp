/****************************************************************************
** Meta object code from reading C++ file 'lighting.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../AKBINEO/lighting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lighting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_lighting_t {
    QByteArrayData data[9];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_lighting_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_lighting_t qt_meta_stringdata_lighting = {
    {
QT_MOC_LITERAL(0, 0, 8), // "lighting"
QT_MOC_LITERAL(1, 9, 18), // "on_openall_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 19), // "on_closeall_clicked"
QT_MOC_LITERAL(4, 49, 23), // "on_backlighting_clicked"
QT_MOC_LITERAL(5, 73, 19), // "on_buttonup_toggled"
QT_MOC_LITERAL(6, 93, 21), // "on_buttondown_toggled"
QT_MOC_LITERAL(7, 115, 20), // "on_buttonmid_toggled"
QT_MOC_LITERAL(8, 136, 21) // "on_buttonleft_toggled"

    },
    "lighting\0on_openall_clicked\0\0"
    "on_closeall_clicked\0on_backlighting_clicked\0"
    "on_buttonup_toggled\0on_buttondown_toggled\0"
    "on_buttonmid_toggled\0on_buttonleft_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_lighting[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       6,    1,   55,    2, 0x08 /* Private */,
       7,    1,   58,    2, 0x08 /* Private */,
       8,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void lighting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        lighting *_t = static_cast<lighting *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_openall_clicked(); break;
        case 1: _t->on_closeall_clicked(); break;
        case 2: _t->on_backlighting_clicked(); break;
        case 3: _t->on_buttonup_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_buttondown_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_buttonmid_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_buttonleft_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject lighting::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_lighting.data,
      qt_meta_data_lighting,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *lighting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lighting::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_lighting.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int lighting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
