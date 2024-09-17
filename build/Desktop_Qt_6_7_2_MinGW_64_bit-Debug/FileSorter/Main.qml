import QtQuick
import QtQuick.VirtualKeyboard
import QtQuick.Layouts
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Dialogs
import FileSorter

Window {
    id: window
    property url currentFolderPath: ""
    property bool folderOpen: false
    property string extensionType: FileDataHandler.extensionType
    property var editedFileNameList;
    property var checkedFileList;
    property string prefix;
    property string suffix;
    property string infoText

    width: 640
    height: 600
    visible: true
    title: qsTr("FileSorter")


    FolderDialog{
        id:folderDialog
        title: "Select a folder with the " + extensionType + " files you want to organize"
        options: folderDialog.ReadOnly
        onAccepted: {
            currentFolderPath = selectedFolder
            folderOpen = false
            refreshFileLists();
        }
        onRejected:{
            folderOpen = false
        }
    }

    function refreshFileLists(){
        FileDataHandler.extensionType = header.fileExtensionField.text
        FileDataHandler.emptyFileListModel() //empty model to empty out GridView
        FileDataHandler.setRootDirectory(currentFolderPath)//fills Grid View (always have this be the 2nd thing you run)

        //empty file name list, then add the same number of empty slots as there are rows in the files QList
        //empty checked file list, then add the same number of Checked (default) slots as there are rows in the files QList
        editedFileNameList = []
        checkedFileList = []
        for(var i = 0; i < FileDataHandler.files.rowCount(); i++){
            editedFileNameList.push("")
            checkedFileList.push("Checked")
        }
          console.log("REFRESH", editedFileNameList, checkedFileList)
    }


    ColumnLayout{
        id: coreStructure
        anchors.fill: parent
        spacing: 0

       MainHeader{
           id:header

       }
       CustomExplorer{
           id:explorer

       }


        SortSettings{

            id:settings
        }
    }
}
