/****************************************************************************
** Meta object code from reading C++ file 'taskitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../taskitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'taskitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_model__TaskItem_t {
    QByteArrayData data[10];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_model__TaskItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_model__TaskItem_t qt_meta_stringdata_model__TaskItem = {
    {
QT_MOC_LITERAL(0, 0, 15), // "model::TaskItem"
QT_MOC_LITERAL(1, 16, 12), // "titleChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "doneChanged"
QT_MOC_LITERAL(4, 42, 12), // "colorChanged"
QT_MOC_LITERAL(5, 55, 5), // "color"
QT_MOC_LITERAL(6, 61, 12), // "orderChanged"
QT_MOC_LITERAL(7, 74, 5), // "order"
QT_MOC_LITERAL(8, 80, 5), // "title"
QT_MOC_LITERAL(9, 86, 4) // "done"

    },
    "model::TaskItem\0titleChanged\0\0doneChanged\0"
    "colorChanged\0color\0orderChanged\0order\0"
    "title\0done"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_model__TaskItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    1,   36,    2, 0x06 /* Public */,
       6,    1,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    7,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00495103,
       9, QMetaType::Bool, 0x00495103,
       5, QMetaType::QString, 0x00495103,
       7, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void model::TaskItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TaskItem *_t = static_cast<TaskItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->titleChanged(); break;
        case 1: _t->doneChanged(); break;
        case 2: _t->colorChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->orderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TaskItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TaskItem::titleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TaskItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TaskItem::doneChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TaskItem::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TaskItem::colorChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TaskItem::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TaskItem::orderChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TaskItem *_t = static_cast<TaskItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->done(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->color(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->order(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TaskItem *_t = static_cast<TaskItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDone(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setColor(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setOrder(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject model::TaskItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_model__TaskItem.data,
      qt_meta_data_model__TaskItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *model::TaskItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *model::TaskItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_model__TaskItem.stringdata0))
        return static_cast<void*>(const_cast< TaskItem*>(this));
    return QObject::qt_metacast(_clname);
}

int model::TaskItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void model::TaskItem::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void model::TaskItem::doneChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void model::TaskItem::colorChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void model::TaskItem::orderChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
