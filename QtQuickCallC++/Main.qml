import QtQuick
import QtQuick.Window
import QtQuick.Controls 2.2
import com.example 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    MyClass {
        id: myObject
    }

    Button {
        id: control
        text: "Click me"
        anchors.centerIn: parent
        contentItem: Text {
            text: control.text
            font: control.font
            opacity: enabled ? 1.0 : 0.3
            color: control.down ? "#17a81a" : "#21be2b"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            elide: Text.ElideRight
        }

        background: Rectangle {
            implicitWidth: 100
            implicitHeight: 40
            opacity: enabled ? 1 : 0.3
            border.color: control.down ? "#17a81a" : "#21be2b"
            border.width: 1
            radius: 2
        }
        onClicked: myObject.myFunction("Hello from QML")
    }
}
