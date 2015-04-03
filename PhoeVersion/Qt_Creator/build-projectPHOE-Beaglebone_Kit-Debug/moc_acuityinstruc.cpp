/****************************************************************************
** Meta object code from reading C++ file 'acuityinstruc.h'
**
** Created: Sat Mar 28 18:34:12 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../projectPHOE/acuityinstruc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'acuityinstruc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_acuityinstruc[] = {

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
      15,   14,   14,   14, 0x08,
      46,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_acuityinstruc[] = {
    "acuityinstruc\0\0on_ainstrucbakButton_clicked()\0"
    "on_ainstrucbegButton_clicked()\0"
};

const QMetaObject acuityinstruc::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_acuityinstruc,
      qt_meta_data_acuityinstruc, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &acuityinstruc::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *acuityinstruc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *acuityinstruc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_acuityinstruc))
        return static_cast<void*>(const_cast< acuityinstruc*>(this));
    return QDialog::qt_metacast(_clname);
}

int acuityinstruc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_ainstrucbakButton_clicked(); break;
        case 1: on_ainstrucbegButton_clicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
