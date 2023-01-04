#include "main.h"
#include "shooter.hpp"
bool toggle=false;
bool lock=false;
Motor flywheel(10,false,AbstractMotor::gearset::blue,AbstractMotor::encoderUnits::degrees);
void updateShooter(){

if(controller.getDigital(ControllerDigital::L2) == 1){
   if(!lock){
        toggle=!toggle;
      }
      lock=true;
        
       if(flywheel.getActualVelocity() <= 360) 
        flywheel.moveVoltage(-12000);
      }else{
        flywheel.moveVelocity(-370);
      }
      if(controller.getDigital(ControllerDigital::L2)==0){
        lock=false;
      }
      if(toggle==false){
         flywheel.moveVelocity(0);
      }
  
if(controller.getDigital(ControllerDigital::L1) == 1){
    flywheel.moveVoltage(12000);
  } 
}



 /*
 
 */

   

       