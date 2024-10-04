import QtQuick
import QtQuick.Layouts
import QtQuick.Controls
import QtQuick.Controls.Material
CheckDelegate{
    id: container
    property real boxWidth: window.width * .02
    property real boxHeight: boxWidth

    indicator: Rectangle {
        id: outline
        width: boxWidth
        height: boxHeight
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



