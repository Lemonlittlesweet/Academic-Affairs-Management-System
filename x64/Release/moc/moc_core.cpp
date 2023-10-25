/****************************************************************************
** Meta object code from reading C++ file 'core.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../core.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'core.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_core_t {
    QByteArrayData data[17];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_core_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_core_t qt_meta_stringdata_core = {
    {
QT_MOC_LITERAL(0, 0, 4), // "core"
QT_MOC_LITERAL(1, 5, 4), // "exit"
QT_MOC_LITERAL(2, 10, 0), // ""
QT_MOC_LITERAL(3, 11, 13), // "choclassPress"
QT_MOC_LITERAL(4, 25, 14), // "exitclassPress"
QT_MOC_LITERAL(5, 40, 9), // "searchSel"
QT_MOC_LITERAL(6, 50, 7), // "bianhao"
QT_MOC_LITERAL(7, 58, 8), // "mingchen"
QT_MOC_LITERAL(8, 67, 11), // "xuefenpaixu"
QT_MOC_LITERAL(9, 79, 24), // "laoshishoukepingfenpaixu"
QT_MOC_LITERAL(10, 104, 10), // "searchhome"
QT_MOC_LITERAL(11, 115, 12), // "handhomework"
QT_MOC_LITERAL(12, 128, 10), // "stu_former"
QT_MOC_LITERAL(13, 139, 8), // "stu_hand"
QT_MOC_LITERAL(14, 148, 10), // "stu_latter"
QT_MOC_LITERAL(15, 159, 10), // "startbegin"
QT_MOC_LITERAL(16, 170, 7) // "qiandao"

    },
    "core\0exit\0\0choclassPress\0exitclassPress\0"
    "searchSel\0bianhao\0mingchen\0xuefenpaixu\0"
    "laoshishoukepingfenpaixu\0searchhome\0"
    "handhomework\0stu_former\0stu_hand\0"
    "stu_latter\0startbegin\0qiandao"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_core[] = {

 // content:
       8,       // revision
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
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void core::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<core *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->exit(); break;
        case 1: _t->choclassPress(); break;
        case 2: _t->exitclassPress(); break;
        case 3: _t->searchSel(); break;
        case 4: _t->bianhao(); break;
        case 5: _t->mingchen(); break;
        case 6: _t->xuefenpaixu(); break;
        case 7: _t->laoshishoukepingfenpaixu(); break;
        case 8: _t->searchhome(); break;
        case 9: _t->handhomework(); break;
        case 10: _t->stu_former(); break;
        case 11: _t->stu_hand(); break;
        case 12: _t->stu_latter(); break;
        case 13: _t->startbegin(); break;
        case 14: _t->qiandao(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject core::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_core.data,
    qt_meta_data_core,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *core::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *core::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_core.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int core::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
