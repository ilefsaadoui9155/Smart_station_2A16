/****************************************************************************
** Meta object code from reading C++ file 'mainwindow3.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../integration/ticket/mainwindow3.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow3_t {
    QByteArrayData data[14];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow3_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow3_t qt_meta_stringdata_MainWindow3 = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MainWindow3"
QT_MOC_LITERAL(1, 12, 21), // "on_qb_ajouter_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "on_qb_supprimer_clicked"
QT_MOC_LITERAL(4, 59, 22), // "on_qb_modifier_clicked"
QT_MOC_LITERAL(5, 82, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(6, 104, 4), // "arg1"
QT_MOC_LITERAL(7, 109, 23), // "on_trireferance_clicked"
QT_MOC_LITERAL(8, 133, 18), // "on_triprix_clicked"
QT_MOC_LITERAL(9, 152, 25), // "on_tritempsdepart_clicked"
QT_MOC_LITERAL(10, 178, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(11, 202, 18), // "on_QR_code_clicked"
QT_MOC_LITERAL(12, 221, 20), // "on_qb_revenu_clicked"
QT_MOC_LITERAL(13, 242, 23) // "on_comboBox_2_activated"

    },
    "MainWindow3\0on_qb_ajouter_clicked\0\0"
    "on_qb_supprimer_clicked\0on_qb_modifier_clicked\0"
    "on_comboBox_activated\0arg1\0"
    "on_trireferance_clicked\0on_triprix_clicked\0"
    "on_tritempsdepart_clicked\0"
    "on_lineEdit_textChanged\0on_QR_code_clicked\0"
    "on_qb_revenu_clicked\0on_comboBox_2_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow3[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    1,   72,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    1,   78,    2, 0x08 /* Private */,
      11,    0,   81,    2, 0x08 /* Private */,
      12,    0,   82,    2, 0x08 /* Private */,
      13,    1,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void MainWindow3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow3 *_t = static_cast<MainWindow3 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_qb_ajouter_clicked(); break;
        case 1: _t->on_qb_supprimer_clicked(); break;
        case 2: _t->on_qb_modifier_clicked(); break;
        case 3: _t->on_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_trireferance_clicked(); break;
        case 5: _t->on_triprix_clicked(); break;
        case 6: _t->on_tritempsdepart_clicked(); break;
        case 7: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_QR_code_clicked(); break;
        case 9: _t->on_qb_revenu_clicked(); break;
        case 10: _t->on_comboBox_2_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow3::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow3.data,
      qt_meta_data_MainWindow3,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow3::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow3.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
