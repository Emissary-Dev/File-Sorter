import QtQuick
import QtQuick.Layouts
import QtQuick.Controls
import QtQuick.Controls.Material
CheckDelegate{
    id: container
    indicator: Rectangle {
        id: outline
        width: parent.width *.4
        height: width
         radius: 3
         color: "transparent"
         border.color: ColorProperties.brandColorBright
          anchors.centerIn: parent
        border.width: 2

         Rectangle {
             id: checkRectangle
            width: parent.width * .5
            height: width
            anchors.centerIn: parent
            radius: 3
            color: ColorProperties.brandColor
            visible: container.checked
         }
    }

    // background: Rectangle{
    //     anchors.fill: outline
    //     visible: container.checked || container.highlighted
    // }

    onClicked:{
        forceActiveFocus()
        if(checkState === Qt.Checked)
            return Qt.Unchecked
        else
            return Qt.Checked
    }

    onHoveredChanged: {
        if(hovered)
            infoText = ""
    }
}



