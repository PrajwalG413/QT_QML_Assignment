import QtQuick 2.0

ListView {
    width: 120; height: 110
    required model

    delegate: Rectangle {
        required property string name
        //Qml engine will check if the name of a required property matches
        //that of a model role.If so, that property will be bound to the
        //corresponding value from the model.

        height: 25
        width: 100
        Text { text: parent.name }
    }
}

