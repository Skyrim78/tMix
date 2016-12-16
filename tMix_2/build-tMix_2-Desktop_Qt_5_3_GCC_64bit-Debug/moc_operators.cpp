/****************************************************************************
** Meta object code from reading C++ file 'operators.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tMix_2/operators.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'operators.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_operatorsM_t {
    QByteArrayData data[13];
    char stringdata[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_operatorsM_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_operatorsM_t qt_meta_stringdata_operatorsM = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 4),
QT_MOC_LITERAL(2, 16, 0),
QT_MOC_LITERAL(3, 17, 3),
QT_MOC_LITERAL(4, 21, 4),
QT_MOC_LITERAL(5, 26, 4),
QT_MOC_LITERAL(6, 31, 3),
QT_MOC_LITERAL(7, 35, 4),
QT_MOC_LITERAL(8, 40, 4),
QT_MOC_LITERAL(9, 45, 4),
QT_MOC_LITERAL(10, 50, 11),
QT_MOC_LITERAL(11, 62, 3),
QT_MOC_LITERAL(12, 66, 1)
    },
    "operatorsM\0load\0\0add\0edit\0save\0del\0"
    "delN\0next\0prev\0make_report\0str\0v"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_operatorsM[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    2,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   11,   12,

       0        // eod
};

void operatorsM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        operatorsM *_t = static_cast<operatorsM *>(_o);
        switch (_id) {
        case 0: _t->load(); break;
        case 1: _t->add(); break;
        case 2: _t->edit(); break;
        case 3: _t->save(); break;
        case 4: _t->del(); break;
        case 5: _t->delN(); break;
        case 6: _t->next(); break;
        case 7: _t->prev(); break;
        case 8: _t->make_report((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject operatorsM::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_operatorsM.data,
      qt_meta_data_operatorsM,  qt_static_metacall, 0, 0}
};


const QMetaObject *operatorsM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *operatorsM::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_operatorsM.stringdata))
        return static_cast<void*>(const_cast< operatorsM*>(this));
    return QWidget::qt_metacast(_clname);
}

int operatorsM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
