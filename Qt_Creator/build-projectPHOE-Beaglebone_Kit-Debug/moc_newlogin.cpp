/****************************************************************************
** Meta object code from reading C++ file 'newlogin.h'
**
** Created: Tue Apr 28 14:02:29 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../projectPHOE/newlogin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newlogin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_newlogin[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      36,    9,    9,    9, 0x08,
      62,    9,    9,    9, 0x08,
      88,    9,    9,    9, 0x08,
     130,    9,    9,    9, 0x08,
     165,    9,    9,    9, 0x08,
     198,    9,    9,    9, 0x08,
     227,    9,    9,    9, 0x08,
     258,    9,    9,    9, 0x08,
     291,    9,    9,    9, 0x08,
     322,    9,    9,    9, 0x08,
     352,    9,    9,    9, 0x08,
     386,    9,    9,    9, 0x08,
     420,    9,    9,    9, 0x08,
     454,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_newlogin[] = {
    "newlogin\0\0on_newcanButton_clicked()\0"
    "on_newbakButton_clicked()\0"
    "on_newcreButton_clicked()\0"
    "on_loginPassConfirmEdit_editingFinished()\0"
    "on_loginPassEdit_editingFinished()\0"
    "on_loginIdEdit_editingFinished()\0"
    "on_dobEdit_editingFinished()\0"
    "on_phoneEdit_editingFinished()\0"
    "on_zipCodeEdit_editingFinished()\0"
    "on_stateEdit_editingFinished()\0"
    "on_cityEdit_editingFinished()\0"
    "on_address2Edit_editingFinished()\0"
    "on_address1Edit_editingFinished()\0"
    "on_lastNameEdit_editingFinished()\0"
    "on_firstNameEdit_editingFinished()\0"
};

const QMetaObject newlogin::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_newlogin,
      qt_meta_data_newlogin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &newlogin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *newlogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *newlogin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_newlogin))
        return static_cast<void*>(const_cast< newlogin*>(this));
    return QDialog::qt_metacast(_clname);
}

int newlogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_newcanButton_clicked(); break;
        case 1: on_newbakButton_clicked(); break;
        case 2: on_newcreButton_clicked(); break;
        case 3: on_loginPassConfirmEdit_editingFinished(); break;
        case 4: on_loginPassEdit_editingFinished(); break;
        case 5: on_loginIdEdit_editingFinished(); break;
        case 6: on_dobEdit_editingFinished(); break;
        case 7: on_phoneEdit_editingFinished(); break;
        case 8: on_zipCodeEdit_editingFinished(); break;
        case 9: on_stateEdit_editingFinished(); break;
        case 10: on_cityEdit_editingFinished(); break;
        case 11: on_address2Edit_editingFinished(); break;
        case 12: on_address1Edit_editingFinished(); break;
        case 13: on_lastNameEdit_editingFinished(); break;
        case 14: on_firstNameEdit_editingFinished(); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
