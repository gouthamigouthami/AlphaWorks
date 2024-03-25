import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    Rectangle {
        width: 150; height: 300; color: "white"

        ListModel {
            id: nameModel
            ListElement { name: "Alice"; team: "Crypto" }
            ListElement { name: "Bob"; team: "Crypto" }
            ListElement { name: "Jane"; team: "QA" }
            ListElement { name: "Victor"; team: "QA" }
            ListElement { name: "Wendy"; team: "Graphics" }
        }

        Component {
            id: nameDelegate
            Text {
                readonly property ListView __lv: ListView.view
                width: parent.width
                text: model.name;
                font.pixelSize: 24

                MouseArea {
                    anchors.fill: parent
                    onClicked: __lv.currentIndex = index
                }
            }
        }
        //--> slide
        ListView {
            model: nameModel
            delegate: nameDelegate
            //--> hide
            anchors.fill: parent
            focus: true
            clip: true
            //<-- hide
            highlight: Rectangle {//--> collapse
                color: "lightblue"
                width: parent.width
            }//<-- collapse
            section.property: "team"
            section.criteria: ViewSection.FullString

            section.delegate: Rectangle {
                color: "#b0dfb0"
                width: parent.width
                implicitHeight: text.implicitHeight + 4
                Text {
                    id: text
                    anchors.centerIn: parent
                    font.pixelSize: 16
                    font.bold: false
                    text: section
                }
            }
        }
        //<-- slide
    }
}
