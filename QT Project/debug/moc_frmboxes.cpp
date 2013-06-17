/****************************************************************************
** Meta object code from reading C++ file 'frmboxes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PKMDS_QT/frmboxes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmboxes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_frmBoxes_t {
    QByteArrayData data[8];
    char stringdata[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_frmBoxes_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_frmBoxes_t qt_meta_stringdata_frmBoxes = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 27),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 30),
QT_MOC_LITERAL(4, 69, 5),
QT_MOC_LITERAL(5, 75, 9),
QT_MOC_LITERAL(6, 85, 27),
QT_MOC_LITERAL(7, 113, 5)
    },
    "frmBoxes\0on_actionLoad_SAV_triggered\0"
    "\0on_cbBoxes_currentIndexChanged\0index\0"
    "changebox\0on_sbBoxIncrem_valueChanged\0"
    "value\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_frmBoxes[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08,
       3,    1,   35,    2, 0x08,
       5,    1,   38,    2, 0x08,
       6,    1,   41,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void frmBoxes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        frmBoxes *_t = static_cast<frmBoxes *>(_o);
        switch (_id) {
        case 0: _t->on_actionLoad_SAV_triggered(); break;
        case 1: _t->on_cbBoxes_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->changebox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_sbBoxIncrem_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject frmBoxes::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_frmBoxes.data,
      qt_meta_data_frmBoxes,  qt_static_metacall, 0, 0}
};


const QMetaObject *frmBoxes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *frmBoxes::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_frmBoxes.stringdata))
        return static_cast<void*>(const_cast< frmBoxes*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int frmBoxes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
