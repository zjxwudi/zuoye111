/****************************************************************************
** Meta object code from reading C++ file 'dataworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../project 3/dataworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dataWorker_t {
    QByteArrayData data[14];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dataWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dataWorker_t qt_meta_stringdata_dataWorker = {
    {
QT_MOC_LITERAL(0, 0, 10), // "dataWorker"
QT_MOC_LITERAL(1, 11, 17), // "dataParseFinished"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "QList<QDateTime>"
QT_MOC_LITERAL(4, 47, 4), // "date"
QT_MOC_LITERAL(5, 52, 12), // "QList<qreal>"
QT_MOC_LITERAL(6, 65, 4), // "high"
QT_MOC_LITERAL(7, 70, 3), // "low"
QT_MOC_LITERAL(8, 74, 16), // "httpRequestError"
QT_MOC_LITERAL(9, 91, 5), // "error"
QT_MOC_LITERAL(10, 97, 14), // "dataParseError"
QT_MOC_LITERAL(11, 112, 13), // "httpsFinished"
QT_MOC_LITERAL(12, 126, 14), // "QNetworkReply*"
QT_MOC_LITERAL(13, 141, 5) // "reply"

    },
    "dataWorker\0dataParseFinished\0\0"
    "QList<QDateTime>\0date\0QList<qreal>\0"
    "high\0low\0httpRequestError\0error\0"
    "dataParseError\0httpsFinished\0"
    "QNetworkReply*\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dataWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,
       8,    1,   41,    2, 0x06 /* Public */,
      10,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   47,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 5,    4,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void dataWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dataWorker *_t = static_cast<dataWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataParseFinished((*reinterpret_cast< QList<QDateTime>(*)>(_a[1])),(*reinterpret_cast< QList<qreal>(*)>(_a[2])),(*reinterpret_cast< QList<qreal>(*)>(_a[3]))); break;
        case 1: _t->httpRequestError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->dataParseError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->httpsFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QDateTime> >(); break;
            case 2:
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qreal> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (dataWorker::*_t)(QList<QDateTime> , QList<qreal> , QList<qreal> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&dataWorker::dataParseFinished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (dataWorker::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&dataWorker::httpRequestError)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (dataWorker::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&dataWorker::dataParseError)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject dataWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dataWorker.data,
      qt_meta_data_dataWorker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *dataWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dataWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dataWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int dataWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void dataWorker::dataParseFinished(QList<QDateTime> _t1, QList<qreal> _t2, QList<qreal> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dataWorker::httpRequestError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void dataWorker::dataParseError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
