/****************************************************************************
** Meta object code from reading C++ file 'overlaywidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../helloworldoverlay/overlaywidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overlaywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OverlayWidget_t {
    QByteArrayData data[10];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OverlayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OverlayWidget_t qt_meta_stringdata_OverlayWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "OverlayWidget"
QT_MOC_LITERAL(1, 14, 8), // "showTime"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 9), // "processes"
QT_MOC_LITERAL(4, 34, 16), // "matchProcessName"
QT_MOC_LITERAL(5, 51, 5), // "DWORD"
QT_MOC_LITERAL(6, 57, 9), // "processID"
QT_MOC_LITERAL(7, 67, 11), // "std::string"
QT_MOC_LITERAL(8, 79, 11), // "processName"
QT_MOC_LITERAL(9, 91, 21) // "on_pushButton_clicked"

    },
    "OverlayWidget\0showTime\0\0processes\0"
    "matchProcessName\0DWORD\0processID\0"
    "std::string\0processName\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OverlayWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    2,   36,    2, 0x08 /* Private */,
       9,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void,

       0        // eod
};

void OverlayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OverlayWidget *_t = static_cast<OverlayWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showTime(); break;
        case 1: _t->processes(); break;
        case 2: { bool _r = _t->matchProcessName((*reinterpret_cast< DWORD(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject OverlayWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OverlayWidget.data,
      qt_meta_data_OverlayWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OverlayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverlayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OverlayWidget.stringdata0))
        return static_cast<void*>(const_cast< OverlayWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int OverlayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
