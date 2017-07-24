/****************************************************************************
** Meta object code from reading C++ file 'SourceWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../sourceweb-master/navigator/SourceWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SourceWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Nav__SourceWidgetLineArea_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Nav__SourceWidgetLineArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Nav__SourceWidgetLineArea_t qt_meta_stringdata_Nav__SourceWidgetLineArea = {
    {
QT_MOC_LITERAL(0, 0, 25) // "Nav::SourceWidgetLineArea"

    },
    "Nav::SourceWidgetLineArea"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Nav__SourceWidgetLineArea[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Nav::SourceWidgetLineArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Nav::SourceWidgetLineArea::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Nav__SourceWidgetLineArea.data,
      qt_meta_data_Nav__SourceWidgetLineArea,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Nav::SourceWidgetLineArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Nav::SourceWidgetLineArea::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Nav__SourceWidgetLineArea.stringdata0))
        return static_cast<void*>(const_cast< SourceWidgetLineArea*>(this));
    return QWidget::qt_metacast(_clname);
}

int Nav::SourceWidgetLineArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_Nav__SourceWidgetView_t {
    QByteArrayData data[17];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Nav__SourceWidgetView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Nav__SourceWidgetView_t qt_meta_stringdata_Nav__SourceWidgetView = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Nav::SourceWidgetView"
QT_MOC_LITERAL(1, 22, 6), // "goBack"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "goForward"
QT_MOC_LITERAL(4, 40, 24), // "areBackAndForwardEnabled"
QT_MOC_LITERAL(5, 65, 5), // "bool&"
QT_MOC_LITERAL(6, 71, 11), // "backEnabled"
QT_MOC_LITERAL(7, 83, 14), // "forwardEnabled"
QT_MOC_LITERAL(8, 98, 12), // "copyFilePath"
QT_MOC_LITERAL(9, 111, 15), // "revealInSideBar"
QT_MOC_LITERAL(10, 127, 13), // "pointSelected"
QT_MOC_LITERAL(11, 141, 5), // "point"
QT_MOC_LITERAL(12, 147, 25), // "findMatchSelectionChanged"
QT_MOC_LITERAL(13, 173, 5), // "index"
QT_MOC_LITERAL(14, 179, 20), // "findMatchListChanged"
QT_MOC_LITERAL(15, 200, 4), // "copy"
QT_MOC_LITERAL(16, 205, 21) // "actionCrossReferences"

    },
    "Nav::SourceWidgetView\0goBack\0\0goForward\0"
    "areBackAndForwardEnabled\0bool&\0"
    "backEnabled\0forwardEnabled\0copyFilePath\0"
    "revealInSideBar\0pointSelected\0point\0"
    "findMatchSelectionChanged\0index\0"
    "findMatchListChanged\0copy\0"
    "actionCrossReferences"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Nav__SourceWidgetView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    2,   66,    2, 0x06 /* Public */,
       8,    0,   71,    2, 0x06 /* Public */,
       9,    0,   72,    2, 0x06 /* Public */,
      10,    1,   73,    2, 0x06 /* Public */,
      12,    1,   76,    2, 0x06 /* Public */,
      14,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,   80,    2, 0x0a /* Public */,
      16,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Nav::SourceWidgetView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SourceWidgetView *_t = static_cast<SourceWidgetView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->goBack(); break;
        case 1: _t->goForward(); break;
        case 2: _t->areBackAndForwardEnabled((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->copyFilePath(); break;
        case 4: _t->revealInSideBar(); break;
        case 5: _t->pointSelected((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 6: _t->findMatchSelectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->findMatchListChanged(); break;
        case 8: _t->copy(); break;
        case 9: _t->actionCrossReferences(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SourceWidgetView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SourceWidgetView::goBack)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SourceWidgetView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SourceWidgetView::goForward)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SourceWidgetView::*_t)(bool & , bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SourceWidgetView::areBackAndForwardEnabled)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SourceWidgetView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SourceWidgetView::copyFilePath)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SourceWidgetView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SourceWidgetView::revealInSideBar)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SourceWidgetView::*_t)(QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SourceWidgetView::pointSelected)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (SourceWidgetView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SourceWidgetView::findMatchSelectionChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (SourceWidgetView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SourceWidgetView::findMatchListChanged)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject Nav::SourceWidgetView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Nav__SourceWidgetView.data,
      qt_meta_data_Nav__SourceWidgetView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Nav::SourceWidgetView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Nav::SourceWidgetView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Nav__SourceWidgetView.stringdata0))
        return static_cast<void*>(const_cast< SourceWidgetView*>(this));
    return QWidget::qt_metacast(_clname);
}

