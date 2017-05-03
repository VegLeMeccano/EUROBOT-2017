#ifndef STOCKER_H
#define STOCKER_H

#include "Utils/Period.h"
#include "Arduino.h"
#include <Servo.h>
#include "pins.h"
#include "Const.h"
#include "Utils/Switch.h"


#define STO_PERIOD 100  // periode MAE
#define STO_TIME_OUT_MAX 10000
#define STO_TIME_OUT_CLOSING 1500

// ETAT MAE
#define STO_STATE_OPEN 0
#define STO_STATE_RECON_1 1
#define STO_STATE_CLOSING_INTER 2
#define STO_STATE_RECON_2 3
#define STO_STATE_STOCK 4

// TRANSITION MAE
#define STO_TRIGGER_TIME_OUT 0
#define STO_TRIGGER_STOCK_AUTO 1
#define STO_TRIGGER_STOCK_MANUAL 2
#define STO_TRIGGER_DETECTED 3
#define STO_TRIGGER_UNDETECTED 4
#define STO_TRIGGER_STOCK_RELEASE 5

class Stocker
{
    public:
        Stocker(String nom_,
                int pin_servo_stocker_, int pwm_ser_open_, int pwm_ser_lock_,
                int pin_ir_stocker_, int seuil_ir_);
        void run();
        void trigger_manuel();
        void trigger_auto();
        void trigger_release();


        void debug();
        bool get_presence_Module();

    private:

        int pin_ir_stocker;
        int pin_servo_stocker;

        int pwm_ser_lock;
        int pwm_ser_open;

        int seuil_ir;

        String nom;
        bool presence_module;



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
        Servo servo_stoker;
        //IR

        // cmd servo
        void set_servo_lock();
        void set_servo_open();

};

#endif // STOCKER_H
