import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("QML Signals and Slots")

    /* Using the Connections Object
     * Establish a connection with the application core object
     * */
    Connections {
        target: appCore // Specify the target to connect
        /* Declare and implement the function as a parameter
         * object and with a name similar to the name of the signal
         * The difference is that we add on at the beginning and then write
         * capitalized
         * */
        onSendToQml: {
            labelCount.text = count // Set the counter to the text label
        }
    }


    Label {
        id: labelCount
        text: "0"

        anchors.bottom: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottomMargin: 15
    }

    Button {
        text: qsTr("Increase counter")
        onClicked: appCore.receiveFromQml() // Slot call

        anchors.top: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter
    }
}
