/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "durationChanged",
    "",
    "duration",
    "positionChanged",
    "progress",
    "pathFile",
    "on_play_clicked",
    "on_stop_clicked",
    "on_Next_clicked",
    "on_back_clicked",
    "onMediaStatusChanged",
    "QMediaPlayer::MediaStatus",
    "status",
    "on_volumeSlid_valueChanged",
    "value",
    "updateTrackLabel",
    "on_mute_clicked",
    "keyPressEvent",
    "QKeyEvent*",
    "event",
    "lenTreck",
    "currentTreck",
    "rand",
    "on_random_clicked",
    "on_comboBox_currentIndexChanged",
    "index",
    "initializeComboBox",
    "on_lenSlid_sliderMoved",
    "position",
    "on_pushButton_2_clicked",
    "addStyle",
    "updateTheme",
    "saveTheme",
    "loadTheme",
    "on_pushButton_3_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  164,    2, 0x08,    1 /* Private */,
       4,    1,  167,    2, 0x08,    3 /* Private */,
       6,    0,  170,    2, 0x08,    5 /* Private */,
       7,    0,  171,    2, 0x08,    6 /* Private */,
       8,    0,  172,    2, 0x08,    7 /* Private */,
       9,    0,  173,    2, 0x08,    8 /* Private */,
      10,    0,  174,    2, 0x08,    9 /* Private */,
      11,    1,  175,    2, 0x08,   10 /* Private */,
      14,    1,  178,    2, 0x08,   12 /* Private */,
      16,    0,  181,    2, 0x08,   14 /* Private */,
      17,    0,  182,    2, 0x08,   15 /* Private */,
      18,    1,  183,    2, 0x08,   16 /* Private */,
      21,    0,  186,    2, 0x08,   18 /* Private */,
      22,    0,  187,    2, 0x08,   19 /* Private */,
      23,    0,  188,    2, 0x08,   20 /* Private */,
      24,    0,  189,    2, 0x08,   21 /* Private */,
      25,    1,  190,    2, 0x08,   22 /* Private */,
      27,    0,  193,    2, 0x08,   24 /* Private */,
      28,    1,  194,    2, 0x08,   25 /* Private */,
      30,    0,  197,    2, 0x08,   27 /* Private */,
      31,    0,  198,    2, 0x08,   28 /* Private */,
      32,    0,  199,    2, 0x08,   29 /* Private */,
      33,    0,  200,    2, 0x08,   30 /* Private */,
      34,    0,  201,    2, 0x08,   31 /* Private */,
      35,    0,  202,    2, 0x08,   32 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'durationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'positionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'pathFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_play_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stop_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Next_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_back_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMediaStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMediaPlayer::MediaStatus, std::false_type>,
        // method 'on_volumeSlid_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateTrackLabel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_mute_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'keyPressEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>,
        // method 'lenTreck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentTreck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_random_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBox_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'initializeComboBox'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lenSlid_sliderMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addStyle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateTheme'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveTheme'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadTheme'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->durationChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 1: _t->positionChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 2: _t->pathFile(); break;
        case 3: _t->on_play_clicked(); break;
        case 4: _t->on_stop_clicked(); break;
        case 5: _t->on_Next_clicked(); break;
        case 6: _t->on_back_clicked(); break;
        case 7: _t->onMediaStatusChanged((*reinterpret_cast< std::add_pointer_t<QMediaPlayer::MediaStatus>>(_a[1]))); break;
        case 8: _t->on_volumeSlid_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->updateTrackLabel(); break;
        case 10: _t->on_mute_clicked(); break;
        case 11: _t->keyPressEvent((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 12: _t->lenTreck(); break;
        case 13: _t->currentTreck(); break;
        case 14: _t->rand(); break;
        case 15: _t->on_random_clicked(); break;
        case 16: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->initializeComboBox(); break;
        case 18: _t->on_lenSlid_sliderMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->on_pushButton_2_clicked(); break;
        case 20: _t->addStyle(); break;
        case 21: _t->updateTheme(); break;
        case 22: _t->saveTheme(); break;
        case 23: _t->loadTheme(); break;
        case 24: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 25;
    }
    return _id;
}
QT_WARNING_POP
