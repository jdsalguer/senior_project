/****************************************************************************
** Meta object code from reading C++ file 'exammenu.h'
**
** Created: Tue Apr 28 14:02:28 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../projectPHOE/exammenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'exammenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_exammenu[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      40,    9,    9,    9, 0x08,
      70,    9,    9,    9, 0x08,
     100,    9,    9,    9, 0x08,
     129,    9,    9,    9, 0x08,
     159,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_exammenu[] = {
    "exammenu\0\0on_fundusexamButton_clicked()\0"
    "on_ocularexamButton_clicked()\0"
    "on_fieldsexamButton_clicked()\0"
    "on_colorexamButton_clicked()\0"
    "on_acuityexamButton_clicked()\0"
    "on_menulogoutButton_clicked()\0"
};

const QMetaObject exammenu::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_exammenu,
      qt_meta_data_exammenu, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &exammenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *exammenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *exammenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_exammenu))
        return static_cast<void*>(const_cast< exammenu*>(this));
    return QDialog::qt_metacast(_clname);
}

int exammenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_fundusexamButton_clicked(); break;
        case 1: on_ocularexamButton_clicked(); break;
        case 2: on_fieldsexamButton_clicked(); break;
        case 3: on_colorexamButton_clicked(); break;
        case 4: on_acuityexamButton_clicked(); break;
        case 5: on_menulogoutButton_clicked(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
