/****************************************************************************
** Meta object code from reading C++ file 'tmix.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tMix/tmix.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tmix.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tMix_t {
    QByteArrayData data[8];
    char stringdata[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tMix_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tMix_t qt_meta_stringdata_tMix = {
    {
QT_MOC_LITERAL(0, 0, 4),
QT_MOC_LITERAL(1, 5, 12),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 13),
QT_MOC_LITERAL(4, 33, 11),
QT_MOC_LITERAL(5, 45, 9),
QT_MOC_LITERAL(6, 55, 11),
QT_MOC_LITERAL(7, 67, 7)
    },
    "tMix\0setting_read\0\0setting_write\0"
    "select_from\0select_to\0read_source\0"
    "make_it"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tMix[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tMix::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tMix *_t = static_cast<tMix *>(_o);
        switch (_id) {
        case 0: _t->setting_read(); break;
        case 1: _t->setting_write(); break;
        case 2: _t->select_from(); break;
        case 3: _t->select_to(); break;
        case 4: _t->read_source(); break;
        case 5: _t->make_it(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tMix::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_tMix.data,
      qt_meta_data_tMix,  qt_static_metacall, 0, 0}
};


const QMetaObject *tMix::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tMix::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tMix.stringdata))
        return static_cast<void*>(const_cast< tMix*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int tMix::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
