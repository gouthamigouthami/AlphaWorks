import QtQuick

// Window {

//     visible: true
//    Rectangle{
//        width: 400
//        height: 400
//        color:"lightblue"

//    }
//    Rectangle{
//        y:150;width:100;height:100
//        color: "green"
//        NumberAnimation on x{
//        from:0;to:150
//        duration:1000
//    }
// }
// }
// Window {

//     visible: true
//    Rectangle{
//        width: 400
//        height: 400
//        color:"lightblue"


//    Rectangle{
//        id:rect
//        x:300;y:300
//        width:100;height:100
//    }
//    MouseArea{
//      anchors.fill:parent
//      onClicked: {
//          anim.to = (rect.x == 150 ? 0: 150)
//          anim.runnig = true
//      }
//    }

//        NumberAnimation{
//            id:anim
//            target: rect
//            properties:"x,y"
//            to:150;duration:1000
//      //running: ture
//    }
// }
// }
Window{
    visible: true

Rectangle {
    width: 400; height: 400;
    color: "lightblue"

    Rectangle {
        id: rectangle1
        x: 150; y: 150
        width: 100
        height: 100
        color: "green"
    }

    ColorAnimation {
        target: rectangle1
        property: "color"
        from: Qt.rgba(0,0.5,0,1)
        to: Qt.rgba(1,1,1,1)
        duration: 1000
        running: true
    }
}
}
