import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    ListView{
        width: 200;height: 200
        snapMode: ListView.SnapOneItem
        orientation: ListView.Horizontal
        model: ListModel{
            ListElement{name: "one";color : "red"}
            ListElement{name: "Two";color : "green"}
            ListElement{name: "Three" ;color : "blue"}

        }
        delegate: Rectangle{
            color: model.color
            width: ListView.view.width
            height: ListView.view.height
            Text{
                anchors.centerIn: parent
                text: model.name
            }
        }
    }

}
