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
    "placeInNewFolderChanged",
    "newFolderNameChanged",
    "defaultPathChanged",
    "addItems",
    "count",
    "setFileListDefault",
    "setFilters",
    "emptyFileListModel",
    "createNewFolder",
    "folderDirectory",
    "urlToLocalFile",
    "url",
    "showDirectoryInExplorer",
    "setRootDirectory",
    "selectedFolderPath",
    "editFile",
    "index",
    "fileName",
    "rootIndex",
    "QModelIndex",
    "files",
    "QStringListModel*",
    "fileList",
    "extensionType",
    "fileNameList",
    "placeInNewFolder",
    "newFolderName",
    "defaultPath"
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
      17,   14, // methods
       8,  149, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x06,    9 /* Public */,
       3,    0,  117,    2, 0x06,   10 /* Public */,
       4,    0,  118,    2, 0x06,   11 /* Public */,
       5,    0,  119,    2, 0x06,   12 /* Public */,
       6,    0,  120,    2, 0x06,   13 /* Public */,
       7,    0,  121,    2, 0x06,   14 /* Public */,
       8,    0,  122,    2, 0x06,   15 /* Public */,
       9,    0,  123,    2, 0x06,   16 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,  124,    2, 0x0a,   17 /* Public */,
      12,    0,  127,    2, 0x0a,   19 /* Public */,
      13,    0,  128,    2, 0x0a,   20 /* Public */,
      14,    0,  129,    2, 0x0a,   21 /* Public */,
      15,    1,  130,    2, 0x0a,   22 /* Public */,
      17,    1,  133,    2, 0x0a,   24 /* Public */,
      19,    1,  136,    2, 0x0a,   26 /* Public */,
      20,    1,  139,    2, 0x0a,   28 /* Public */,
      22,    3,  142,    2, 0x0a,   30 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QUrl,   16,
    QMetaType::QString, QMetaType::QUrl,   18,
    QMetaType::Void, QMetaType::QUrl,   16,
    QMetaType::Void, QMetaType::QUrl,   21,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Int, QMetaType::QString,   16,   23,   24,

 // properties: name, type, flags
      25, 0x80000000 | 26, 0x0001510b, uint(0), 0,
      27, 0x80000000 | 28, 0x0001510b, uint(1), 0,
      29, QMetaType::QStringList, 0x00015103, uint(2), 0,
      30, QMetaType::QString, 0x00015103, uint(3), 0,
      31, QMetaType::QStringList, 0x00015103, uint(4), 0,
      32, QMetaType::Bool, 0x00015903, uint(5), 0,
      33, QMetaType::QString, 0x00015903, uint(6), 0,
      34, QMetaType::QUrl, 0x00015903, uint(7), 0,

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
        // property 'placeInNewFolder'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'newFolderName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'defaultPath'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
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
        // method 'placeInNewFolderChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'newFolderNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'defaultPathChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setFileListDefault'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setFilters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'emptyFileListModel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createNewFolder'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QUrl, std::false_type>,
        // method 'urlToLocalFile'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QUrl, std::false_type>,
        // method 'showDirectoryInExplorer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QUrl, std::false_type>,
        // method 'setRootDirectory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl, std::false_type>,
        // method 'editFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QUrl, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
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
        case 5: _t->placeInNewFolderChanged(); break;
        case 6: _t->newFolderNameChanged(); break;
        case 7: _t->defaultPathChanged(); break;
        case 8: _t->addItems((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->setFileListDefault(); break;
        case 10: _t->setFilters(); break;
        case 11: _t->emptyFileListModel(); break;
        case 12: { QString _r = _t->createNewFolder((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->urlToLocalFile((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->showDirectoryInExplorer((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 15: _t->setRootDirectory((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 16: _t->editFile((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
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
        {
            using _t = void (FileDataHandler::*)();
            if (_t _q_method = &FileDataHandler::placeInNewFolderChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FileDataHandler::*)();
            if (_t _q_method = &FileDataHandler::newFolderNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FileDataHandler::*)();
            if (_t _q_method = &FileDataHandler::defaultPathChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
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
        case 5: *reinterpret_cast< bool*>(_v) = _t->placeInNewFolder(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->newFolderName(); break;
        case 7: *reinterpret_cast< QUrl*>(_v) = _t->defaultPath(); break;
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
        case 5: _t->setPlaceInNewFolder(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setNewFolderName(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setDefaultPath(*reinterpret_cast< QUrl*>(_v)); break;
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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
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

// SIGNAL 5
void FileDataHandler::placeInNewFolderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void FileDataHandler::newFolderNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void FileDataHandler::defaultPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
