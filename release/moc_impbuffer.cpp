/****************************************************************************
** Meta object code from reading C++ file 'impbuffer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bytearraysender/impbuffer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'impbuffer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ImpBuffer_t {
    QByteArrayData data[9];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImpBuffer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImpBuffer_t qt_meta_stringdata_ImpBuffer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ImpBuffer"
QT_MOC_LITERAL(1, 10, 8), // "readData"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 5), // "char*"
QT_MOC_LITERAL(4, 26, 4), // "data"
QT_MOC_LITERAL(5, 31, 6), // "maxlen"
QT_MOC_LITERAL(6, 38, 9), // "writeData"
QT_MOC_LITERAL(7, 48, 11), // "const char*"
QT_MOC_LITERAL(8, 60, 3) // "len"

    },
    "ImpBuffer\0readData\0\0char*\0data\0maxlen\0"
    "writeData\0const char*\0len"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImpBuffer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x08 /* Private */,
       6,    2,   29,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::LongLong, 0x80000000 | 3, QMetaType::LongLong,    4,    5,
    QMetaType::LongLong, 0x80000000 | 7, QMetaType::LongLong,    4,    8,

       0        // eod
};

void ImpBuffer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImpBuffer *_t = static_cast<ImpBuffer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { qint64 _r = _t->readData((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 1: { qint64 _r = _t->writeData((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject ImpBuffer::staticMetaObject = {
    { &QBuffer::staticMetaObject, qt_meta_stringdata_ImpBuffer.data,
      qt_meta_data_ImpBuffer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ImpBuffer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImpBuffer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ImpBuffer.stringdata0))
        return static_cast<void*>(const_cast< ImpBuffer*>(this));
    return QBuffer::qt_metacast(_clname);
}

int ImpBuffer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBuffer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
