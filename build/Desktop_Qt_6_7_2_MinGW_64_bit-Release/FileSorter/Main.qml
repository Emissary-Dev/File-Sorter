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
    property string currentFolderPathAsLocalFile: ""
    property bool folderOpen: false
    property string extensionType: FileDataHandler.extensionType
    property var editedFileNameList;
    property var checkedFileList;
    property string prefix;
    property string suffix;
    property string infoText
    signal selectAll()
    signal deselectAll()

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
            currentFolderPathAsLocalFile =  FileDataHandler.urlToLocalFile(selectedFolder)
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
        FileDataHandler.setFilters()
        FileDataHandler.setRootDirectory(currentFolderPath)//fills Grid View (always have this be the 2nd thing you run)

        //empty file name list, then add the same number of empty slots as there are rows in the files QList
        //empty checked file list, then add the same number of Checked (default) slots as there are rows in the files QList
        editedFileNameList = []
        checkedFileList = []
        for(var i = 0; i < FileDataHandler.files.rowCount(); i++){
            editedFileNameList.push("")
            checkedFileList.push("Checked")
        }
    }


    ColumnLayout{
        id: coreStructure
        anchors.fill: parent
        spacing: 0

        MainHeader{
            id:header

        }

        Rectangle{
            id:container
            color: ColorProperties.baseColor
            Layout.fillWidth: true
            Layout.fillHeight: true

            ScrollView{
                id:sv
                anchors.fill: parent

                GridLayout{
                    id:gl
                    anchors.fill: parent
                    anchors.leftMargin: 40
                    anchors.rightMargin: 40
                    anchors.topMargin: 20
                    anchors.bottomMargin: 20
                    columns: 4
                    rows: 4
                    columnSpacing: 10
                    rowSpacing: 10
                    clip: true

                    Repeater{
                        id:fileinfo
                        model: FileDataHandler.files
                        Rectangle{
                            id:   indicator
                            Layout.preferredWidth: 150
                            Layout.preferredHeight: 150

                            color: Qt.lighter(ColorProperties.baseColor, 1.5)


                            ColumnLayout{
                                anchors.fill: parent

                                Image {

                                    Layout.alignment: Qt.AlignHCenter
                                    id: myImage
                                    source:     "Icons/doument-outline-green.svg"
                                    fillMode: Image.PreserveAspectFit
                                    sourceSize: Qt.size(48,48)
                                    Layout.preferredWidth: indicator.width * .4
                                    Layout.preferredHeight: indicator.height * .4
                                    antialiasing: false
                                    smooth: false
                                }


                                TextField{

                                    color: "#000000"
                                    Layout.alignment: Qt.AlignHCenter
                                    text: model[index]
                                    Layout.maximumWidth: indicator.width * .8
                                    Layout.preferredWidth: indicator.width * .5
                                    Layout.preferredHeight: indicator.height * .2

                                    onEditingFinished: function(){
                                        newFileList[index] = text + ".txt" //change this to a dynamic file extension
                                    }

                                    font.pixelSize: Math.round(height/3)
                                    background: Rectangle{
                                        radius: 30
                                    }
                                    clip: true

                                }
                            }
                        }
                    }
                }
            }
        }





        //Note: Direct child of ColumnLayout
        SortSettings{
            id: sortSettings

            Connections{
                target: sortSettings
                function onSelectAllPressed() {
                    window.selectAll()
                }
                function onDeselectAllPressed() {
                    window.deselectAll()
                }
            }

        }
    }
}
