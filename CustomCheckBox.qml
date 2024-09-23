import QtQuick
import QtQuick.Layouts
import QtQuick.Controls
import QtQuick.Controls.Material
CheckDelegate{
    id: container

    indicator: Rectangle {
        id: outline
        width: window.width *.02
        height: width
        radius: 3
        color: "transparent"
        border.color: ColorProperties.brandColorBright
        anchors.centerIn: parent
        border.width: 2

         Rectangle {
             id: fillRectangle
            width: parent.width * .5
            height: width
            anchors.centerIn: parent
            radius: 3
            color: ColorProperties.brandColor
            visible: container.checked
         }
    }
    onHoveredChanged: {
        if(hovered)
            infoText = ""
    }
}



