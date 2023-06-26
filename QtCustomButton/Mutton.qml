import QtQuick 2.0
import QtQuick.Controls 2.15

Button {
    id: mutton
    width: 200
    height: 200
    background: Rectangle {
        color: "blue"
        radius: 10
    }

    contentItem: Item {
        anchors.centerIn: parent

        Rectangle {
            width: parent.width * 0.6
            height: parent.height * 0.6
            color: "white"
            anchors.verticalCenter: parent.verticalCenter
            anchors.horizontalCenter: parent.horizontalCenter

            Rectangle {
                width: parent.width * 0.8
                height: parent.height * 0.4
                color: "gray"
                anchors.top: parent.top
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Rectangle {
                width: parent.width * 0.4
                height: parent.height * 0.2
                color: "red"
                anchors.bottom: parent.bottom
                anchors.horizontalCenter: parent.horizontalCenter
            }
        }
    }
}
