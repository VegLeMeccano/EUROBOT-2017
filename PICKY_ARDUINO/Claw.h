#ifndef Claw_H
#define Claw_H

#include "Utils/Period.h"
#include "Arduino.h"
#include <Servo.h>
#include "pins.h"
#include "Const.h"
#include "Utils/Switch.h"

#include "ColorSensor.h"
#include "ClawMotor.h"

#define CLW_PERIOD 50  // periode MAE


#define CLW_TIC_360_deg 1300 // periode MAE

#define CLW_OFFSET_ANGLE 0//-13 //deg

// ETAT MAE
#define CLW_STATE_FOLDED 0
#define CLW_STATE_OPEN_WIDE 1
#define CLW_STATE_OPEN_MEDIUM 2
#define CLW_STATE_RECON_1 3
#define CLW_STATE_CLOSING_INTER 4
#define CLW_STATE_RECON_2 5
#define CLW_STATE_STOCK 6
#define CLW_STATE_COLLECTING_DATA 7
#define CLW_STATE_CARTOGRAPHY 8
#define CLW_STATE_ASSERV_STOCK 9

// etat asserv


// TRANSITION MAE
// AUTO
#define CLW_TRIGGER_TIME_OUT 0
#define CLW_TRIGGER_ASS_FINI 1
#define CLW_TRIGGER_IR_DETECTED 2
#define CLW_TRIGGER_IR_UNDETECTED 3
#define CLW_TRIGGER_DATA_COLLECTED 4
#define CLW_TRIGGER_TARGET_COMPUTED 5
#define CLW_TRIGGER_CANCEL 6
#define CLW_TRIGGER_COLOR_NOT_FOUNDED 13

//MANUEL
#define CLW_TRIGGER_OPEN_WIDE 7
#define CLW_TRIGGER_OPEN_MEDIUM 8
#define CLW_TRIGGER_CATCH_AUTO 9
#define CLW_TRIGGER_CATCH_MANUAL 10
#define CLW_TRIGGER_RELEASE 11
#define CLW_TRIGGER_FOLD 12

#define CLW_DATA_NB_POINT 16
#define CLW_DATA_ANGLE_FIRST_POINT 0
#define CLW_DATA_ANGLE_FINAL_POINT 360


class Claw
{
    private:

        // MAE
        int state;
        long t_over;
        bool time_out_on;
        Period period_run;

        void set_time_out(int dt_);
        void reset_time_out();
        bool is_time_out();

        void in_state_func();
        void trigger(int transition);
        int actualState();

        int cpt;
        double tab_data_angle[CLW_DATA_NB_POINT];
        int tab_data_color[CLW_DATA_NB_POINT];

        //double tab_cartography_angle[2*CLW_DATA_NB_POINT];
        //int tab_cartography_color[2*CLW_DATA_NB_POINT];

        // actionneur
        Servo servo_claw_squeeze;
        ColorSensor colorSensor;
        ClawMotor clawMotor;


        // cmd servo
        void squeeze_position_folded();
        void squeeze_position_catch();
        void squeeze_position_open_medium();
        void squeeze_position_open_wide();


        bool asserv_required;
        int color_asserv;

        bool presence_module;

        //void cartography_build_up();

        void cartography_display();
        double cartography_get_target(); // couleur connu -> lecture du barycentre (filtre sur couleur
        void data_display();

        bool color_found;
        double target_angle;







    public:
        //constructeur
        Claw();
        void run();
        void debug();

        // setteur
        void set_color_blue();
        void set_color_yellow();

        void set_color_asserv_ON();
        void set_color_asserv_OFF();

        // declencheur MAE
        void trigger_open_wide(); //C2
        void trigger_open_medium(); //C1
        void trigger_close_folded(); //C6
        void trigger_catch_auto(); //C4
        void trigger_catch_manuel(); //C3
        void trigger_release(); //C5

        ColorSensor* get_colorSensor();
        ClawMotor* get_clawMotor();

        bool get_presence_module();
        void display_color();

};


#endif
