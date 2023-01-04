// #include "main.h"
// #include "auton.hpp"
// #include "drive.hpp"
// #include "shooter.hpp"
// // #include "okapi/impl/device/controllerUtil.hpp"
// int route=1; //0 is no roler, 1 is roler
// bool LoCK=true;
// void updateAuton(){
  
//     if(route==1){ 
//       //star the flywheel and do roller 
//         flywheel.moveVelocity(-600);
//         leftDrive.moveVelocity(-25);
//         rightDrive.moveVelocity(-25);
//         intakeMotor.moveVelocity(600);
//         pros::delay(500);
//         leftDrive.moveVelocity(0);
//         rightDrive.moveVelocity(0);
//         intakeMotor.moveVelocity(0);
        

       
//         // driveForward(1.5); //drive foward 1.5 feet to get closer 
//         while(LoCK==true){
//          if(flywheel.getActualVelocity() <= 360){ 
//         flywheel.moveVoltage(-12000);

//       }else{
//         flywheel.moveVelocity(-370);
//         intakeMotor.moveVelocity(-600);
//         pros::delay(10);
//         intakeMotor.moveVelocity(0);
//         LoCK=false;
//       }
//         }
//   // aim();
//   // shoot();
//   Lock=true; 
//     }else{
//     drive->driveToPoint({-2.166_ft,0_ft});
//     drive->turnAngle(-90*okapi::degree);
//     drive->driveToPoint({0_ft,1_ft});
//     drive->turnAngle(-90*okapi::degree);
//     drive->driveToPoint({1_ft,-1_ft});
//   }
// }
// void stop(){
//   if(LoCK==true){
//     rightFront.moveVelocity(0);
// rightTop.moveVelocity(0);
// rightBottom.moveVelocity(0);
// leftFront.moveVelocity(0);
// leftTop.moveVelocity(0);
// leftBottom.moveVelocity(0);
// intakeMotor.moveVelocity(0);
// flywheel.moveVelocity(0);
//   }
//   Lock=false;
// }

