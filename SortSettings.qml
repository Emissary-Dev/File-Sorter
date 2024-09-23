import QtQuick
import QtQuick.Layouts
import QtQuick.Controls
import QtQuick.Controls.Material

Rectangle{

    id:bottomConfigBg
    color: ColorProperties.baseColorDark
    Layout.fillWidth: true
    Layout.fillHeight: true
    Layout.maximumHeight: window.height * .2
    Layout.alignment: Qt.AlignBottom
    signal selectAllPressed()
    signal deselectAllPressed()
    property int checkBoxLayoutSpacing: window.width * .05

    GridLayout{
        anchors.fill: parent
        anchors.leftMargin: 20
        anchors.rightMargin: 20
        anchors.topMargin: 10
        anchors.bottomMargin: 10

        columnSpacing: 20
        rows: 3
        columns: 5

        RowLayout{
            spacing: 10
            Layout.row: 0
            Layout.column: 0
            Layout.preferredWidth:  window.width * .1
            Layout.alignment: Qt.AlignVCenter | Qt.AlignLeft
            Text{
                text: "Prefix"
                font.family: CustomFonts.montserrat
                font.weight: Font.Bold
                color: ColorProperties.textColor
            }
            TextField{

                id: prefixText
                color: ColorProperties.textColor
                font.family: CustomFonts.montserrat
                font.weight: Font.DemiBold
                Layout.alignment: Qt.AlignLeft
                Layout.maximumWidth: window.width * .1
                Layout.fillWidth: true
                Layout.fillHeight: true
                Layout.maximumHeight: window.height * .05
                clip: true
                enabled: prefixCheckbox.checked

                onEditingFinished:{
                    prefix = text
                    focus = false
                }

                background: Rectangle{
                    radius: 10
                    color: "transparent"

                    Rectangle{
                        anchors.bottom: parent.bottom
                        color: prefixHoverHandler.hovered && prefixCheckbox.checked ? Qt.lighter(ColorProperties.baseColor, 2) : Qt.lighter(ColorProperties.baseColor, 1.5)
                        width: parent.width
                        height: parent.height * .04
                        radius: 10
                    }

                }


                onHoveredChanged: {
                    if(hovered)
                        infoText = "Prefix text."
                }


            }

            HoverHandler{
                id: prefixHoverHandler
            }
        }

        RowLayout{

            Layout.row: 1
            Layout.column: 0
            spacing: 10
            Layout.preferredWidth:  window.width * .1
            Layout.alignment: Qt.AlignVCenter | Qt.AlignLeft
            Text{
                font.family: CustomFonts.montserrat
                font.weight: Font.Bold
                text:"Suffix"
                color: ColorProperties.textColor
            }

            TextField{
                id: suffixText
                color: ColorProperties.textColor
                font.family: CustomFonts.montserrat
                font.weight: Font.DemiBold
                Layout.alignment: Qt.AlignLeft
                Layout.maximumWidth: window.width * .1
                Layout.fillWidth: true
                Layout.fillHeight: true
                Layout.maximumHeight: window.height * .05
                clip: true
                enabled: suffixCheckbox.checked

                onEditingFinished:{
                    suffix = text
                    focus = false
                }
                background: Rectangle{
                    radius: 10
                    color: "transparent"

                    Rectangle{
                        anchors.bottom: parent.bottom
                        color: suffixHoverHandler.hovered && suffixCheckbox.checked ? Qt.lighter(ColorProperties.baseColor, 2) : Qt.lighter(ColorProperties.baseColor, 1.5)
                        width: parent.width
                        height: parent.height * .04
                        radius: 10
                    }

                }

                onHoveredChanged: {
                    if(hovered)
                        infoText = "Suffix text."
                }
            }

            HoverHandler{
                id: suffixHoverHandler
            }
        }
        RowLayout{

            Layout.row: 2
            Layout.column: 0
            spacing: 10
            Layout.preferredWidth:  window.width * .1
            Layout.alignment: Qt.AlignVCenter | Qt.AlignLeft
            Text{
                font.family: CustomFonts.montserrat
                font.weight: Font.Bold
                text:"Folder Name"
                color: ColorProperties.textColor
            }

            TextField{
                id:  newFolderText
                color: ColorProperties.textColor
                font.family: CustomFonts.montserrat
                font.weight: Font.DemiBold
                Layout.alignment: Qt.AlignLeft
                Layout.maximumWidth: window.width * .1
                Layout.fillWidth: true
                Layout.fillHeight: true
                Layout.maximumHeight: window.height * .05
                clip: true
                enabled: placeInNewFolderOptionCheckBox.checked

                onEditingFinished:{
                    suffix = text
                    focus = false
                }
                background: Rectangle{
                    radius: 10
                    color: "transparent"

                    Rectangle{
                        anchors.bottom: parent.bottom
                        color: placeInNewFolderOptionCheckBox.hovered && placeInNewFolderOptionCheckBox.checked ? Qt.lighter(ColorProperties.baseColor, 2) : Qt.lighter(ColorProperties.baseColor, 1.5)
                        width: parent.width
                        height: parent.height * .04
                        radius: 10
                    }

                }

                onHoveredChanged: {
                    if(hovered)
                        infoText = "New folder name."
                }
            }

            HoverHandler{
                id: newFolderHoverHandler
            }
        }


        RowLayout{

            Layout.row: 0
            Layout.column: 1
            Layout.leftMargin: 10
            Layout.rightMargin: 10
            Layout.alignment: Qt.AlignVCenter | Qt.AlignHCenter
            Text{
                Layout.preferredWidth:  placeInNewFolderOptionLayoutText.width
                font.family: CustomFonts.montserrat
                font.weight: Font.Bold
                text: "Enable Prefix"
                color: ColorProperties.textColor
                elide: Text.ElideRight
            }
            CustomCheckBox{
                id:prefixCheckbox
                Layout.alignment: Qt.AlignLeft
                Layout.fillHeight: true
                Layout.maximumHeight: window.width * .04
                //  Layout.maximumWidth: window.width * .05
                Layout.preferredWidth:  placeInNewFolderOptionCheckBox.width
                onHoveredChanged: {
                    if(hovered)
                    {
                        infoText = "Add specified name to the beginning of selected files."

                    }

                }

                onClicked:{
                    forceActiveFocus()
                    if(checkState === Qt.Checked)
                        return Qt.Unchecked
                    else
                        return Qt.Checked
                }

            }
        }

        RowLayout{
            Layout.row: 1
            Layout.column: 1
            Layout.leftMargin: 10
            Layout.rightMargin: 10
            Layout.alignment: Qt.AlignVCenter | Qt.AlignHCenter
            Text{
                Layout.preferredWidth:  placeInNewFolderOptionLayoutText.width

                font.family: CustomFonts.montserrat
                font.weight: Font.Bold
                text:"Enable Suffix"
                color: ColorProperties.textColor
                elide: Text.ElideRight
            }

            CustomCheckBox{

                id:suffixCheckbox
                Layout.alignment: Qt.AlignLeft
                Layout.fillHeight: true
                Layout.maximumHeight: window.width * .04
                // Layout.maximumWidth: window.width * .05
                Layout.preferredWidth:  placeInNewFolderOptionCheckBox.width
                onHoveredChanged: {
                    if(hovered)
                    {
                        infoText = "Add specified name to the end of selected files."

                    }

                }
                onClicked:{
                    forceActiveFocus()
                    if(checkState === Qt.Checked)
                        return Qt.Unchecked
                    else
                        return Qt.Checked
                }

            }
        }

        RowLayout{
            id: placeInNewFolderOptionLayout
            Layout.row: 2
            Layout.column: 1
            Layout.leftMargin: 10
            Layout.rightMargin: 10
            Layout.alignment: Qt.AlignVCenter | Qt.AlignHCenter
            Text{
                id: placeInNewFolderOptionLayoutText
                Layout.preferredWidth:  window.width * .1
                elide: Text.ElideRight
                font.family: CustomFonts.montserrat
                font.weight: Font.Bold
                text:"New folder"
                color: ColorProperties.textColor


            }

            CustomCheckBox{

                id:placeInNewFolderOptionCheckBox
                Layout.alignment: Qt.AlignLeft
                Layout.fillHeight: true
                Layout.maximumHeight: window.width * .04
                //Layout.maximumWidth: window.width * .05
                Layout.preferredWidth:  window.width * .05

                onHoveredChanged: {
                    if(hovered)
                    {
                        infoText = "Place selected files in a new folder on save."

                    }

                }
                onClicked:{
                    forceActiveFocus()
                    if(checkState === Qt.Checked)
                        return Qt.Unchecked
                    else
                        return Qt.Checked
                }

            }
        }

        Rectangle{

            id:infoBox
            color: "#3E4563"
            radius: 10
            Layout.row: 0
            Layout.rowSpan: 3
            Layout.column: 2
            Layout.fillWidth: true
            Layout.fillHeight: true
            Layout.margins: 10
            Layout.maximumHeight: window.height * .3
            Layout.maximumWidth:  window.width * .6
            Layout.alignment: Qt.AlignVCenter | Qt.AlignHCenter
            // border.width: Math.max(width * .01, .06)
            // border.color: ColorProperties.brandColor


            Text{
                id:info
                anchors.fill: parent
                anchors.margins: window.height * .02
                color:"#ffffff"// ColorProperties.textColor
                text: infoText
                font.family: CustomFonts.montserrat
                font.weight: Font.ExtraLight
                font.pixelSize: Math.round(infoBox.height/7)
                wrapMode: Text.Wrap
                width: infoBox.width
                clip: true


            }
        }
        ColumnLayout{
            Layout.column: 3
            Layout.alignment: Qt.AlignVCenter | Qt.AlignHCenter
            Layout.rowSpan: 3

            Button{



                id: selectAllbtn
                Layout.alignment: Qt.AlignHCenter
                Layout.maximumWidth: window.width * .1
                Layout.preferredWidth:  window.width * .1
                Layout.fillHeight: true
                Layout.maximumHeight: window.width * .04

                Text{
                    anchors.centerIn: parent
                    color: ColorProperties.textColor
                    font.pixelSize: Math.round(selectAllbtn.height/3)
                    text: "Select All"

                    font.family: CustomFonts.montserrat
                    font.weight: Font.DemiBold
                }


                background: Rectangle{
                    id: selectAllButtonBg
                    color: "transparent"
                    border.color: ColorProperties.brandColor
                    border.width: Math.max(width * .01, .08)
                    radius: 30
                }
                onHoveredChanged: {
                    if(hovered)
                    {
                        infoText = "Select all files"
                        selectAllButtonBg.border.color = ColorProperties.brandColorBright

                    }
                    else
                    {
                        selectAllButtonBg.border.color = ColorProperties.brandColor
                    }
                }
                onClicked:{
                    forceActiveFocus()
                    bottomConfigBg.selectAllPressed()


                }

            }


            Button{



                id: deselectAllBtn
                Layout.alignment: Qt.AlignHCenter
                Layout.maximumWidth: window.width * .1
                Layout.preferredWidth:  window.width * .1
                Layout.fillHeight: true
                Layout.maximumHeight: window.width * .04
                clip: true
                Text{
                    anchors.centerIn: parent
                    color: ColorProperties.textColor
                    font.pixelSize: Math.round(deselectAllBtn.height/3)
                    text: "Deselect All"

                    font.family: CustomFonts.montserrat
                    font.weight: Font.DemiBold
                }


                background: Rectangle{
                    id: deselectAllButtonBg
                    color: "transparent"
                    border.color: ColorProperties.brandColor
                    border.width: Math.max(width * .01, .08)
                    radius: 30
                }
                onHoveredChanged: {
                    if(hovered)
                    {
                        infoText = "Deselect all files"
                        deselectAllButtonBg.border.color = ColorProperties.brandColorBright

                    }
                    else
                    {
                        deselectAllButtonBg.border.color = ColorProperties.brandColor
                    }
                }
                onClicked:{
                    forceActiveFocus()
                    bottomConfigBg.deselectAllPressed()


                }
            }

        }

        ColumnLayout{
            Layout.column: 4
            Layout.alignment: Qt.AlignVCenter | Qt.AlignHCenter
            Layout.rowSpan: 3




            Button{
                id: btn2

                background: Rectangle{
                    id:saveButtonBg
                    color: "transparent"
                    border.color: ColorProperties.brandColor
                    border.width: Math.max(width * .01, .08)
                    radius: 30
                }

                Layout.alignment: Qt.AlignLeft
                Layout.maximumWidth: window.width * .1
                Layout.fillWidth: true
                Layout.fillHeight: true
                Layout.maximumHeight: window.width * .04
                clip: true

                Text{
                    anchors.centerIn: parent
                    color: ColorProperties.textColor
                    font.pixelSize: Math.round(btn2.height/3)
                    text: "Save"
                    font.family: CustomFonts.montserrat
                    font.weight: Font.DemiBold
                }

                onHoveredChanged: {
                    if(hovered)
                    {
                        infoText = "Save and rename the corresponding files in File Explorer."
                        saveButtonBg.border.color = ColorProperties.brandColorBright

                    }
                    else
                    {
                        saveButtonBg.border.color = ColorProperties.brandColor
                    }
                }

                onClicked: {
                    forceActiveFocus()
                    editFiles()
                }
            }
        }
    }

    function editFiles(){
        var uncheckedCount = 0;
        var allUnchecked = false

        if (editedFileNameList){

            //Check for which files are currently checked
            for(var a = 0; a < editedFileNameList.length; a++){
                if (checkedFileList[a] === "")
                    uncheckedCount++
            }

            if (uncheckedCount === editedFileNameList.length)
                allUnchecked = true


            if (FileDataHandler.fileList.length !== 0 && editedFileNameList.length !== 0 && !allUnchecked){

                //Create new folder
                if(placeInNewFolderOptionCheckBox.checked && newFolderText.text !== ""){
                    FileDataHandler.placeInNewFolder = true
                    FileDataHandler.newFolderName = newFolderText.text
                }

                for(var i = 0; i < editedFileNameList.length; i++){

                    //contains an actual file name (or the other 2 conditions) and is checked
                    if((editedFileNameList[i] !== "" || prefixCheckbox.checked || suffixCheckbox.checked)  && checkedFileList[i] === "Checked")
                    {

                        //if for some reason editedFileList is empty, which is possible, add the original file name
                        if(editedFileNameList[i] === "" )
                            editedFileNameList[i] = FileDataHandler.fileNameList[i]

                        //Check which one of the 3 conditions are true (if none are true, we'll use the foundational parameters
                        if (prefixCheckbox.checked && !suffixCheckbox.checked){
                            FileDataHandler.editFile(currentFolderPath, i, editedFileNameList[i], prefix)
                        }
                        else if (suffixCheckbox.checked && !prefixCheckbox.checked){
                            FileDataHandler.editFile(currentFolderPath, i, editedFileNameList[i], "", suffix)
                        }
                        else if (prefixCheckbox.checked && suffixCheckbox.checked)
                        {
                            FileDataHandler.editFile(currentFolderPath, i, editedFileNameList[i], prefix, suffix)
                        }
                        else {
                            //Foundational parameters
                            FileDataHandler.editFile(currentFolderPath, i, editedFileNameList[i])
                        }
                    }
                }

                //Save finished
                FileDataHandler.showDirectoryInExplorer(window.currentFolderPath)
                infoText = "Finished."
                refreshAll();
            }
            else{
                console.log("Save attempt failed!", FileDataHandler.fileList.length, editedFileNameList.length,  !allUnchecked)
            }
        }
    }

    function refreshAll(){
        FileDataHandler.placeInNewFolder = false
        newFolderText.text = ""
        prefixText.text = ""
        suffixText.text = ""
        prefix = ""
        suffix = ""
        refreshFileLists();
    }
}