int Nav::SourceWidgetView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Nav::SourceWidgetView::goBack()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Nav::SourceWidgetView::goForward()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Nav::SourceWidgetView::areBackAndForwardEnabled(bool & _t1, bool & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Nav::SourceWidgetView::copyFilePath()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Nav::SourceWidgetView::revealInSideBar()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Nav::SourceWidgetView::pointSelected(QPoint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Nav::SourceWidgetView::findMatchSelectionChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Nav::SourceWidgetView::findMatchListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
struct qt_meta_stringdata_Nav__SourceWidget_t {
    QByteArrayData data[23];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Nav__SourceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Nav__SourceWidget_t qt_meta_stringdata_Nav__SourceWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "Nav::SourceWidget"
QT_MOC_LITERAL(1, 18, 11), // "fileChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "File*"
QT_MOC_LITERAL(4, 37, 4), // "file"
QT_MOC_LITERAL(5, 42, 6), // "goBack"
QT_MOC_LITERAL(6, 49, 9), // "goForward"
QT_MOC_LITERAL(7, 59, 24), // "areBackAndForwardEnabled"
QT_MOC_LITERAL(8, 84, 5), // "bool&"
QT_MOC_LITERAL(9, 90, 11), // "backEnabled"
QT_MOC_LITERAL(10, 102, 14), // "forwardEnabled"
QT_MOC_LITERAL(11, 117, 12), // "copyFilePath"
QT_MOC_LITERAL(12, 130, 15), // "revealInSideBar"
QT_MOC_LITERAL(13, 146, 25), // "findMatchSelectionChanged"
QT_MOC_LITERAL(14, 172, 5), // "index"
QT_MOC_LITERAL(15, 178, 20), // "findMatchListChanged"
QT_MOC_LITERAL(16, 199, 4), // "copy"
QT_MOC_LITERAL(17, 204, 18), // "layoutSourceWidget"
QT_MOC_LITERAL(18, 223, 17), // "viewPointSelected"
QT_MOC_LITERAL(19, 241, 5), // "point"
QT_MOC_LITERAL(20, 247, 15), // "selectNextMatch"
QT_MOC_LITERAL(21, 263, 19), // "selectPreviousMatch"
QT_MOC_LITERAL(22, 283, 21) // "setSelectedMatchIndex"

    },
    "Nav::SourceWidget\0fileChanged\0\0File*\0"
    "file\0goBack\0goForward\0areBackAndForwardEnabled\0"
    "bool&\0backEnabled\0forwardEnabled\0"
    "copyFilePath\0revealInSideBar\0"
    "findMatchSelectionChanged\0index\0"
    "findMatchListChanged\0copy\0layoutSourceWidget\0"
    "viewPointSelected\0point\0selectNextMatch\0"
    "selectPreviousMatch\0setSelectedMatchIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Nav__SourceWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       5,    0,   87,    2, 0x06 /* Public */,
       6,    0,   88,    2, 0x06 /* Public */,
       7,    2,   89,    2, 0x06 /* Public */,
      11,    0,   94,    2, 0x06 /* Public */,
      12,    0,   95,    2, 0x06 /* Public */,
      13,    1,   96,    2, 0x06 /* Public */,
      15,    0,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  100,    2, 0x0a /* Public */,
      17,    0,  101,    2, 0x08 /* Private */,
      18,    1,  102,    2, 0x08 /* Private */,
      20,    0,  105,    2, 0x0a /* Public */,
      21,    0,  106,    2, 0x0a /* Public */,
      22,    1,  107,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void Nav::SourceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SourceWidget *_t = static_cast<SourceWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileChanged((*reinterpret_cast< File*(*)>(_a[1]))); break;
        case 1: _t->goBack(); break;
        case 2: _t->goForward(); break;
        case 3: _t->areBackAndForwardEnabled((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->copyFilePath(); break;
        case 5: _t->revealInSideBar(); break;
        case 6: _t->findMatchSelectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->findMatchListChanged(); break;
        case 8: _t->copy(); break;
        case 9: _t->layoutSourceWidget(); break;
        case 10: _t->viewPointSelected((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 11: _t->selectNextMatch(); break;
        case 12: _t->selectPreviousMatch(); break;
        case 13: _t->setSelectedMatchIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SourceWidget::*_t)(File * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SourceWidget::fileChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SourceWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SourceWidget::goBack)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SourceWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SourceWidget::goForward)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SourceWidget::*_t)(bool & , bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SourceWidget::areBackAndForwardEnabled)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SourceWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SourceWidget::copyFilePath)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SourceWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SourceWidget::revealInSideBar)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (SourceWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SourceWidget::findMatchSelectionChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (SourceWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SourceWidget::findMatchListChanged)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject Nav::SourceWidget::staticMetaObject = {
    { &QAbstractScrollArea::staticMetaObject, qt_meta_stringdata_Nav__SourceWidget.data,
      qt_meta_data_Nav__SourceWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Nav::SourceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Nav::SourceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Nav__SourceWidget.stringdata0))
        return static_cast<void*>(const_cast< SourceWidget*>(this));
    return QAbstractScrollArea::qt_metacast(_clname);
}

int Nav::SourceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Nav::SourceWidget::fileChanged(File * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Nav::SourceWidget::goBack()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Nav::SourceWidget::goForward()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Nav::SourceWidget::areBackAndForwardEnabled(bool & _t1, bool & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Nav::SourceWidget::copyFilePath()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Nav::SourceWidget::revealInSideBar()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void Nav::SourceWidget::findMatchSelectionChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Nav::SourceWidget::findMatchListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
