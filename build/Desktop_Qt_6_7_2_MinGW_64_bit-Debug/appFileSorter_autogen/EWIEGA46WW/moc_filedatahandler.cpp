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
    "createNewFolder",
    "emptyFileListModel",
    "setFilters",
    "showDirectoryInExplorer",
    "urlToLocalFile",
    "url",
    "rootIndex",
    "QModelIndex",
    "files",
    "QStringListModel*",
    "fileList",
    "extensionType",
    "fileNameList",
    "placeInNewFolder",
    "newFolderName"
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
      18,   14, // methods
       7,  174, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  122,    2, 0x06,    8 /* Public */,
       3,    0,  123,    2, 0x06,    9 /* Public */,
       4,    0,  124,    2, 0x06,   10 /* Public */,
       5,    0,  125,    2, 0x06,   11 /* Public */,
       6,    0,  126,    2, 0x06,   12 /* Public */,
       7,    0,  127,    2, 0x06,   13 /* Public */,
       8,    0,  128,    2, 0x06,   14 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,  129,    2, 0x0a,   15 /* Public */,
      11,    1,  132,    2, 0x0a,   17 /* Public */,
      13,    0,  135,    2, 0x0a,   19 /* Public */,
      14,    5,  136,    2, 0x0a,   20 /* Public */,
      14,    4,  147,    2, 0x2a,   26 /* Public | MethodCloned */,
      14,    3,  156,    2, 0x2a,   31 /* Public | MethodCloned */,
      20,    1,  163,    2, 0x0a,   35 /* Public */,
      21,    0,  166,    2, 0x0a,   37 /* Public */,
      22,    0,  167,    2, 0x0a,   38 /* Public */,
      23,    1,  168,    2, 0x0a,   39 /* Public */,
      24,    1,  171,    2, 0x0a,   41 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString,   15,   16,   17,   18,   19,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Int, QMetaType::QString, QMetaType::QString,   15,   16,   17,   18,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Int, QMetaType::QString,   15,   16,   17,
    QMetaType::QString, QMetaType::QUrl,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   15,
    QMetaType::QString, QMetaType::QUrl,   25,

 // properties: name, type, flags
      26, 0x80000000 | 27, 0x0001510b, uint(0), 0,
      28, 0x80000000 | 29, 0x0001510b, uint(1), 0,
      30, QMetaType::QStringList, 0x00015103, uint(2), 0,
      31, QMetaType::QString, 0x00015103, uint(3), 0,
      32, QMetaType::QStringList, 0x00015103, uint(4), 0,
      33, QMetaType::Bool, 0x00015903, uint(5), 0,
      34, QMetaType::QString, 0x00015903, uint(6), 0,

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
        // method 'createNewFolder'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QUrl, std::false_type>,
        // method 'emptyFileListModel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setFilters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showDirectoryInExplorer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QUrl, std::false_type>,
        // method 'urlToLocalFile'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QUrl, std::false_type>
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
        case 7: _t->setRootDirectory((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 8: _t->addItems((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->setFileListDefault(); break;
        case 10: _t->editFile((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        case 11: _t->editFile((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 12: _t->editFile((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 13: { QString _r = _t->createNewFolder((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->emptyFileListModel(); break;
        case 15: _t->setFilters(); break;
        case 16: _t->showDirectoryInExplorer((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 17: { QString _r = _t->urlToLocalFile((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
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
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
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
QT_WARNING_POP
