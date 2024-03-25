import QtQuick

Window {
    visible:true
   // Rotation:90

   Rectangle{
       width: 400;height: 400
      rotation:45
      scale:1.5

       gradient:Gradient{
           GradientStop{
         position:1.0;color:"green"
       }
           GradientStop{
         position:0.5;color:"yellow"
       }
           GradientStop{
         position:0.0;color:"blue"
       }
       }

   }
}
