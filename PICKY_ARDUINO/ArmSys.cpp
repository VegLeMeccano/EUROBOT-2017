#include "ArmSys.h"


/**************************************************************************
                CONSTRUCTOR
**************************************************************************/
ArmSys::ArmSys()
{
    servo_claw_flipper.attach(PIN_CLW_SER_FLIPPER);
    servo_claw_pitch_2.attach(PIN_CLW_SER_PITCH2);
    servo_claw_pitch_1.attach(PIN_CLW_SER_PITCH1);
    servo_claw_yaw.attach(PIN_CLW_SER_YAW);
    servo_claw_slider.attach(PIN_CLW_SER_SLIDER);



    /** INIT */

    Serial.println("[ArmSys][init][Begin]");
    /*
    get_yaw_left_diagonal();
    //delay(300);
    get_slider_right();
    //delay(300);
    get_flipper_vertical();
    get_pitch_folded();
    //delay(300);
    delay(300);
    get_yaw_left_total();*/

    get_yaw_front();
    get_slider_centre();
    get_flipper_vertical();
    get_pitch_folded();


    Serial.println("[ArmSys][init][Done]");
}



/**************************************************************************
                FLIPPER
**************************************************************************/
void ArmSys::get_flipper_vertical()
{
    servo_claw_flipper.writeMicroseconds(ARM_PWM_SER_FLIPPER_VERTICAL);
}
void ArmSys::get_flipper_horizontal()
{
    servo_claw_flipper.writeMicroseconds(ARM_PWM_SER_FLIPPER_HORIZONTAL);
}



/**************************************************************************
                SLIDER
**************************************************************************/
void ArmSys::get_slider_left()
{
    servo_claw_slider.writeMicroseconds(ARM_PWM_SER_SLIDER_LEFT);
}
void ArmSys::get_slider_centre()
{
    servo_claw_slider.writeMicroseconds(ARM_PWM_SER_SLIDER_CENTRE);
}
void ArmSys::get_slider_right()
{
    servo_claw_slider.writeMicroseconds(ARM_PWM_SER_SLIDER_RIGHT);
}


/**************************************************************************
                YAW
**************************************************************************/
void ArmSys::get_yaw_left_total()
{
    servo_claw_yaw.writeMicroseconds(ARM_PWM_SER_YAW_LEFT_TOTAL);
}
void ArmSys::get_yaw_left_diagonal()
{
    servo_claw_yaw.writeMicroseconds(ARM_PWM_SER_YAW_LEFT_DIAGONAL);
}
void ArmSys::get_yaw_front()
{
    servo_claw_yaw.writeMicroseconds(ARM_PWM_SER_YAW_FRONT);
}
void ArmSys::get_yaw_right_diagonal()
{
    servo_claw_yaw.writeMicroseconds(ARM_PWM_SER_YAW_RIGHT_DIAGONAL);
}
void ArmSys::get_yaw_right_total()
{
    servo_claw_yaw.writeMicroseconds(ARM_PWM_SER_YAW_RIGHT_TOTAL);
}



/**************************************************************************
                PITCH
**************************************************************************/
void ArmSys::get_pitch_folded()
{
    servo_claw_pitch_1.writeMicroseconds(ARM_PWM_SER_PITCH_1_FOLDED);
    servo_claw_pitch_2.writeMicroseconds(ARM_PWM_SER_PITCH_2_FOLDED);
}
void ArmSys::get_pitch_frontal_catch_AR()
{
    servo_claw_pitch_1.writeMicroseconds(ARM_PWM_SER_PITCH_1_FRONTAL_CATCH_AR);
    servo_claw_pitch_2.writeMicroseconds(ARM_PWM_SER_PITCH_2_FRONTAL_CATCH_AR);
}
void ArmSys::get_pitch_frontal_catch_AV()
{
    servo_claw_pitch_1.writeMicroseconds(ARM_PWM_SER_PITCH_1_FRONTAL_CATCH_AV);
    servo_claw_pitch_2.writeMicroseconds(ARM_PWM_SER_PITCH_2_FRONTAL_CATCH_AV);
}
void ArmSys::get_pitch_upper_catch_TOP()
{
    servo_claw_pitch_1.writeMicroseconds(ARM_PWM_SER_PITCH_1_UPPER_CATCH_TOP);
    servo_claw_pitch_2.writeMicroseconds(ARM_PWM_SER_PITCH_2_UPPER_CATCH_TOP);
}
void ArmSys::get_pitch_upper_catch_DOWN()
{
    servo_claw_pitch_1.writeMicroseconds(ARM_PWM_SER_PITCH_1_UPPER_CATCH_DOWN);
    servo_claw_pitch_2.writeMicroseconds(ARM_PWM_SER_PITCH_2_UPPER_CATCH_DOWN);
}
void ArmSys::get_pitch_upper_stock()
{
    servo_claw_pitch_1.writeMicroseconds(ARM_PWM_SER_PITCH_1_UPPER_STOCK);
    servo_claw_pitch_2.writeMicroseconds(ARM_PWM_SER_PITCH_2_UPPER_STOCK);
}
