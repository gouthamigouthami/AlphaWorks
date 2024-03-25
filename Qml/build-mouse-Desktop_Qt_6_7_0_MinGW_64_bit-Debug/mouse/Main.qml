//import QtQuick

// Window {

//     visible: true

//     Rectangle
//     {
//         width: 400
//         height: 300
//         color:"lightblue"
//         Text {
//             // anchors.horizontalCenter: parent.horizontalCenter
//             // y:40
//             // height: parent.height/2
//             anchors.centerIn: parent
//             text:"press me";font.pixelSize: 48
//             color:MouseArea.pressed?"green":"black"
//             MouseArea{
//                 id:mouseArea
//                 anchors.fill: parent
//             }

//             // text: "press me"
//             // font.pixelSize: 48
//             // MouseArea{
//             //     anchors.fill: parent
//             //     onPressed: parent.color="green"
//             //     onReleased: parent.color="black"
//             // }
//         }
//         Text{
//             anchors.horizontalCenter: parent.horizontalCenter
//             y:parent.height/2 * 40
//             height: parent.height/2

//             text: "Click me"

//             font.pixelSize: 48
//             MouseArea{
//                 anchors.fill: parent
//                 onClicked:partent.font.bold=!parent.font.bold
//             }
//         }
//     }

// }
import QtQuick
Window {

    visible: true

    Rectangle
    {
        width: 400
        height: 200
        color:"lightblue"
        Text {

            anchors.centerIn: parent
            text:"press me";font.pixelSize: 48
            color:MouseArea.pressed?"green":"black"
            MouseArea{
                id:mouseArea
                anchors.fill: parent
            }
}

        }
}
