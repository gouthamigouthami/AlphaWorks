import QtQuick

Window {

    width: 400
    height: 200
    visible: true
    //title: qsTr("Hello World")
    // Rectangle{
    //     x:100;  y:50
    //     width:height*2;height:100
    //     color:"lightblue"
    // }
    TextInput{
        id:textElement
        x:50;y:25
        text: "Qt Quick"
        font.family: "Helvetica"; font.pixelSize: 50
    }
    Rectangle{
        x:50; y:75;height:5
        width:textElement.width
        color:"green"

    }
}
