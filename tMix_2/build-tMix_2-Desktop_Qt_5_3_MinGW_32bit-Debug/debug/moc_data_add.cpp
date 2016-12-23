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
    QByteArrayData data[21];
    char stringdata[217];
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
QT_MOC_LITERAL(12, 127, 13),
QT_MOC_LITERAL(13, 141, 11),
QT_MOC_LITERAL(14, 153, 11),
QT_MOC_LITERAL(15, 165, 11),
QT_MOC_LITERAL(16, 177, 5),
QT_MOC_LITERAL(17, 183, 11),
QT_MOC_LITERAL(18, 195, 5),
QT_MOC_LITERAL(19, 201, 10),
QT_MOC_LITERAL(20, 212, 4)
    },
    "data_add\0load\0\0setting_read\0setting_write\0"
    "load_operator\0select_file\0read_file\0"
    "load_data\0make_report\0act_select_file\0"
    "act_update\0n_select_file\0n_read_file\0"
    "n_load_data\0get_id_nakl\0_nakl\0get_id_firm\0"
    "_firm\0get_id_org\0_org"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_data_add[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x0a /* Public */,
       3,    0,   95,    2, 0x0a /* Public */,
       4,    0,   96,    2, 0x0a /* Public */,
       5,    0,   97,    2, 0x0a /* Public */,
       6,    0,   98,    2, 0x0a /* Public */,
       7,    0,   99,    2, 0x0a /* Public */,
       8,    0,  100,    2, 0x0a /* Public */,
       9,    0,  101,    2, 0x0a /* Public */,
      10,    0,  102,    2, 0x0a /* Public */,
      11,    0,  103,    2, 0x0a /* Public */,
      12,    0,  104,    2, 0x0a /* Public */,
      13,    0,  105,    2, 0x0a /* Public */,
      14,    0,  106,    2, 0x0a /* Public */,
      15,    1,  107,    2, 0x0a /* Public */,
      17,    1,  110,    2, 0x0a /* Public */,
      19,    1,  113,    2, 0x0a /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString,   16,
    QMetaType::Int, QMetaType::QString,   18,
    QMetaType::Int, QMetaType::QString,   20,

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
        case 10: _t->n_select_file(); break;
        case 11: _t->n_read_file(); break;
        case 12: _t->n_load_data(); break;
        case 13: { int _r = _t->get_id_nakl((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->get_id_firm((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->get_id_org((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
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
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
