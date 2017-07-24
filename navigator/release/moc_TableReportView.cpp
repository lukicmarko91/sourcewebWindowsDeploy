/****************************************************************************
** Meta object code from reading C++ file 'TableReportView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../sourceweb-master/navigator/TableReportView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TableReportView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Nav__TableReportView_FiltererBase_t {
    QByteArrayData data[3];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Nav__TableReportView_FiltererBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Nav__TableReportView_FiltererBase_t qt_meta_stringdata_Nav__TableReportView_FiltererBase = {
    {
QT_MOC_LITERAL(0, 0, 33), // "Nav::TableReportView_Filterer..."
QT_MOC_LITERAL(1, 34, 8), // "finished"
QT_MOC_LITERAL(2, 43, 0) // ""

    },
    "Nav::TableReportView_FiltererBase\0"
    "finished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Nav__TableReportView_FiltererBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void Nav::TableReportView_FiltererBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TableReportView_FiltererBase *_t = static_cast<TableReportView_FiltererBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TableReportView_FiltererBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TableReportView_FiltererBase::finished)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Nav::TableReportView_FiltererBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Nav__TableReportView_FiltererBase.data,
      qt_meta_data_Nav__TableReportView_FiltererBase,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Nav::TableReportView_FiltererBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Nav::TableReportView_FiltererBase::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Nav__TableReportView_FiltererBase.stringdata0))
        return static_cast<void*>(const_cast< TableReportView_FiltererBase*>(this));
    return QObject::qt_metacast(_clname);
}

int Nav::TableReportView_FiltererBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Nav::TableReportView_FiltererBase::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_Nav__TableReportView_t {
    QByteArrayData data[5];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Nav__TableReportView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Nav__TableReportView_t qt_meta_stringdata_Nav__TableReportView = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Nav::TableReportView"
QT_MOC_LITERAL(1, 21, 20), // "sortIndicatorChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 24), // "startBackgroundFiltering"
QT_MOC_LITERAL(4, 68, 25) // "finishBackgroundFiltering"

    },
    "Nav::TableReportView\0sortIndicatorChanged\0"
    "\0startBackgroundFiltering\0"
    "finishBackgroundFiltering"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Nav__TableReportView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Nav::TableReportView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TableReportView *_t = static_cast<TableReportView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sortIndicatorChanged(); break;
        case 1: _t->startBackgroundFiltering(); break;
        case 2: _t->finishBackgroundFiltering(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Nav::TableReportView::staticMetaObject = {
    { &QAbstractScrollArea::staticMetaObject, qt_meta_stringdata_Nav__TableReportView.data,
      qt_meta_data_Nav__TableReportView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Nav::TableReportView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Nav::TableReportView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Nav__TableReportView.stringdata0))
        return static_cast<void*>(const_cast< TableReportView*>(this));
    return QAbstractScrollArea::qt_metacast(_clname);
}

int Nav::TableReportView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
