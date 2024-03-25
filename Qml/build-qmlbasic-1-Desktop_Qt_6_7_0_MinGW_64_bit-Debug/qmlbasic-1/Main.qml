import QtQuick 2.0

Window {
    width: 640
    height: 480
    visible: true
    //color: "lightblue"
    title: qsTr("Hello World")
    Rectangle
    {
x:100;y:50
height:100
width: height * 2
color:"lightblue"
    }
    Rectangle
    {
x:100;y:50
height:100
width: height * 2
color:"green"
    }


}


