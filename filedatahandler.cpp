#include "filedatahandler.h"
#include <QFIleDialog>
#include <QDir>
#include <QStandardPaths>
#include <QFileSystemModel>



FileDataHandler::FileDataHandler(QObject * parent) : QFileSystemModel(parent) {

    //qurls return an empty string when converted into a local file without file:///
    //QStandardPaths doesn't return a string in that format, so we handle this manually
    defaultPath = "file:///" + (QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation));
    m_fileList.clear();
    setFilters();
    setRootDirectory(defaultPath);
}


void FileDataHandler::setRootDirectory( QUrl selectedFolderPath)
{

    //convert url into a qstring that's compatible with setRootPath()
    QString selectedPath = selectedFolderPath.toLocalFile();
    if (QDir(selectedPath).exists()){
        setRootPath(selectedPath);
        setRootIndex(index(selectedPath));
        if(m_files){
            m_files->setStringList(QDir(selectedPath).entryList(filters, QDir::Files));
            setFiles(m_files);
            setFileList(m_files->stringList());
            for (int i = 0; i < m_fileList.length(); i++) {
                int dotIndex = m_fileList[i].lastIndexOf(".");
                m_fileNameList << m_fileList[i].left(dotIndex);
            }
        }
        else
        {
            qWarning() << "m_files is invalid";
        }

        qInfo() << rootPath()<< selectedPath;
        return;
    }
    else{
        qWarning() << "Cannot set a default path.";

    }

}

void FileDataHandler::addItems(int count)
{
    QStringList fileList;
    fileList.fill("", m_files->stringList().size());


}

void FileDataHandler::setFileListDefault()
{
    m_fileList = m_files->stringList();
}

QString FileDataHandler::getDefaultRootDirectory()
{
    //returns documents directory as string (note that writeableLocation is used if you're just reading or writing)
    return QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation);
}

QModelIndex FileDataHandler::rootIndex() const
{
    return m_rootIndex;
}

void FileDataHandler::setRootIndex(const QModelIndex &newRootIndex)
{
    if (m_rootIndex == newRootIndex)
        return;
    m_rootIndex = newRootIndex;
    emit rootIndexChanged();
}

QStringListModel *FileDataHandler::files() const
{
    return m_files;
}

void FileDataHandler::setFiles(QStringListModel *newFiles)
{
    if (m_files == newFiles)
        return;
    m_files = newFiles;
    emit filesChanged();
}
void FileDataHandler::editFile(QUrl folderDirectory, int index, QString fileName, QString prefix, QString suffix){


    QDir dir(folderDirectory.toLocalFile()); //removes the file:/// part of the url so that the path is now valid
    QFile currentFile(dir.absoluteFilePath(m_fileList[index])); //creating the reference (absolutePath returns a folder directory)

    if(!prefix.isEmpty()){
        fileName.prepend(prefix);
    }
    if(!suffix.isEmpty()){
        fileName.append(suffix);
    }

    QString newFilePath = dir.absolutePath() + "/" + fileName + m_extensionType;
    if(m_files && m_fileList.size() > 0)
    {
        if(currentFile.rename(newFilePath))
        {
            qInfo() << currentFile.fileName();
        }
        else{


            qWarning() << newFilePath << "FAIL";
        }
    }
    else
    {
        qWarning() << "path does not exist or string list size is 0";
    }

}

void FileDataHandler::emptyFileListModel()
{
    m_fileList.clear();
    m_fileNameList.clear();
    emit fileNameListChanged();
    emit fileListChanged();
}

void FileDataHandler::setFilters()
{
    filters.clear();
    filters << "*" + m_extensionType;
    setNameFilters(filters);
}

void FileDataHandler::setFileList(const QStringList &FileList)
{
    if (m_fileList == FileList)
        return;
    m_fileList = FileList;
    emit fileListChanged();
}

QStringList FileDataHandler::fileList() const
{
    return m_fileList;
}

QString FileDataHandler::extensionType() const
{
    return m_extensionType;
}

void FileDataHandler::setExtensionType(const QString &newExtensionType)
{
    if (m_extensionType == newExtensionType)
        return;
    m_extensionType = newExtensionType;
    emit extensionTypeChanged();
}

QStringList FileDataHandler::fileNameList() const
{
    return m_fileNameList;
}

void FileDataHandler::setFileNameList(const QStringList &newFileNameList)
{
    if (m_fileNameList == newFileNameList)
        return;
    m_fileNameList = newFileNameList;
    emit fileNameListChanged();
}
