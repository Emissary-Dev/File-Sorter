#ifndef FILEDATAHANDLER_H
#define FILEDATAHANDLER_H

#include <QObject>
#include <QFileSystemModel>
#include <QUrl>
#include <QStringListModel>

struct FileData{
    QString fileName;

};

class FileDataHandler : public QFileSystemModel
{
    Q_OBJECT
    Q_PROPERTY(QModelIndex rootIndex READ rootIndex WRITE setRootIndex NOTIFY rootIndexChanged )
    Q_PROPERTY(QStringListModel *files READ files WRITE setFiles NOTIFY filesChanged )
    Q_PROPERTY(QStringList fileList READ fileList WRITE setFileList NOTIFY fileListChanged)
    Q_PROPERTY(QString extensionType READ extensionType WRITE setExtensionType NOTIFY extensionTypeChanged)
    Q_PROPERTY(QStringList fileNameList READ fileNameList WRITE setFileNameList NOTIFY fileNameListChanged)
    Q_PROPERTY(bool placeInNewFolder READ placeInNewFolder WRITE setPlaceInNewFolder NOTIFY placeInNewFolderChanged FINAL)
    Q_PROPERTY(QString newFolderName READ newFolderName WRITE setNewFolderName NOTIFY newFolderNameChanged FINAL)

public:
    FileDataHandler(QObject * parent = nullptr);


    QStringList filters;

    QString getDefaultRootDirectory();

    //stores the selectedFolder var from qml which defaults to this type



    //setting a "starting point" for our tree view
    QModelIndex rootIndex() const;
    void setRootIndex(const QModelIndex &newRootIndex);

    QStringListModel *files() const;
    void setFiles(QStringListModel *newFiles);

    QStringList FileList() const;
    void setFileList(const QStringList &FileList);


    QStringList fileList() const;

    QString extensionType() const;
    void setExtensionType(const QString &newExtensionType);

    QStringList fileNameList() const;
    void setFileNameList(const QStringList &newFileNameList);


    bool placeInNewFolder() const;
    void setPlaceInNewFolder(bool newPlaceInNewFolder);

    QString newFolderName() const;
    void setNewFolderName(const QString &newNewFolderName);

public slots:
    void setRootDirectory(QUrl selectedFolderPath);
    void addItems(int count);
    void setFileListDefault();
    void editFile(QUrl folderDirectory, int index, QString fileName, QString prefix = "", QString suffix = "");
    QString createNewFolder(QUrl folderDirectory);
    void emptyFileListModel();
    void setFilters();
    void showDirectoryInExplorer(QUrl folderDirectory);
    QString urlToLocalFile(QUrl url);

signals:

    void rootIndexChanged();
    void filesChanged();
    void fileListChanged();

    void extensionTypeChanged();

    void fileNameListChanged();

    void placeInNewFolderChanged();

    void newFolderNameChanged();

private:

    QUrl defaultPath;
    QModelIndex m_rootIndex;
    QStringListModel *m_files = new QStringListModel(this);
    QStringList m_fileList;
    QString m_extensionType = ".txt";
    QStringList m_fileNameList;
    bool m_placeInNewFolder;
    QString m_newFolderName;
};

#endif // FILEDATAHANDLER_H
