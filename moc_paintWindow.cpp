/****************************************************************************
** Meta object code from reading C++ file 'paintWindow.h'
**
** Created: Tue Mar 17 16:20:24 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Include/paintWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paintWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PaintWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   12,   12,   12, 0x0a,
      42,   12,   12,   12, 0x0a,
      50,   12,   12,   12, 0x0a,
      57,   12,   12,   12, 0x08,
      68,   12,   12,   12, 0x08,
      80,   12,   12,   12, 0x08,
      92,   12,   12,   12, 0x08,
     106,   12,   12,   12, 0x08,
     114,   12,   12,   12, 0x08,
     123,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PaintWindow[] = {
    "PaintWindow\0\0digit\0toolMapped(int)\0"
    "quit()\0_exit()\0draw()\0_newFile()\0"
    "_openFile()\0_saveFile()\0_saveAsFile()\0"
    "color()\0_about()\0_aboutQt()\0"
};

const QMetaObject PaintWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PaintWindow,
      qt_meta_data_PaintWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PaintWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PaintWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PaintWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PaintWindow))
        return static_cast<void*>(const_cast< PaintWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int PaintWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: toolMapped((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: quit(); break;
        case 2: _exit(); break;
        case 3: draw(); break;
        case 4: _newFile(); break;
        case 5: _openFile(); break;
        case 6: _saveFile(); break;
        case 7: _saveAsFile(); break;
        case 8: color(); break;
        case 9: _about(); break;
        case 10: _aboutQt(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void PaintWindow::toolMapped(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
