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
    signal refreshComplete()

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
        onRejected: folderOpen = false
    }

    function refreshFileLists(){
        FileDataHandler.extensionType = header.fileExtensionField.text
        FileDataHandler.emptyFileListModel() //empty model to empty out GridView
        FileDataHandler.setFilters()

        if(currentFolderPath.toString() === ""){
            currentFolderPath = FileDataHandler.defaultPath
            currentFolderPathAsLocalFile =  FileDataHandler.urlToLocalFile(currentFolderPath)
        }

        FileDataHandler.setRootDirectory(currentFolderPath)//fills Grid View (correct placement of this code is crucial)

        //empty file name list, then add the same number of empty slots as there are rows in the files QList
        //empty checked file list, then add the same number of Checked (default) slots as there are rows in the files QList
        editedFileNameList = []
        checkedFileList = []
        for(var i = 0; i < FileDataHandler.files.rowCount(); i++){
            editedFileNameList.push("")
            checkedFileList.push("Checked")
        }
        refreshComplete()
    }

    ColumnLayout{
        id: coreStructure
        anchors.fill: parent
        spacing: 0
        
        MainHeader{
            id:header
        }

        //Custom Explorer (Seperate file avoided to make signal handling convenient)
        Rectangle{
            id: customExplorerBg
            Layout.fillWidth: true
            Layout.fillHeight: true

            Image{
                source: "Images/BackgroundRadialGradient.png"
                anchors.fill: parent
                fillMode: Image.Stretch
            }

            MouseArea{
                anchors.fill: parent
                onClicked: customExplorerItemGrid.forceActiveFocus()

                ScrollView{
                    id:customExplorerScrollView
                    anchors.fill: parent
                    anchors.leftMargin: 20
                    clip:true

                    ScrollBar.vertical: ScrollBar{
                        anchors.top: parent.top
                        anchors.right: parent.right
                        anchors.bottom: parent.bottom
                        policy: ScrollBar.AsNeeded

                        contentItem: Rectangle {
                            implicitWidth: window.width * .015
                            implicitHeight: window.height * .8
                            radius: width / 2
                            color: ColorProperties.baseColorMidBright
                        }

                        background: Rectangle{
                            color: "transparent"
                        }
                    }


                    /*Layouts have issues dynamically resizing when wrapped around a scrollview (spent 2hr+ trying different methods to fix the issue)
                      so we're using GridView (plus this method appears to be more efficient)*/
                    GridView{
                        id:customExplorerItemGrid

                        anchors.fill: parent
                        model: FileDataHandler.files
                        cellWidth: customExplorerScrollView.width * .2
                        cellHeight: customExplorerScrollView.height * .4

                        delegate: MouseArea{
                            property var fileNameExtraction

                            hoverEnabled: true
                            width: customExplorerItemGrid.cellWidth *.9
                            height: customExplorerItemGrid.cellHeight *.9
                            acceptedButtons: Qt.LeftButton | Qt.RightButton

                            onClicked: editableName.forceActiveFocus()
                            onEntered: infoText = "Click to edit file name."

                            Rectangle{
                                id:   selectionIndicator

                                anchors.fill: parent
                                color: "transparent"

                                //Animation:

                                ScaleAnimator{
                                    id:fileIconScaleUp
                                    target: itemImage
                                    from: itemImage.scale
                                    to: 1.2
                                    duration: 100
                                }

                                ScaleAnimator{
                                    id:fileIconScaleDown
                                    target: itemImage
                                    from: itemImage.scale
                                    to: 1
                                    duration: 100
                                }

                                ColumnLayout{
                                    id: itemContainer
                                    anchors.fill: parent

                                    //Using item is the best way to get the image and checkbox in one "cell"
                                    Item{
                                        Layout.fillWidth: true
                                        Layout.preferredHeight: selectionIndicator.height * .3
                                        Layout.alignment: Qt.AlignHCenter

                                        Image {
                                            //You handle the colors of an icon through the icon file itself
                                            anchors.centerIn: parent
                                            id: itemImage
                                            source:     "Icons/document-outline-green.svg"
                                            fillMode: Image.PreserveAspectFit
                                            sourceSize: Qt.size(64,64)
                                            width: selectionIndicator.width
                                            height:  selectionIndicator.height * .3
                                            smooth: false
                                        }

                                        CustomCheckBox{
                                            id: fileSelectionCheckBox

                                            property real myWidth: 0
                                            property real myHeight: 0
                                            anchors.top: parent.top
                                            anchors.right: parent.right
                                            width: myWidth
                                            height: myHeight

                                            onClicked: {
                                                if(checked)
                                                    checkedFileList[index] = "Checked"
                                                else
                                                    checkedFileList[index] = ""
                                            }

                                            Component.onCompleted: {
                                                myWidth = selectionIndicator.width * .15
                                                myHeight = boxWidth

                                                if (checkedFileList)
                                                    fileSelectionCheckBox.checked = checkedFileList[index] === "Checked"
                                            }

                                            Connections{
                                                target: window

                                                //new syntax for signal handling (QML 5.15)
                                                function onSelectAll(){
                                                    for(var i = 0; i < checkedFileList.length; i++){
                                                        checkedFileList[i] = "Checked"
                                                    }
                                                    fileSelectionCheckBox.checked = checkedFileList[index] === "Checked"
                                                }

                                                function onDeselectAll(){
                                                    for(var i = 0; i < checkedFileList.length; i++){
                                                        checkedFileList[i] = ""
                                                    }

                                                    fileSelectionCheckBox.checked = checkedFileList[index] === "Checked"
                                                }

                                                function onRefreshComplete(){
                                                    if (checkedFileList)
                                                        fileSelectionCheckBox.checked = checkedFileList[index] === "Checked"
                                                }
                                            }
                                        }
                                    }

                                    TextField{
                                        id: editableName
                                        clip: true
                                        topInset: 0
                                        bottomInset: 0
                                        rightInset: 0
                                        leftInset: 0
                                        text: fileNameExtraction
                                        color: ColorProperties.textColor
                                        font.family: CustomFonts.montserrat
                                        font.weight: Font.DemiBold
                                        Layout.alignment: Qt.AlignHCenter | Qt.AlignTop
                                        Layout.preferredWidth: selectionIndicator.width * .8
                                        Layout.preferredHeight: selectionIndicator.height * .2
                                        horizontalAlignment: text.length < 25 ? Text.AlignHCenter : Text.AlignLeft
                                        
                                        Component.onCompleted: {
                                            //Extract file name
                                            fileNameExtraction = display;
                                            //returns -1 if no match is found
                                            var dotIndex = fileNameExtraction.lastIndexOf(".")
                                            if(dotIndex !== -1)
                                                //display name up UNTIL it reaches "."
                                                fileNameExtraction = fileNameExtraction.substring(0,dotIndex)
                                        }

                                        onEditingFinished:{
                                            if (!FileDataHandler.fileList.includes(display + extensionType))
                                            {
                                                focus = false;
                                                editedFileNameList[index] = text
                                            }
                                        }

                                        font.pixelSize: Math.round((selectionIndicator.height * .2)/3)  //referencing our own height causes a binding loop since it isn't explicitly set
                                        background: Rectangle{
                                            radius: 10
                                            color: "transparent"

                                            Rectangle{
                                                anchors.bottom: parent.bottom
                                                color: hoverHandler.hovered ? Qt.lighter(ColorProperties.baseColor, 2) : Qt.lighter(ColorProperties.baseColor, 1.5)
                                                width: parent.width
                                                height: parent.height * .04
                                                radius: 10
                                            }
                                        }
                                    }
                                }

                                HoverHandler{
                                    id: hoverHandler

                                    onHoveredChanged: {
                                        if(hovered){
                                            fileIconScaleUp.running = true
                                            fileIconScaleDown.running = false
                                        }
                                        else
                                        {
                                            fileIconScaleDown.running = true
                                            fileIconScaleUp.running = false
                                        }
                                    }
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
