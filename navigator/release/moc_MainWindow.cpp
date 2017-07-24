/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../sourceweb-master/navigator/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Nav__MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[420];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Nav__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Nav__MainWindow_t qt_meta_stringdata_Nav__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Nav::MainWindow"
QT_MOC_LITERAL(1, 16, 27), // "on_actionEditFind_triggered"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 14), // "onFindBarClose"
QT_MOC_LITERAL(4, 60, 21), // "onFindBarRegexChanged"
QT_MOC_LITERAL(5, 82, 17), // "updateFindBarInfo"
QT_MOC_LITERAL(6, 100, 30), // "on_actionBrowseFiles_triggered"
QT_MOC_LITERAL(7, 131, 42), // "on_actionBrowseGlobalDefiniti..."
QT_MOC_LITERAL(8, 174, 32), // "on_actionBrowseSymbols_triggered"
QT_MOC_LITERAL(9, 207, 10), // "actionBack"
QT_MOC_LITERAL(10, 218, 13), // "actionForward"
QT_MOC_LITERAL(11, 232, 23), // "sourceWidgetFileChanged"
QT_MOC_LITERAL(12, 256, 5), // "File*"
QT_MOC_LITERAL(13, 262, 4), // "file"
QT_MOC_LITERAL(14, 267, 28), // "folderWidgetSelectionChanged"
QT_MOC_LITERAL(15, 296, 24), // "areBackAndForwardEnabled"
QT_MOC_LITERAL(16, 321, 5), // "bool&"
QT_MOC_LITERAL(17, 327, 11), // "backEnabled"
QT_MOC_LITERAL(18, 339, 14), // "forwardEnabled"
QT_MOC_LITERAL(19, 354, 18), // "actionCopyFilePath"
QT_MOC_LITERAL(20, 373, 21), // "actionRevealInSideBar"
QT_MOC_LITERAL(21, 395, 24) // "actionTabStopSizeChanged"

    },
    "Nav::MainWindow\0on_actionEditFind_triggered\0"
    "\0onFindBarClose\0onFindBarRegexChanged\0"
    "updateFindBarInfo\0on_actionBrowseFiles_triggered\0"
    "on_actionBrowseGlobalDefinitions_triggered\0"
    "on_actionBrowseSymbols_triggered\0"
    "actionBack\0actionForward\0"
    "sourceWidgetFileChanged\0File*\0file\0"
    "folderWidgetSelectionChanged\0"
    "areBackAndForwardEnabled\0bool&\0"
    "backEnabled\0forwardEnabled\0"
    "actionCopyFilePath\0actionRevealInSideBar\0"
    "actionTabStopSizeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Nav__MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    1,   98,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    2,  102,    2, 0x08 /* Private */,
      19,    0,  107,    2, 0x08 /* Private */,
      20,    0,  108,    2, 0x08 /* Private */,
      21,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16,   17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Nav::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionEditFind_triggered(); break;
        case 1: _t->onFindBarClose(); break;
        case 2: _t->onFindBarRegexChanged(); break;
        case 3: _t->updateFindBarInfo(); break;
        case 4: _t->on_actionBrowseFiles_triggered(); break;
        case 5: _t->on_actionBrowseGlobalDefinitions_triggered(); break;
        case 6: _t->on_actionBrowseSymbols_triggered(); break;
        case 7: _t->actionBack(); break;
        case 8: _t->actionForward(); break;
        case 9: _t->sourceWidgetFileChanged((*reinterpret_cast< File*(*)>(_a[1]))); break;
        case 10: _t->folderWidgetSelectionChanged(); break;
        case 11: _t->areBackAndForwardEnabled((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->actionCopyFilePath(); break;
        case 13: _t->actionRevealInSideBar(); break;
        case 14: _t->actionTabStopSizeChanged(); break;
        default: ;
        }
    }
}

const QMetaObject Nav::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Nav__MainWindow.data,
      qt_meta_data_Nav__MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Nav::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Nav::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Nav__MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Nav::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
