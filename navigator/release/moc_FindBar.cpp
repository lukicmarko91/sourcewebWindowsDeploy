/****************************************************************************
** Meta object code from reading C++ file 'FindBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../sourceweb-master/navigator/FindBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FindBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Nav__FindBarEdit_t {
    QByteArrayData data[4];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Nav__FindBarEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Nav__FindBarEdit_t qt_meta_stringdata_Nav__FindBarEdit = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Nav::FindBarEdit"
QT_MOC_LITERAL(1, 17, 18), // "shiftReturnPressed"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13) // "escapePressed"

    },
    "Nav::FindBarEdit\0shiftReturnPressed\0"
    "\0escapePressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Nav__FindBarEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Nav::FindBarEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FindBarEdit *_t = static_cast<FindBarEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shiftReturnPressed(); break;
        case 1: _t->escapePressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FindBarEdit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FindBarEdit::shiftReturnPressed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FindBarEdit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FindBarEdit::escapePressed)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Nav::FindBarEdit::staticMetaObject = {
    { &PlaceholderLineEdit::staticMetaObject, qt_meta_stringdata_Nav__FindBarEdit.data,
      qt_meta_data_Nav__FindBarEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Nav::FindBarEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Nav::FindBarEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Nav__FindBarEdit.stringdata0))
        return static_cast<void*>(const_cast< FindBarEdit*>(this));
    return PlaceholderLineEdit::qt_metacast(_clname);
}

int Nav::FindBarEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlaceholderLineEdit::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Nav::FindBarEdit::shiftReturnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Nav::FindBarEdit::escapePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_Nav__FindBar_t {
    QByteArrayData data[11];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Nav__FindBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Nav__FindBar_t qt_meta_stringdata_Nav__FindBar = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Nav::FindBar"
QT_MOC_LITERAL(1, 13, 8), // "previous"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "next"
QT_MOC_LITERAL(4, 28, 8), // "closeBar"
QT_MOC_LITERAL(5, 37, 12), // "regexChanged"
QT_MOC_LITERAL(6, 50, 12), // "setMatchInfo"
QT_MOC_LITERAL(7, 63, 5), // "index"
QT_MOC_LITERAL(8, 69, 5), // "count"
QT_MOC_LITERAL(9, 75, 9), // "selectAll"
QT_MOC_LITERAL(10, 85, 17) // "onEditTextChanged"

    },
    "Nav::FindBar\0previous\0\0next\0closeBar\0"
    "regexChanged\0setMatchInfo\0index\0count\0"
    "selectAll\0onEditTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Nav__FindBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   53,    2, 0x0a /* Public */,
       9,    0,   58,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Nav::FindBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FindBar *_t = static_cast<FindBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->previous(); break;
        case 1: _t->next(); break;
        case 2: _t->closeBar(); break;
        case 3: _t->regexChanged(); break;
        case 4: _t->setMatchInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->selectAll(); break;
        case 6: _t->onEditTextChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FindBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FindBar::previous)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FindBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FindBar::next)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FindBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FindBar::closeBar)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (FindBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FindBar::regexChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Nav::FindBar::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_Nav__FindBar.data,
      qt_meta_data_Nav__FindBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Nav::FindBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Nav::FindBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Nav__FindBar.stringdata0))
        return static_cast<void*>(const_cast< FindBar*>(this));
    return QFrame::qt_metacast(_clname);
}

int Nav::FindBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Nav::FindBar::previous()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Nav::FindBar::next()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Nav::FindBar::closeBar()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Nav::FindBar::regexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
