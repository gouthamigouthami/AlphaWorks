import QtQuick 2.0
import QtQuick.Controls
import QtQuick.Layouts 1.1


Window {
      visible: true
    Item {
        width: 600
        height: 400
        GridLayout{
           anchors.fill:parent
           anchors.margins: 5
           columns: 3
           Button{
              Layout.fillWidth: true
              text:"one"
           }
           Button{
              Layout.fillWidth: true
              text:"two"
           }
           Button{
              Layout.fillWidth: true
              text:"Three"
           }
           Button{
              Layout.fillWidth: true
              text:"Four"
           }
           Button{
               Layout.row: 1
               Layout.column: 2

              Layout.fillWidth: true
              text:"Five"
           }
           Label{
               text:"File"
           }
           TextField{
               Layout.columnSpan: 2
               Layout.fillWidth: true
               placeholderText: "enter filename"
           }
           Label{
               text: "Comment"
           }
           TextArea{
               Layout.columnSpan: 2
               Layout.rowSpan: 2
               Layout.fillWidth: true
               Layout.fillHeight: true

           }
           Button{
               Layout.row: 6
               Layout.column: 0
               text: "send"
           }

        }

      }

}
