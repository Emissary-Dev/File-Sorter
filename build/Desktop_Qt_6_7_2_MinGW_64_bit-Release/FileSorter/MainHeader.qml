import QtQuick
import QtQuick.Layouts
import QtQuick.Controls
import QtQuick.Controls.Material
Rectangle{
    property alias fileExtensionField: fileExtensionField
    color: ColorProperties.baseColor
    Layout.fillWidth: true
    Layout.fillHeight: true
    Layout.maximumHeight: window.height * .2
    Layout.alignment: Qt.AlignTop
    MouseArea{
        anchors.fill: parent
        acceptedButtons: Qt.LeftButton | Qt.RightButton
        onClicked:{
            forceActiveFocus()
        }
    }

    RowLayout{
        id: headerRow
        width: header.width * .4
        height: header.height
        anchors.left: parent.left
        anchors.leftMargin: headerRow.width * .15
        spacing: 20

        Button{
            id: filebutton
            Layout.alignment: Qt.AlignRight | Qt.AlignVCenter
            Layout.preferredWidth: headerRow.width * .2
            Layout.preferredHeight: headerRow.height * .4
            checkable: true


            background: Rectangle{
                color: "transparent"
                //10% of the height is rounded
                radius: height * .1
                Image{
                    anchors.fill: parent
                    fillMode: Image.PreserveAspectFit
                    source: folderOpen ? "Icons/folder-open-outline.svg": "Icons/folder-outline.svg"
                }

            }
            onHoveredChanged: {
                if(hovered)
                    infoText = "Browse and select a folder directory."
            }

            //Open file explorer
            onClicked: {
                forceActiveFocus()
                folderOpen = true
                FileDataHandler.setFilters()
                folderDialog.open()
            }
        }


        TextField{
            id: searchbarField
            readOnly: true
            text: currentFolderPathAsLocalFile !== "" ? currentFolderPathAsLocalFile : "Click folder to browse for a path"
            font.pixelSize: Math.round((headerRow.height * .3)/3) //referencing our own height causes a binding loop since it isn't explicitly set
            font.family: CustomFonts.montserrat
            font.weight: Font.DemiBold
            Layout.alignment: Qt.AlignHCenter
            color: currentFolderPathAsLocalFile !== "" ? "#828BB0" : ColorProperties.baseColorBright

            background: Rectangle{
                color: Qt.lighter(ColorProperties.baseColor, 1.5)
                radius: 10
            }
            Layout.preferredHeight: headerRow.height * .3
            Layout.preferredWidth: headerRow.width * .8
            clip: true

            focusPolicy: Qt.NoFocus

            onDisplayTextChanged: {
                if (window.currentFolderPath !== ""){

                }
            }


            onHoveredChanged: {
                if(hovered)
                    infoText = "Folder directory."
            }


        }
    }

    RowLayout{
        id: fileExtensionRow
        anchors.right: parent.right
        anchors.verticalCenter: parent.verticalCenter
        anchors.rightMargin: headerRow.width * .15
        spacing: 40
        Text {
            id: extensionTitle
            font.family: CustomFonts.montserrat
            font.weight: Font.DemiBold
            text: qsTr("Extension Type")
            elide: Text.ElideLeft
            font.pixelSize: Math.round((headerRow.height * .3)/3)
            color: "#ffffff"

        }

        TextField{
            id: fileExtensionField
            font.pixelSize: Math.round((headerRow.height * .3)/4) //referencing our own height causes a binding loop since it isn't explicitly set
            Layout.alignment: Qt.AlignRight
            color: ColorProperties.textColor
            font.capitalization: Font.AllLowercase
            font.family: CustomFonts.montserrat
            font.weight: Font.DemiBold
            Layout.preferredHeight: headerRow.height * .3
            Layout.preferredWidth: headerRow.width * .2
            clip: true
            horizontalAlignment: Text.AlignHCenter

            background: Rectangle{
                color: Qt.lighter(ColorProperties.baseColor, 1.5)
                radius: 10
            }
            onHoveredChanged: {
                if(hovered)
                    infoText = "Type the file extension you want to search for (e.g., 'txt' or 'jpg'.)"
            }

            onFocusChanged: {
                console.log(sortSettings)
                sortSettings.refreshAll()
            }

            onEditingFinished: {
                focus = false
                //first character is a dot
                if (text.charAt(0) === "."){

                    //Check if text contains only 1 dot
                    if(text.split('.').length === 2){
                        FileDataHandler.extensionType = text
                        sortSettings.refreshAll()
                    }
                }


            }

            Component.onCompleted: {
                text = extensionType
            }

        }
    }

    Rectangle{
        anchors.bottom: parent.bottom
        color: Qt.lighter(ColorProperties.baseColor, 1.5)
        width: parent.width
        height: parent.height * .02
        radius: 10
    }
}
