/****************************************************************************
** Meta object code from reading C++ file 'filedatahandler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../filedatahandler.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filedatahandler.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFileDataHandlerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFileDataHandlerENDCLASS = QtMocHelpers::stringData(
    "FileDataHandler",
    "rootIndexChanged",
    "",
    "filesChanged",
    "fileListChanged",
    "extensionTypeChanged",
    "fileNameListChanged",
    "setRootDirectory",
    "selectedFolderPath",
    "addItems",
    "count",
    "setFileListDefault",
    "editFile",
    "folderDirectory",
    "index",
    "fileName",
    "prefix",
    "suffix",
    "emptyFileListModel",
    "setFilters",
    "rootIndex",
    "QModelIndex",
    "files",
    "QStringListModel*",
    "fileList",
    "extensionType",
    "fileNameList"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFileDataHandlerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       5,  133, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,    6 /* Public */,
       3,    0,   93,    2, 0x06,    7 /* Public */,
       4,    0,   94,    2, 0x06,    8 /* Public */,
       5,    0,   95,    2, 0x06,    9 /* Public */,
       6,    0,   96,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   97,    2, 0x0a,   11 /* Public */,
       9,    1,  100,    2, 0x0a,   13 /* Public */,
      11,    0,  103,    2, 0x0a,   15 /* Public */,
      12,    5,  104,    2, 0x0a,   16 /* Public */,
      12,    4,  115,    2, 0x2a,   22 /* Public | MethodCloned */,
      12,    3,  124,    2, 0x2a,   27 /* Public | MethodCloned */,
      18,    0,  131,    2, 0x0a,   31 /* Public */,
      19,    0,  132,    2, 0x0a,   32 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString,   13,   14,   15,   16,   17,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Int, QMetaType::QString, QMetaType::QString,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Int, QMetaType::QString,   13,   14,   15,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      20, 0x80000000 | 21, 0x0001510b, uint(0), 0,
      22, 0x80000000 | 23, 0x0001510b, uint(1), 0,
      24, QMetaType::QStringList, 0x00015103, uint(2), 0,
      25, QMetaType::QString, 0x00015103, uint(3), 0,
      26, QMetaType::QStringList, 0x00015103, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject FileDataHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QFileSystemModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSFileDataHandlerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFileDataHandlerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFileDataHandlerENDCLASS_t,
        // property 'rootIndex'
        QtPrivate::TypeAndForceComplete<QModelIndex, std::true_type>,
        // property 'files'
        QtPrivate::TypeAndForceComplete<QStringListModel*, std::true_type>,
        // property 'fileList'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'extensionType'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'fileNameList'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FileDataHandler, std::true_type>,
        // method 'rootIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'filesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fileListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'extensionTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fileNameListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setRootDirectory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QUrl, std::false_type>,
        // method 'addItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setFileListDefault'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QUrl, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'editFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QUrl, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'editFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QUrl, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'emptyFileListModel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setFilters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FileDataHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileDataHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rootIndexChanged(); break;
        case 1: _t->filesChanged(); break;
        case 2: _t->fileListChanged(); break;
        case 3: _t->extensionTypeChanged(); break;
        case 4: _t->fileNameListChanged(); break;
        case 5: _t->setRootDirectory((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 6: _t->addItems((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setFileListDefault(); break;
        case 8: _t->editFile((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        case 9: _t->editFile((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 10: _t->editFile((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 11: _t->emptyFileListModel(); break;
        case 12: _t->setFilters(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileDataHandler::*)();
            if (_t _q_method = &FileDataHandler::rootIndexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileDataHandler::*)();
            if (_t _q_method = &FileDataHandler::filesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileDataHandler::*)();
            if (_t _q_method = &FileDataHandler::fileListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileDataHandler::*)();
            if (_t _q_method = &FileDataHandler::extensionTypeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileDataHandler::*)();
            if (_t _q_method = &FileDataHandler::fileNameListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStringListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FileDataHandler *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QModelIndex*>(_v) = _t->rootIndex(); break;
        case 1: *reinterpret_cast< QStringListModel**>(_v) = _t->files(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->fileList(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->extensionType(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = _t->fileNameList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FileDataHandler *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRootIndex(*reinterpret_cast< QModelIndex*>(_v)); break;
        case 1: _t->setFiles(*reinterpret_cast< QStringListModel**>(_v)); break;
        case 2: _t->setFileList(*reinterpret_cast< QStringList*>(_v)); break;
        case 3: _t->setExtensionType(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setFileNameList(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *FileDataHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileDataHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFileDataHandlerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFileSystemModel::qt_metacast(_clname);
}

int FileDataHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFileSystemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void FileDataHandler::rootIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FileDataHandler::filesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FileDataHandler::fileListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FileDataHandler::extensionTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FileDataHandler::fileNameListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
