/****************************************************************************
** Meta object code from reading C++ file 'colordescr.h'
**
** Created: Tue Apr 28 14:02:39 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../projectPHOE/colordescr.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colordescr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_colordescr[] = {

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
      12,   11,   11,   11, 0x08,
      41,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_colordescr[] = {
    "colordescr\0\0on_cdescrbakButton_clicked()\0"
    "on_cdescrcontButton_clicked()\0"
};

const QMetaObject colordescr::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_colordescr,
      qt_meta_data_colordescr, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &colordescr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *colordescr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *colordescr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_colordescr))
        return static_cast<void*>(const_cast< colordescr*>(this));
    return QDialog::qt_metacast(_clname);
}

int colordescr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_cdescrbakButton_clicked(); break;
        case 1: on_cdescrcontButton_clicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
