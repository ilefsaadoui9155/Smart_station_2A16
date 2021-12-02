/****************************************************************************
** Meta object code from reading C++ file 'gestionclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../integration/client/gestionclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gestionclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gestionClient_t {
    QByteArrayData data[17];
    char stringdata0[341];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gestionClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gestionClient_t qt_meta_stringdata_gestionClient = {
    {
QT_MOC_LITERAL(0, 0, 13), // "gestionClient"
QT_MOC_LITERAL(1, 14, 23), // "on_pb_supprimer_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 18), // "on_tri_nom_clicked"
QT_MOC_LITERAL(4, 58, 18), // "on_tri_age_clicked"
QT_MOC_LITERAL(5, 77, 18), // "on_tri_cin_clicked"
QT_MOC_LITERAL(6, 96, 30), // "on_cin_recherche_3_textChanged"
QT_MOC_LITERAL(7, 127, 4), // "arg1"
QT_MOC_LITERAL(8, 132, 21), // "on_pb_ajouter_clicked"
QT_MOC_LITERAL(9, 154, 22), // "on_combo_box_activated"
QT_MOC_LITERAL(10, 177, 22), // "on_pb_modifier_clicked"
QT_MOC_LITERAL(11, 200, 32), // "on_pushButton_send_email_clicked"
QT_MOC_LITERAL(12, 233, 34), // "on_pushButton_browse_email_cl..."
QT_MOC_LITERAL(13, 268, 8), // "mailSent"
QT_MOC_LITERAL(14, 277, 18), // "on_pb_stat_clicked"
QT_MOC_LITERAL(15, 296, 24), // "on_pushButton_10_clicked"
QT_MOC_LITERAL(16, 321, 19) // "on_pb_excel_clicked"

    },
    "gestionClient\0on_pb_supprimer_clicked\0"
    "\0on_tri_nom_clicked\0on_tri_age_clicked\0"
    "on_tri_cin_clicked\0on_cin_recherche_3_textChanged\0"
    "arg1\0on_pb_ajouter_clicked\0"
    "on_combo_box_activated\0on_pb_modifier_clicked\0"
    "on_pushButton_send_email_clicked\0"
    "on_pushButton_browse_email_clicked\0"
    "mailSent\0on_pb_stat_clicked\0"
    "on_pushButton_10_clicked\0on_pb_excel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gestionClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    1,   88,    2, 0x08 /* Private */,
       8,    0,   91,    2, 0x08 /* Private */,
       9,    1,   92,    2, 0x08 /* Private */,
      10,    0,   95,    2, 0x08 /* Private */,
      11,    0,   96,    2, 0x08 /* Private */,
      12,    0,   97,    2, 0x08 /* Private */,
      13,    1,   98,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gestionClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        gestionClient *_t = static_cast<gestionClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pb_supprimer_clicked(); break;
        case 1: _t->on_tri_nom_clicked(); break;
        case 2: _t->on_tri_age_clicked(); break;
        case 3: _t->on_tri_cin_clicked(); break;
        case 4: _t->on_cin_recherche_3_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_pb_ajouter_clicked(); break;
        case 6: _t->on_combo_box_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_pb_modifier_clicked(); break;
        case 8: _t->on_pushButton_send_email_clicked(); break;
        case 9: _t->on_pushButton_browse_email_clicked(); break;
        case 10: _t->mailSent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->on_pb_stat_clicked(); break;
        case 13: _t->on_pb_excel_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject gestionClient::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_gestionClient.data,
      qt_meta_data_gestionClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *gestionClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gestionClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gestionClient.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int gestionClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
