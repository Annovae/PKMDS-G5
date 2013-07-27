/****************************************************************************
** Meta object code from reading C++ file 'pkmviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pkmviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pkmviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_pkmviewer_t {
    QByteArrayData data[19];
    char stringdata[387];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_pkmviewer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_pkmviewer_t qt_meta_stringdata_pkmviewer = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 32),
QT_MOC_LITERAL(2, 43, 0),
QT_MOC_LITERAL(3, 44, 5),
QT_MOC_LITERAL(4, 50, 23),
QT_MOC_LITERAL(5, 74, 4),
QT_MOC_LITERAL(6, 79, 25),
QT_MOC_LITERAL(7, 105, 27),
QT_MOC_LITERAL(8, 133, 35),
QT_MOC_LITERAL(9, 169, 25),
QT_MOC_LITERAL(10, 195, 26),
QT_MOC_LITERAL(11, 222, 21),
QT_MOC_LITERAL(12, 244, 19),
QT_MOC_LITERAL(13, 264, 7),
QT_MOC_LITERAL(14, 272, 21),
QT_MOC_LITERAL(15, 294, 22),
QT_MOC_LITERAL(16, 317, 24),
QT_MOC_LITERAL(17, 342, 21),
QT_MOC_LITERAL(18, 364, 21)
    },
    "pkmviewer\0on_cbPKMItem_currentIndexChanged\0"
    "\0index\0on_sbLevel_valueChanged\0arg1\0"
    "on_btnSaveChanges_clicked\0"
    "on_btnExportPKMFile_clicked\0"
    "on_cbPKMSpecies_currentIndexChanged\0"
    "on_sbSpecies_valueChanged\0"
    "on_txtNickname_textChanged\0"
    "on_sbEXP_valueChanged\0on_rbOTMale_toggled\0"
    "checked\0on_rbOTFemale_toggled\0"
    "on_cbNicknamed_toggled\0on_txtOTName_textChanged\0"
    "on_sbTID_valueChanged\0on_sbSID_valueChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pkmviewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x08,
       4,    1,   87,    2, 0x08,
       6,    0,   90,    2, 0x08,
       7,    0,   91,    2, 0x08,
       8,    1,   92,    2, 0x08,
       9,    1,   95,    2, 0x08,
      10,    1,   98,    2, 0x08,
      11,    1,  101,    2, 0x08,
      12,    1,  104,    2, 0x08,
      14,    1,  107,    2, 0x08,
      15,    1,  110,    2, 0x08,
      16,    1,  113,    2, 0x08,
      17,    1,  116,    2, 0x08,
      18,    1,  119,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void pkmviewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pkmviewer *_t = static_cast<pkmviewer *>(_o);
        switch (_id) {
        case 0: _t->on_cbPKMItem_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_sbLevel_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_btnSaveChanges_clicked(); break;
        case 3: _t->on_btnExportPKMFile_clicked(); break;
        case 4: _t->on_cbPKMSpecies_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_sbSpecies_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_txtNickname_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_sbEXP_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_rbOTMale_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_rbOTFemale_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_cbNicknamed_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_txtOTName_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_sbTID_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_sbSID_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject pkmviewer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_pkmviewer.data,
      qt_meta_data_pkmviewer,  qt_static_metacall, 0, 0}
};


const QMetaObject *pkmviewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pkmviewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pkmviewer.stringdata))
        return static_cast<void*>(const_cast< pkmviewer*>(this));
    return QDialog::qt_metacast(_clname);
}

int pkmviewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
