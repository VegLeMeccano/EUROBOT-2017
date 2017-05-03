#include "SpaceShuttle.h"


/***********************************************************************
                CONSTRUCTOR
***********************************************************************/
SpaceShuttle::SpaceShuttle(int pin_servo_spaceShuttle_, int pin_switch_lock_, int pin_switch_L_, int pin_switch_R_):
    pin_servo_spaceShuttle(pin_servo_spaceShuttle_),
    pin_switch_lock(pin_switch_lock_),
    pin_switch_L(pin_switch_L_),
    pin_switch_R(pin_switch_R_),
    switch_lock(pin_switch_lock),
    switch_L(pin_switch_L),
    switch_R(pin_switch_R),
    period_run(SHU_PERIOD),
    state(SHU_STATE_LOCKED),
    time_out_on(false)
{
    servo_spaceShuttle.attach(pin_servo_spaceShuttle);
    set_lock();
    Serial.println("[SpaceShuttle][init]");
    in_state_func();
}


/***********************************************************************
                FONCTIONS SIMPLE : SERVOS
***********************************************************************/
void SpaceShuttle::set_lock(){
    servo_spaceShuttle.writeMicroseconds(SHU_PWM_SER_LOCK);
}


void SpaceShuttle::set_free(){
    servo_spaceShuttle.writeMicroseconds(SHU_PWM_SER_LAUNCH);
}


/***********************************************************************
                DEBUG
***********************************************************************/
void SpaceShuttle::debug()
{
    Serial.println("[SpaceShuttle][DEBUG] ");
    Serial.print("\t[STATE] -> ");
    Serial.println(state);

    Serial.print("\t[switch][LOCK] -> ");
    Serial.println(switch_lock.is_on());

    Serial.print("\t[switch][L] -> ");
    Serial.println(switch_L.is_on());

    Serial.print("\t[switch][R] -> ");
    Serial.println(switch_R.is_on());
}




/***********************************************************************
                TRIGGER MANU
***********************************************************************/

void SpaceShuttle::trigger_launch(){
    trigger(SHU_TRIGGER_LAUNCH);
}


/***********************************************************************
                MAE : TRIGGER
***********************************************************************/
void SpaceShuttle::trigger(int transition)
{
    Serial.print("[SpaceShuttle][TRIGGER] -> [#");
    Serial.print(transition);
    Serial.print("]");


    switch(transition)
    {

        case SHU_TRIGGER_TIME_OUT:
            Serial.println("[AUTO][SHU_TRIGGER_TIME_OUT]");
        break;
        case SHU_TRIGGER_ARMED:
            Serial.println("[MANU][SHU_TRIGGER_ARMED]");
        break;
        case SHU_TRIGGER_CONNECTED:
            Serial.println("[MANU][SHU_TRIGGER_CONNECTED]");
        break;
        case SHU_TRIGGER_LAUNCH:
            Serial.println("[MANU][SHU_TRIGGER_LAUNCH]");
        break;


    }
/*
    // add things here for MAE
    if (transition == SHU_TRIGGER_ARMED)
    {
         Serial.println("[ARMED]");
         //Serial.println(transition);
         //trigger_to_be = transition;
    }

    if (transition == SHU_TRIGGER_CONNECTED)
    {
         Serial.println("[CONNECTED]");
        // Serial.println(transition);
         //trigger_to_be = transition;
    }

    if (transition == SHU_TRIGGER_LAUNCH)
    {
         Serial.println("[LAUNCH]");
         //Serial.println(transition);
         //trigger_to_be = transition;
    }

    if (transition == SHU_TRIGGER_TIME_OUT )
    {
         Serial.println("[TIME OUT]");
         //Serial.println(transition);
         //trigger_to_be = transition;
    }


   Serial.print("[SpaceShuttle][CURRENT STATE] -> ");
   Serial.println(state);
*/
   int old_state;
   old_state = state;
   switch(state)
    {
        case SHU_STATE_LOCKED :
           if (transition == SHU_TRIGGER_LAUNCH)
           {
                state = SHU_STATE_LAUNCH;
                Serial.println("# SHU_NOT_ARMED");
           }
           if (transition == SHU_TRIGGER_ARMED)
           {
                state = SHU_STATE_ARMED;
                Serial.println("# SHU_ARMED");
           }
           break;


        case SHU_STATE_LAUNCH :
            if (transition == SHU_TRIGGER_TIME_OUT)
            {
                state = SHU_STATE_LOCKED;
                Serial.println("# SHU_RETRACTION");
            }
            break;

        case SHU_STATE_ARMED :
            //Serial.println("ETAT_BALLE_DROITE_RELEVE");
            if (transition == SHU_TRIGGER_LAUNCH)
            {
                state = SHU_STATE_LAUNCH;
                Serial.println("# SHU_NOT_CONNECTED");
            }
            if (transition == SHU_TRIGGER_CONNECTED)
            {
                state = SHU_STATE_CONNECTED;
                Serial.println("# SHU_CONNECTED");
            }
            break;

        case SHU_STATE_CONNECTED :
            //Serial.println("ETAT_BALLE_DROITE_RELEVE");
            if (transition == SHU_STATE_LAUNCH)
            {
                state = SHU_STATE_LAUNCH;
                Serial.println("# SHU_LAUNCHED");
            }
            break;
    }

   if (old_state != state)
    {
        /*
        Serial.print("[SpaceShuttle][NEW STATE] -> [");
        Serial.print(state);
        Serial.println("]");
        */

        reset_time_out();
        in_state_func();
    }
}
int SpaceShuttle::actualState()
{
    return state;
}

