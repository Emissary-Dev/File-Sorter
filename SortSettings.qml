import QtQuick
import QtQuick.Layouts
import QtQuick.Controls
import QtQuick.Controls.Material

Rectangle{

    id:settingsBg
    color: ColorProperties.baseColorDark
    Layout.fillWidth: true
    Layout.fillHeight: true
    Layout.maximumHeight: window.height * .2
    Layout.alignment: Qt.AlignBottom
    signal selectAllPressed()
    signal deselectAllPressed()

    GridLayout{
        anchors.fill: parent
        anchors.leftMargin: 20
        anchors.rightMargin: 20
        anchors.topMargin: 10
        anchors.bottomMargin: 10

        rows: 3
        columns: 5
        columnSpacing: 20

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
                color: prefixCheckbox.checked ? ColorProperties.textColor : ColorProperties.textDisabled
            }

            TextField{
                id: prefixTextField

                clip: true
                color: prefixCheckbox.checked ? ColorProperties.textColor : ColorProperties.textDisabled
                font.family: CustomFonts.montserrat
                font.weight: Font.DemiBold
                enabled: prefixCheckbox.checked

                Layout.alignment: Qt.AlignLeft
                Layout.maximumWidth: window.width * .1
                Layout.fillWidth: true
                Layout.fillHeight: true
                Layout.maximumHeight: window.height * .05

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
                color: suffixCheckbox.checked ? ColorProperties.textColor : ColorProperties.textDisabled
            }

            TextField{
                id: suffixText
                clip: true
                enabled: suffixCheckbox.checked
                color:  suffixCheckbox.checked ? ColorProperties.textColor : ColorProperties.textDisabled
                font.family: CustomFonts.montserrat
                font.weight: Font.DemiBold
                Layout.alignment: Qt.AlignLeft
                Layout.maximumWidth: window.width * .1
                Layout.fillWidth: true
                Layout.fillHeight: true
                Layout.maximumHeight: window.height * .05

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
                color: newFolderCheckBox.checked ? ColorProperties.textColor : ColorProperties.textDisabled
            }

            TextField{
                id:  newFolderTextField
                clip: true
                enabled: newFolderCheckBox.checked
                color: newFolderCheckBox.checked ? ColorProperties.textColor : ColorProperties.textDisabled
                font.family: CustomFonts.montserrat
                font.weight: Font.DemiBold
                Layout.alignment: Qt.AlignLeft
                Layout.maximumWidth: window.width * .1
                Layout.fillWidth: true
                Layout.fillHeight: true
                Layout.maximumHeight: window.height * .05

                onEditingFinished:{
                    suffix = text
                    focus = false
                }

                background: Rectangle{
                    radius: 10
                    color: "transparent"

                    Rectangle{
                        anchors.bottom: parent.bottom
                        color: newFolderCheckBox.hovered && newFolderCheckBox.checked ? Qt.lighter(ColorProperties.baseColor, 2) : Qt.lighter(ColorProperties.baseColor, 1.5)
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
                Layout.preferredWidth:  newFolderLayoutText.width
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
                boxWidth: window.width * .02
                boxHeight: boxWidth
                Layout.preferredWidth:  newFolderCheckBox.width

                onHoveredChanged: {
                    if(hovered)
                        infoText = "Add specified name to the beginning of selected files."
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
                Layout.preferredWidth:  newFolderLayoutText.width
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
                Layout.preferredWidth:  newFolderCheckBox.width
                boxWidth: window.width * .02
                boxHeight: boxWidth

                onHoveredChanged: {
                    if(hovered)
                        infoText = "Add specified name to the end of selected files."
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
            id: newFolderLayout
            Layout.row: 2
            Layout.column: 1
            Layout.leftMargin: 10
            Layout.rightMargin: 10
            Layout.alignment: Qt.AlignVCenter | Qt.AlignHCenter

            Text{
                id: newFolderLayoutText
                Layout.preferredWidth:  window.width * .1
                elide: Text.ElideRight
                font.family: CustomFonts.montserrat
                font.weight: Font.Bold
                text:"New folder"
                color: ColorProperties.textColor
            }

            CustomCheckBox{
                id:newFolderCheckBox

                Layout.alignment: Qt.AlignLeft
                Layout.fillHeight: true
                Layout.maximumHeight: window.width * .04
                Layout.preferredWidth:  window.width * .05
                boxWidth: window.width * .02
                boxHeight: boxWidth

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
            color: ColorProperties.baseColorMidBright
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
                    settingsBg.selectAllPressed()
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
                    settingsBg.deselectAllPressed()
                }
            }
        }

        ColumnLayout{
            Layout.column: 4
            Layout.alignment: Qt.AlignVCenter | Qt.AlignHCenter
            Layout.rowSpan: 3

            Button{
                id: saveBtn

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
                    font.pixelSize: Math.round(saveBtn.height/3)
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
                if(newFolderCheckBox.checked && newFolderTextField.text !== ""){
                    FileDataHandler.placeInNewFolder = true
                    FileDataHandler.newFolderName = newFolderTextField.text
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
                            editedFileNameList[i] = prefix +  editedFileNameList[i]
                            FileDataHandler.editFile(currentFolderPath, i, editedFileNameList[i])
                        }
                        else if (suffixCheckbox.checked && !prefixCheckbox.checked){
                            editedFileNameList[i] =  editedFileNameList[i] + suffix
                            FileDataHandler.editFile(currentFolderPath, i, editedFileNameList[i])
                        }
                        else if (prefixCheckbox.checked && suffixCheckbox.checked)
                        {
                            editedFileNameList[i] = prefix +  editedFileNameList[i]
                            editedFileNameList[i] =  editedFileNameList[i] + suffix
                            FileDataHandler.editFile(currentFolderPath, i, editedFileNameList[i])
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
                infoText = "Save attempt failed."
            }
        }
    }

    function refreshAll(){
        FileDataHandler.placeInNewFolder = false
        newFolderTextField.text = ""
        prefixTextField.text = ""
        suffixText.text = ""
        prefix = ""
        suffix = ""
        refreshFileLists();
    }
}
