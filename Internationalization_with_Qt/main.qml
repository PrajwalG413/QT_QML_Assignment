import QtQuick 2.6
import QtQuick.Controls 2.15
import QtQuick.Controls 1.5
import QtQuick.Layouts 1.15

ApplicationWindow {
    id: applicationWindow
    visible: true
    width: 640
    height: 180
    color: "lightblue"

    Label {
        id: translations
        height: 50
        anchors {
            top: parent.top
            left: parent.left
            right: parent.horizontalCenter
            margins: 10
        }
    }

    RowLayout {
        ExclusiveGroup { id: language }//grouping all RadioButtons
        id: radiobutton
        Text {
            id: lang
            text: qsTr("Language")
        }
        anchors {
            top: translations.bottom
            left: parent.horizontalCenter
            right: parent.right
            margins: 10
        }
        RadioButton {
            checked: true
            text: qsTr("en_US")
            exclusiveGroup: language
            onClicked: qmlTranslator.setTranslation(text)
        }
        RadioButton {
            text: qsTr("hd_HD")
            exclusiveGroup: language
            onClicked: qmlTranslator.setTranslation(text)
        }
        RadioButton {
            text: qsTr("kd_KD")
            exclusiveGroup: language
            onClicked: qmlTranslator.setTranslation(text)
        }
        RadioButton {
            text: qsTr("ja_JA")
            exclusiveGroup: language
            onClicked: qmlTranslator.setTranslation(text)
        }
    }

    Label {
        id: labelText
        wrapMode: Text.Wrap
        anchors {
            top: radiobutton.bottom
            left: parent.left
            right: parent.right
            margins: 10
        }
    }

    Connections {
        target: qmlTranslator
        onLanguageChanged: {
            retranslateUi()
        }
    }

    //function which writes the translations into text of all specified Components
    function retranslateUi() {
        applicationWindow.title = qsTr("Internationalization with Qt")
        translations.text = qsTr("Welcome to simple example of Internationalization with Qt.")
        lang.text = qsTr("Language")
        labelText.text = qsTr("The QTranslator class provides internationalization" +
                              "support for text output.An object of this class contains " +
                              "a set of translations from a source language to a target language. " +
                              "QTranslator provides functions to look up translations in a translation file. " +
                              "Translation files are created using Qt Linguist.")
    }

    Component.onCompleted: {
        retranslateUi();
    }
}
