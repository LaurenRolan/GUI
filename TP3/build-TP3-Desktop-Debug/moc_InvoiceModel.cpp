/****************************************************************************
** Meta object code from reading C++ file 'InvoiceModel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TP3/InvoiceModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InvoiceModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InvoiceModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   23,   13,   13, 0x0a,
      63,   53,   13,   13, 0x0a,
      90,   85,   13,   13, 0x0a,
     115,   85,   13,   13, 0x0a,
     148,  140,   13,   13, 0x0a,
     173,  168,   13,   13, 0x0a,
     206,  190,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_InvoiceModel[] = {
    "InvoiceModel\0\0notify()\0lastname\0"
    "setLastname(QString)\0firstname\0"
    "setFirstname(QString)\0text\0"
    "setAddressLine1(QString)\0"
    "setAddressLine2(QString)\0zipcode\0"
    "setZipcode(QString)\0city\0setCity(QString)\0"
    "row,column,text\0setCell(int,int,QString)\0"
};

void InvoiceModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InvoiceModel *_t = static_cast<InvoiceModel *>(_o);
        switch (_id) {
        case 0: _t->notify(); break;
        case 1: _t->setLastname((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setFirstname((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setAddressLine1((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setAddressLine2((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setZipcode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setCity((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setCell((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData InvoiceModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InvoiceModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_InvoiceModel,
      qt_meta_data_InvoiceModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InvoiceModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InvoiceModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InvoiceModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InvoiceModel))
        return static_cast<void*>(const_cast< InvoiceModel*>(this));
    return QObject::qt_metacast(_clname);
}

int InvoiceModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void InvoiceModel::notify()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
