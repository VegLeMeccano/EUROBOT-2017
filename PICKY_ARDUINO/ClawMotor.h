#ifndef ClawMotor_H
#define ClawMotor_H

#include "Utils/Period.h"
#include "Arduino.h"
#include "pins.h"
#include "Const.h"
#include "Utils/Switch.h"
#include <Servo.h>
#include "interrupts.h"


#define CMO_PERIOD 10 // periode P(ID) -> tout ou rien


#define CMO_TIC_360_deg 1265
#define CMO_ERROR_MIN_DEG 3


// ETAT MAE
#define CMO_STATE_ASSERV 0

#define CMO_CMD_MAX 255
#define CMO_CMD_SABER_STOP 1500
#define CMO_CMD_SABER_MAX 400
#define CMO_CMD_SABER_KP 26//30//25//28//25 // 30 po mal


// etat asserv
class ClawMotor
{
    private:

        Period period_run;

        int state_asserv;
        int cmd_motor;
        bool asserv_ON;

        int cpt_near;
        int cpt_near_max;

        Servo servo_saber;


        // haut niveau
        double angular_target; // angle
        double angular_current; // angle




        void motor_stop();
        void motor_rotation_Trigo(int cmd);
        void motor_rotation_Horaire(int cmd);




        //void motor_reverse();

        long tic_last;
        long tic_new;
        long tic_total;

        void reset_tic_odo();
        void angular_update();
        void angular_reset();
        void angular_set(double angle_);


        bool is_error_near();
        double get_error();


    public:
        //constructeur
        ClawMotor();
        void run();
        void debug();

        void motor_cmd(int cmd_);
        void set_asserv(double angular_target_);
        void set_asserv_propre(double angular_target_);

        void new_prise(); // reset odo
        bool get_assFini();
};


#endif
