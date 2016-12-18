/****************************************************************************
** Meta object code from reading C++ file 'data_add.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tMix_2/data_add.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'data_add.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_data_add_t {
    QByteArrayData data[14];
    char stringdata[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_data_add_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_data_add_t qt_meta_stringdata_data_add = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 4),
QT_MOC_LITERAL(2, 14, 0),
QT_MOC_LITERAL(3, 15, 12),
QT_MOC_LITERAL(4, 28, 13),
QT_MOC_LITERAL(5, 42, 13),
QT_MOC_LITERAL(6, 56, 11),
QT_MOC_LITERAL(7, 68, 9),
QT_MOC_LITERAL(8, 78, 9),
QT_MOC_LITERAL(9, 88, 11),
QT_MOC_LITERAL(10, 100, 15),
QT_MOC_LITERAL(11, 116, 10),
QT_MOC_LITERAL(12, 127, 6),
QT_MOC_LITERAL(13, 134, 3)
    },
    "data_add\0load\0\0setting_read\0setting_write\0"
    "load_operator\0select_file\0read_file\0"
    "load_data\0make_report\0act_select_file\0"
    "act_update\0search\0str"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_data_add[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    1,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void data_add::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        data_add *_t = static_cast<data_add *>(_o);
        switch (_id) {
        case 0: _t->load(); break;
        case 1: _t->setting_read(); break;
        case 2: _t->setting_write(); break;
        case 3: _t->load_operator(); break;
        case 4: _t->select_file(); break;
        case 5: _t->read_file(); break;
        case 6: _t->load_data(); break;
        case 7: _t->make_report(); break;
        case 8: _t->act_select_file(); break;
        case 9: _t->act_update(); break;
        case 10: _t->search((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject data_add::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_data_add.data,
      qt_meta_data_data_add,  qt_static_metacall, 0, 0}
};


const QMetaObject *data_add::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *data_add::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_data_add.stringdata))
        return static_cast<void*>(const_cast< data_add*>(this));
    return QWidget::qt_metacast(_clname);
}

int data_add::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
