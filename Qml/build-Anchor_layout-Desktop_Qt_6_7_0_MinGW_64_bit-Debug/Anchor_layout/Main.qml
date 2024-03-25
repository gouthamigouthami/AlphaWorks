import QtQuick

Window {

    visible:true
    color:"black"
    Rectangle{
        id:background
        width:300;height: 100
        color:"lightblue"
        Rectangle{
            color:"green"
           // y:25
            height:100;//width:50
            // anchors{
            // right: background.right
            // top: background.top

            // }
            anchors.left: background.left
            anchors.right: background.right
        }
    }


}