/***********************************************************************
                RUN
***********************************************************************/
void SpaceShuttle::run(){
    if (period_run.is_over())
    {
        period_run.reset();

        // time out
        if (is_time_out())
        {
            trigger(SHU_TRIGGER_TIME_OUT);
        }

        // armement
        if(state == SHU_STATE_LOCKED)
        {
            if(switch_lock.is_on())
            {
                trigger(SHU_TRIGGER_ARMED);
            }
        }

        if(state == SHU_STATE_ARMED)
        {
            if(switch_L.is_on() || switch_R.is_on())
            {
                trigger(SHU_TRIGGER_CONNECTED);
            }
        }

    }
}

/***********************************************************************
                TIME
***********************************************************************/
void SpaceShuttle::set_time_out(int dt_)
{
    t_over = millis() + dt_;
    time_out_on = true;
    //trigger_to_be = trigger;
    Serial.print("[SpaceShuttle][TIME OUT] -> [set time out : ");
    Serial.print(dt_);
    Serial.println(" ms]");
}

void SpaceShuttle::reset_time_out()
{
    time_out_on = false;
}


bool SpaceShuttle::is_time_out()
{
   if (time_out_on && t_over < millis())
   {
     time_out_on = false;
     return true;
   }
   return false;
}


/***********************************************************************
                MAE : STATE FUNCTION
***********************************************************************/
void SpaceShuttle::in_state_func()
{
    switch (state)
    {
        case SHU_STATE_LOCKED :
            Serial.print("[SpaceShuttle][STATE] -> ");
            Serial.println("[SHU_STATE_LOCKED]");
            set_lock();
            break;

        case SHU_STATE_LAUNCH :
            Serial.print("[SpaceShuttle][STATE] -> ");
            Serial.println("[SHU_STATE_LAUNCH]");
            set_free();
            set_time_out(SHU_TIME_UNLOCKED);
            break;

        case SHU_STATE_ARMED :
            Serial.print("[SpaceShuttle][STATE] -> ");
            Serial.println("[SHU_STATE_ARMED]");
            break;

        case SHU_STATE_CONNECTED :
            Serial.print("[SpaceShuttle][STATE] -> ");
            Serial.println("[SHU_STATE_CONNECTED]");
            break;

    }
}
