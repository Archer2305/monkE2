#include "main.h"
#include "shooter.hpp"
bool toggle=false;
bool lock=true;
Motor flywheel(10,false,AbstractMotor::gearset::blue,AbstractMotor::encoderUnits::degrees);
void updateShooter(){

  if(controller.getDigital(ControllerDigital::L2) == 1){
    if(lock){
      toggle = !toggle;
      lock = false;
    }
  }
  if(toggle){
    flywheel.moveVelocity(-360);
  }else{
    flywheel.moveVelocity(0);
  }
  if(controller.getDigital(ControllerDigital::L2) == 0){
    lock = true;
  }
}
 /*
 
 */

   

       