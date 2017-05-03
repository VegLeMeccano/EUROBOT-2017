#ifndef IO_H
#define IO_H

#include "Utils/Period.h"
#include "Arduino.h"
#include <Servo.h>
#include "interrupts.h"
#include "pins.h"
#include "Const.h"
#include "Utils/Switch.h"
//#include "Utils/SwitchAnalog.h"
#include "ColorSensor.h"
#include "SpaceShuttle.h"
#include "Stocker.h"
#include "Claw.h"
#include "ArmSys.h"



/****************************************************
   IO
*****************************************************/

class IO
{
    private:
        //ColorSensor colorSensor;
        SpaceShuttle spaceShuttle;

        Stocker stocker_L;
        Stocker stocker_C;
        Stocker stocker_R;

        Claw claw;
        ArmSys armsys;


    public:
        IO();
        void run();

        SpaceShuttle* get_spaceShuttle();
        Stocker* get_stocker_L();
        Stocker* get_stocker_C();
        Stocker* get_stocker_R();

        Claw* get_claw();
        //ColorSensor* get_colorSensor();
        ArmSys* get_armSys();

};

#endif
