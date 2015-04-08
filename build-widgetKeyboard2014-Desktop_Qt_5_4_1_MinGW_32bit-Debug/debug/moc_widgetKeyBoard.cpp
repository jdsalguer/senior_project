/****************************************************************************
** Meta object code from reading C++ file 'widgetKeyBoard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgetKeyboard2014/keyboard/widgetKeyBoard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetKeyBoard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_widgetKeyBoard_t {
    QByteArrayData data[10];
    char stringdata[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_widgetKeyBoard_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_widgetKeyBoard_t qt_meta_stringdata_widgetKeyBoard = {
    {
QT_MOC_LITERAL(0, 0, 14), // "widgetKeyBoard"
QT_MOC_LITERAL(1, 15, 4), // "show"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "QWidget*"
QT_MOC_LITERAL(4, 30, 10), // "activeForm"
QT_MOC_LITERAL(5, 41, 4), // "hide"
QT_MOC_LITERAL(6, 46, 13), // "noChangeColor"
QT_MOC_LITERAL(7, 60, 9), // "focusThis"
QT_MOC_LITERAL(8, 70, 10), // "QLineEdit*"
QT_MOC_LITERAL(9, 81, 7) // "control"

    },
    "widgetKeyBoard\0show\0\0QWidget*\0activeForm\0"
    "hide\0noChangeColor\0focusThis\0QLineEdit*\0"
    "control"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_widgetKeyBoard[] = {

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
       1,    1,   29,    2, 0x0a /* Public */,
       5,    1,   32,    2, 0x0a /* Public */,
       7,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void widgetKeyBoard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        widgetKeyBoard *_t = static_cast<widgetKeyBoard *>(_o);
        switch (_id) {
        case 0: _t->show((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->hide((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->focusThis((*reinterpret_cast< QLineEdit*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLineEdit* >(); break;
            }
            break;
        }
    }
}

const QMetaObject widgetKeyBoard::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_widgetKeyBoard.data,
      qt_meta_data_widgetKeyBoard,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *widgetKeyBoard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *widgetKeyBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_widgetKeyBoard.stringdata))
        return static_cast<void*>(const_cast< widgetKeyBoard*>(this));
    return QWidget::qt_metacast(_clname);
}

int widgetKeyBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
