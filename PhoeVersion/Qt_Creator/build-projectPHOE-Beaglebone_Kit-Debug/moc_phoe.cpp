/****************************************************************************
** Meta object code from reading C++ file 'phoe.h'
**
** Created: Sat Mar 28 18:34:00 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../projectPHOE/phoe.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'phoe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_phoe[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x08,
      31,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_phoe[] = {
    "phoe\0\0on_loginButton_clicked()\0"
    "on_newButton_clicked()\0"
};

const QMetaObject phoe::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_phoe,
      qt_meta_data_phoe, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &phoe::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *phoe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *phoe::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_phoe))
        return static_cast<void*>(const_cast< phoe*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int phoe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_loginButton_clicked(); break;
        case 1: on_newButton_clicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
