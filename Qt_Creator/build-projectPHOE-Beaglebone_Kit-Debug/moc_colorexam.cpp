/****************************************************************************
** Meta object code from reading C++ file 'colorexam.h'
**
** Created: Tue Apr 28 14:02:38 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../projectPHOE/colorexam.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorexam.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_colorexam[] = {

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
      11,   10,   10,   10, 0x0a,
      25,   10,   10,   10, 0x08,
      51,   10,   10,   10, 0x08,
      76,   10,   10,   10, 0x08,
      99,   10,   10,   10, 0x08,
     122,   10,   10,   10, 0x08,
     146,   10,   10,   10, 0x08,
     170,   10,   10,   10, 0x08,
     193,   10,   10,   10, 0x08,
     218,   10,   10,   10, 0x08,
     243,   10,   10,   10, 0x08,
     267,   10,   10,   10, 0x08,
     290,   10,   10,   10, 0x08,
     314,   10,   10,   10, 0x08,
     341,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_colorexam[] = {
    "colorexam\0\0removeImage()\0"
    "on_submitButton_clicked()\0"
    "on_threeButton_clicked()\0"
    "on_oneButton_clicked()\0on_twoButton_clicked()\0"
    "on_fourButton_clicked()\0on_fiveButton_clicked()\0"
    "on_sixButton_clicked()\0on_sevenButton_clicked()\0"
    "on_eightButton_clicked()\0"
    "on_nineButton_clicked()\0on_delButton_clicked()\0"
    "on_zeroButton_clicked()\0"
    "on_nothingButton_clicked()\0"
    "on_endTestButton_clicked()\0"
};

const QMetaObject colorexam::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_colorexam,
      qt_meta_data_colorexam, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &colorexam::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *colorexam::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *colorexam::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_colorexam))
        return static_cast<void*>(const_cast< colorexam*>(this));
    return QDialog::qt_metacast(_clname);
}

int colorexam::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: removeImage(); break;
        case 1: on_submitButton_clicked(); break;
        case 2: on_threeButton_clicked(); break;
        case 3: on_oneButton_clicked(); break;
        case 4: on_twoButton_clicked(); break;
        case 5: on_fourButton_clicked(); break;
        case 6: on_fiveButton_clicked(); break;
        case 7: on_sixButton_clicked(); break;
        case 8: on_sevenButton_clicked(); break;
        case 9: on_eightButton_clicked(); break;
        case 10: on_nineButton_clicked(); break;
        case 11: on_delButton_clicked(); break;
        case 12: on_zeroButton_clicked(); break;
        case 13: on_nothingButton_clicked(); break;
        case 14: on_endTestButton_clicked(); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
