#include "IO.h"


/****************************************************
   IO : mettre les différents actionneur here!
*****************************************************/
IO::IO():
    spaceShuttle(PIN_SHU_SER, PIN_SHU_SWI_LOCK, PIN_SHU_SWI_L, PIN_SHU_SWI_R),
    stocker_L("L", PIN_STO_SER_L, STO_PWM_SER_L_OPEN, STO_PWM_SER_L_LOCK, PIN_STO_IR_L, STO_SEUIL_IR_L),
    stocker_C("C", PIN_STO_SER_C, STO_PWM_SER_C_OPEN, STO_PWM_SER_C_LOCK, PIN_STO_IR_C, STO_SEUIL_IR_C),
    stocker_R("R", PIN_STO_SER_R, STO_PWM_SER_R_OPEN, STO_PWM_SER_R_LOCK, PIN_STO_IR_R, STO_SEUIL_IR_R),
    claw(),
    armsys()
{
    Serial.println("[IO][init]");
}


void IO::run()
{
    //colorSensor.run();
    spaceShuttle.run();
    stocker_L.run();
    stocker_C.run();
    stocker_R.run();
    claw.run();


}




SpaceShuttle* IO::get_spaceShuttle(){
    return &spaceShuttle;
}


Stocker* IO::get_stocker_L(){
    return &stocker_L;
}


Stocker* IO::get_stocker_C(){
    return &stocker_C;
}


Stocker* IO::get_stocker_R(){
    return &stocker_R;
}

/*
ColorSensor* IO::get_colorSensor(){
    return &colorSensor;
}
*/

Claw* IO::get_claw(){
    return &claw;
}


ArmSys* IO::get_armSys()
{
    return &armsys;
}
