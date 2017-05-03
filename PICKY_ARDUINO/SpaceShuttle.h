#ifndef SpaceShuttle_H
#define SpaceShuttle_H

#include "Utils/Period.h"
#include "Arduino.h"
#include <Servo.h>
#include "pins.h"
#include "Const.h"
#include "Utils/Switch.h"

#define SHU_PERIOD 100  // periode MAE
#define SHU_TIME_UNLOCKED 1000 // temps d'ouverture du launcheur


// ETAT MAE
#define SHU_STATE_LOCKED 0
#define SHU_STATE_ARMED 1
#define SHU_STATE_CONNECTED 2
#define SHU_STATE_LAUNCH 3

// TRANSITION MAE
#define SHU_TRIGGER_TIME_OUT 0
#define SHU_TRIGGER_ARMED 1
#define SHU_TRIGGER_CONNECTED 2
#define SHU_TRIGGER_LAUNCH 3


class SpaceShuttle
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


        // actionneur
        Servo servo_spaceShuttle;
        Switch switch_lock;
        Switch switch_L;
        Switch switch_R;

        // ref des pins
        int pin_servo_spaceShuttle;
        int pin_switch_lock;
        int pin_switch_L;
        int pin_switch_R;

        // cmd servo
        void set_lock();
        void set_free();




    public:
        //constructeur
        SpaceShuttle(int pin_servo_spaceShuttle_, int pin_switch_lock_, int pin_switch_L_, int pin_switch_R_);
        void run();
        void trigger_launch();

        bool is_locked();
        bool is_armed();
        void debug();
};


#endif
