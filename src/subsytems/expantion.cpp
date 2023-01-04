#include "main.h"
using namespace okapi;
bool Toggle=false;
bool Lock=true;
//ool TOGGLE=false;
// bool LOCK=true;
pros::ADIDigitalOut leftPiston ('B');
// pros::ADIDigitalOut rightPiston ('H');
//int tick=0;
void updateExpantion(){
    
    if(controller.getDigital(ControllerDigital::up) == 1){
        
          if(Lock){
          Toggle=!Toggle;
        
        Lock=false;
          leftPiston.set_value(Toggle);    
        }
    }
        if(controller.getDigital(ControllerDigital::up)==0){
          Lock=true;
        }

}