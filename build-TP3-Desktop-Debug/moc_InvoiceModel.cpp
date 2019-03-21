/****************************************************************************
** Meta object code from reading C++ file 'InvoiceModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TP3/InvoiceModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InvoiceModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InvoiceModel_t {
    QByteArrayData data[18];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InvoiceModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InvoiceModel_t qt_meta_stringdata_InvoiceModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "InvoiceModel"
QT_MOC_LITERAL(1, 13, 6), // "notify"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 11), // "setLastname"
QT_MOC_LITERAL(4, 33, 8), // "lastname"
QT_MOC_LITERAL(5, 42, 12), // "setFirstname"
QT_MOC_LITERAL(6, 55, 9), // "firstname"
QT_MOC_LITERAL(7, 65, 15), // "setAddressLine1"
QT_MOC_LITERAL(8, 81, 4), // "text"
QT_MOC_LITERAL(9, 86, 15), // "setAddressLine2"
QT_MOC_LITERAL(10, 102, 10), // "setZipcode"
QT_MOC_LITERAL(11, 113, 7), // "zipcode"
QT_MOC_LITERAL(12, 121, 7), // "setCity"
QT_MOC_LITERAL(13, 129, 4), // "city"
QT_MOC_LITERAL(14, 134, 7), // "setCell"
QT_MOC_LITERAL(15, 142, 3), // "row"
QT_MOC_LITERAL(16, 146, 6), // "column"
QT_MOC_LITERAL(17, 153, 8) // "cleanAll"

    },
    "InvoiceModel\0notify\0\0setLastname\0"
    "lastname\0setFirstname\0firstname\0"
    "setAddressLine1\0text\0setAddressLine2\0"
    "setZipcode\0zipcode\0setCity\0city\0setCell\0"
    "row\0column\0cleanAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InvoiceModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   60,    2, 0x0a /* Public */,
       5,    1,   63,    2, 0x0a /* Public */,
       7,    1,   66,    2, 0x0a /* Public */,
       9,    1,   69,    2, 0x0a /* Public */,
      10,    1,   72,    2, 0x0a /* Public */,
      12,    1,   75,    2, 0x0a /* Public */,
      14,    3,   78,    2, 0x0a /* Public */,
      17,    0,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   15,   16,    8,
    QMetaType::Void,

       0        // eod
};

void InvoiceModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InvoiceModel *_t = static_cast<InvoiceModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->notify(); break;
        case 1: _t->setLastname((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setFirstname((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setAddressLine1((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setAddressLine2((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setZipcode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setCity((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setCell((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 8: _t->cleanAll(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (InvoiceModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InvoiceModel::notify)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject InvoiceModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_InvoiceModel.data,
      qt_meta_data_InvoiceModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InvoiceModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InvoiceModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InvoiceModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int InvoiceModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void InvoiceModel::notify()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
