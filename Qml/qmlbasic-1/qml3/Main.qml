import QtQuick

Window {
    id:root
    width: 400
    height: 400
    visible: true
    color: "grey"
    Rectangle{
        id:blue
        color: "lightblue"
        x:50
        y:50
        width:root.width-100
        height: root.height/2-50

    Rectangle{

        x:50; y:50
        width:50;height:50
        color:"white"

    }

    }

    Rectangle{
        color: "green"
        x:50
        y:blue.x+blue.height
        width:300
        height: 150
               Rectangle{
            x:100
            y:50
            width:150
            height:50
            color: "blue"
            }
    }
}
