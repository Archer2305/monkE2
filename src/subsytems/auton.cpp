#include "main.h"
#include "auton.hpp"
#include "drive.hpp"
#include "shooter.hpp"
// #include "okapi/impl/device/controllerUtil.hpp"
int route=1; //0 is no roler, 1 is roler
bool LoCK=true;
void updateAuton(){
  
    if(route==1){ 
      //star the flywheel and do roller 
        flywheel.moveVelocity(-480);
        leftDrive.moveVelocity(-25);
        rightDrive.moveVelocity(-25);
        intakeMotor.moveVelocity(600);
        pros::delay(500);
        leftDrive.moveVelocity(0);
        rightDrive.moveVelocity(0);
        intakeMotor.moveVelocity(0);
      //move forward
        leftDrive.moveVelocity(250);
        rightDrive.moveVelocity(600);
        pros::delay(200);
        leftDrive.moveVelocity(0);
        rightDrive.moveVelocity(0);
      //wait for flywheel to spin up
        while(abs(flywheel.getActualVelocity())<480){
          pros::delay(1);
        }
        

       
        // driveForward(1.5); //drive foward 1.5 feet to get closer 
      //shoot first disc
        intakeMotor.moveVelocity(-600);
        pros::delay(100);
        intakeMotor.moveVelocity(0);
      //wait for rebound
        pros::delay(5000);
      //shoot second disc
        intakeMotor.moveVelocity(-600);
        pros::delay(5000);
        intakeMotor.moveVelocity(0);
        flywheel.moveVelocity(0);


  // aim();
  // shoot();
  Lock=true; 
    }else{
    drive->driveToPoint({-2.166_ft,0_ft});
    drive->turnAngle(-90*okapi::degree);
    drive->driveToPoint({0_ft,1_ft});
    drive->turnAngle(-90*okapi::degree);
    drive->driveToPoint({1_ft,-1_ft});
  }
}
void stop(){
  if(LoCK==true){
    rightFront.moveVelocity(0);
rightTop.moveVelocity(0);
rightBottom.moveVelocity(0);
leftFront.moveVelocity(0);
leftTop.moveVelocity(0);
leftBottom.moveVelocity(0);
intakeMotor.moveVelocity(0);
flywheel.moveVelocity(0);
  }
  Lock=false;
}

