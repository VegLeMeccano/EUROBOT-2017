#ifndef ArmSys_H
#define ArmSys_H

#include "Utils/Period.h"
#include "Arduino.h"
#include <Servo.h>
#include "pins.h"
#include "Const.h"

#define ARM_PERIOD 100  // periode MAE



// ETAT MAE

// etat asserv


// TRANSITION MAE
// AUTO

//MANUEL



class ArmSys
{
    private:

        Servo servo_claw_flipper;
        Servo servo_claw_pitch_2;
        Servo servo_claw_pitch_1;
        Servo servo_claw_yaw;
        Servo servo_claw_slider;


    public:
        //constructeur
        ArmSys();

        void get_flipper_vertical();
        void get_flipper_horizontal();

        void get_slider_left();
        void get_slider_centre();
        void get_slider_right();

        void get_yaw_left_total();
        void get_yaw_left_diagonal();
        void get_yaw_front();
        void get_yaw_right_diagonal();
        void get_yaw_right_total();

        void get_pitch_folded();
        void get_pitch_frontal_catch_AR();
        void get_pitch_frontal_catch_AV();
        void get_pitch_upper_catch_TOP();
        void get_pitch_upper_catch_DOWN();
        void get_pitch_upper_stock();


};


#endif
