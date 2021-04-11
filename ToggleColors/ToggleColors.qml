import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

Item {
id: root
width: 90
height: 150

Rectangle {
    id: rect
    property bool isBlue: true
    width: 100
    height: 100
    color: isBlue ? "blue" : "red" //checks if isBlue is true or false
    border.color: "white"
    border.width: 5
    Text {
        font.pixelSize: 15
        anchors.centerIn: parent
        text: rect.isBlue ? "blue" : "red"
        color: "white"
    }
}
Button{
    anchors.top:rect.bottom
    text: "Click to Toggle"
        onClicked: {
            rect.isBlue = !rect.isBlue
        }
}
}

