import QtQuick

Window {

    visible: true
   Flickable{
      id:flick
      width:400;height:400
      contentWidth: 2000
      contentHeight: 2000
      PinchArea{
          anchors.fill: parent
          pinch.target: img
          pinch.maximumScale: 1.0
          pinch.minimumScale: 0.1
          pinch.dragAxis:Pinch.XAndYAxis
      }

      Image{
          width:flick.contentWidth
          height: flick.contentHeight
          source:"file:///C:/Users/gkashabo/Desktop/Git/AlphaWorks/Qml/qml4/gouthami_photo.jpg"

      }
   }
}
