import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12
//import Example 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("QML Signals and Slots")


//uncomment to work using qmlRegisterType() to use cpp class as custom Component
//    AppCore{
//        id:appCore
//    }

    Label {
        id: labelCount
        text: appCore.counter

        anchors.bottom: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottomMargin: 15
    }

    Button {
        text: qsTr("Increase counter")
        onClicked: ++appCore.counter//now through QPROPERTY it reads, writes and also notifies counter value.

        anchors.top: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter
    }
}
