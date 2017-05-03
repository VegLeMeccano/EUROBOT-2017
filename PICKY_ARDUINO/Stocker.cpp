#include "Stocker.h"



/***********************************************************************
                CONSTRUCTOR
***********************************************************************/
Stocker::Stocker(String nom_,
                 int pin_servo_stocker_, int pwm_ser_open_, int pwm_ser_lock_,
                 int pin_ir_stocker_,int seuil_ir_):
    pin_servo_stocker(pin_servo_stocker_),
    pin_ir_stocker(pin_ir_stocker_),
    period_run(STO_PERIOD),
    state(STO_STATE_OPEN),
    time_out_on(false),
    nom(nom_),
    pwm_ser_lock(pwm_ser_lock_),
    pwm_ser_open(pwm_ser_open_),
    presence_module(false),
    seuil_ir(seuil_ir_)
{
    servo_stoker.attach(pin_servo_stocker);
    Serial.print("[Stoker][");
    Serial.print(nom);
    Serial.println("][init]");
    in_state_func();
}


/***********************************************************************
                CMD SIMPLE
***********************************************************************/
/** locking servo **/
void Stocker::set_servo_lock(){
    servo_stoker.writeMicroseconds(pwm_ser_lock);
}

/** ouverture servo **/
void Stocker::set_servo_open(){
    servo_stoker.writeMicroseconds(pwm_ser_open);
}

/***********************************************************************
                CHECK
***********************************************************************/
bool Stocker::get_presence_Module()
{
    return presence_module;
}


/***********************************************************************
                TRIGGER MANU
***********************************************************************/
void Stocker::trigger_manuel(){
    trigger(STO_TRIGGER_STOCK_MANUAL);
}

void Stocker::trigger_auto(){
    trigger(STO_TRIGGER_STOCK_AUTO);
}

void Stocker::trigger_release(){
    trigger(STO_TRIGGER_STOCK_RELEASE);
}



/***********************************************************************
                DEBUG
***********************************************************************/
void Stocker::debug()
{
    Serial.print("[Stoker][");
    Serial.print(nom);
    Serial.println("][DEBUG]");


    Serial.print("\t[STATE] -> ");
    Serial.println(state);

    Serial.print("\t[IR] -> \t");
    Serial.print(analogRead(pin_ir_stocker));
    Serial.print(" / ");
    Serial.print(seuil_ir);

    if (analogRead(pin_ir_stocker)>seuil_ir){
        Serial.println(" -> MODULE_PRESENT");
    }
    else{
        Serial.println(" -> MODULE_ABSENT");
    }



}



/***********************************************************************
                MAE : TRIGGER
***********************************************************************/
void Stocker::trigger(int transition)
{

   Serial.print("[Stoker][TRIGGER] -> [#");
    Serial.print(transition);
    Serial.print("]");

    switch(transition)
    {

        case STO_TRIGGER_TIME_OUT:
            Serial.println("[AUTO][STO_TRIGGER_TIME_OUT]");
        break;
        case STO_TRIGGER_STOCK_AUTO:
            Serial.println("[MANU][STO_TRIGGER_STOCK_AUTO]");
        break;
        case STO_TRIGGER_STOCK_MANUAL:
            Serial.println("[MANU][STO_TRIGGER_STOCK_MANUAL]");
        break;
        case STO_TRIGGER_DETECTED:
            Serial.println("[AUTO][STO_TRIGGER_DETECTED]");
        break;
        case STO_TRIGGER_UNDETECTED:
            Serial.println("[AUTO][STO_TRIGGER_UNDETECTED]");
        break;
        case STO_TRIGGER_STOCK_RELEASE:
            Serial.println("[AUTO][STO_TRIGGER_STOCK_RELEASE]");
        break;

    }


/*
    // add things here for MAE
    if (transition == STO_TRIGGER_STOCK_AUTO || transition == STO_TRIGGER_STOCK_MANUAL || transition == STO_TRIGGER_STOCK_RELEASE)
    {
        Serial.print("[Stoker][");
        Serial.print(nom);
        Serial.print("][TRIGGER][FORCED] : ");
        Serial.println(transition);
        //trigger_to_be = transition;
    }

    if (transition == STO_TRIGGER_DETECTED)
    {
        Serial.print("[Stoker][");
        Serial.print(nom);
        Serial.print("][TRIGGER][DETECTION] : ");
        Serial.println(transition);
         //trigger_to_be = transition;
    }

    if (transition == STO_TRIGGER_TIME_OUT )
    {
        Serial.print("[Stoker][");
        Serial.print(nom);
        Serial.print("][TRIGGER][TIME OUT] : ");
        Serial.println(transition);
         //trigger_to_be = transition;
    }
    Serial.print("[Stoker][");
    Serial.print(nom);
    Serial.print("][STATE] -> ");
    Serial.println(state);
*/
    int old_state;
    old_state = state;

    switch(state)
    {
        case STO_STATE_OPEN :
           if (transition == STO_TRIGGER_STOCK_MANUAL)
           {
                state = STO_STATE_CLOSING_INTER;
                //Serial.print("#STOCK_MANUEL_");
                //Serial.println(nom);
           }
           if (transition == STO_TRIGGER_STOCK_AUTO)
           {
                state = STO_STATE_RECON_1;
                //Serial.print("#STOCK_AUTO_");
                //Serial.println(nom);
           }
           break;


        case STO_STATE_RECON_1 :
            if (transition == STO_TRIGGER_TIME_OUT)
            {
                state = STO_STATE_OPEN;
                Serial.print("# STO_");
                Serial.print(nom);
                Serial.println("_GIVE_UP");
            }
            if (transition == STO_TRIGGER_DETECTED)
            {
                state = STO_STATE_CLOSING_INTER;
                //Serial.print("#STOCK_ABANDON_");
                //Serial.println(nom);
            }
            break;

        case STO_STATE_CLOSING_INTER :
            //Serial.println("ETAT_BALLE_DROITE_RELEVE");
            if (transition == STO_TRIGGER_TIME_OUT)
            {
                state = STO_STATE_RECON_2;
            }
            break;

        case STO_STATE_RECON_2 :
            //Serial.println("ETAT_BALLE_DROITE_RELEVE");
            if (transition == STO_TRIGGER_DETECTED)
            {
                state = STO_STATE_STOCK;
                Serial.print("# STO_");
                Serial.print(nom);
                Serial.println("_STOCKED");
                presence_module = true;
            }
            if (transition == STO_TRIGGER_UNDETECTED)
            {
                state = STO_STATE_OPEN;
                Serial.print("# STO_");
                Serial.print(nom);
                Serial.println("_FAIL");
            }
            break;

        case STO_STATE_STOCK :
            //Serial.println("ETAT_BALLE_DROITE_RELEVE");
            if (transition == STO_TRIGGER_STOCK_RELEASE)
            {
                state = STO_STATE_OPEN;
                Serial.print("# STO_");
                Serial.print(nom);
                Serial.println("_RELEASE");
                presence_module = false;
            }
            break;
    }

   if (old_state != state)
    {
    /*
    Serial.print("[Stoker][");
    Serial.print(nom);
    Serial.print("][STATE] -> ");
    Serial.println(state);
    */

    reset_time_out();
    in_state_func();
    }
}
int Stocker::actualState()
{
    return state;
}


/***********************************************************************
                RUN
***********************************************************************/
void Stocker::run(){
    if (period_run.is_over())
    {
        period_run.reset();

        // time out
        if (is_time_out())
        {
            trigger(STO_TRIGGER_TIME_OUT);
        }

        // Ir detection
        if(state == STO_STATE_RECON_1 )
        {
            if(analogRead(pin_ir_stocker)>seuil_ir)
            {
                trigger(STO_TRIGGER_DETECTED);
            }
            // sinon le time out prend le dessus env 10s

        }

        // Ir detection
        if(state == STO_STATE_RECON_2)
        {
            if(analogRead(pin_ir_stocker)>seuil_ir)
            {
                trigger(STO_TRIGGER_DETECTED);
            }
            else{
                trigger(STO_TRIGGER_UNDETECTED);
            }


        }


    }
}


/***********************************************************************
                TIME
***********************************************************************/
void Stocker::set_time_out(int dt_)
{
    t_over = millis() + dt_;
    time_out_on = true;
    //trigger_to_be = trigger;
    Serial.print("[Stoker][");
    Serial.print(nom);
    Serial.print("][TIME OUT] -> [set time out : ");
    Serial.print(dt_);
    Serial.println(" ms]");
    //Serial.println(trigger);
}

void Stocker::reset_time_out()
{
    time_out_on = false;
}


bool Stocker::is_time_out()
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
void Stocker::in_state_func()
{
    switch (state)
    {
        case STO_STATE_OPEN :
            set_servo_open();
            Serial.print("[Stoker][");
            Serial.print(nom);
            Serial.print("]");
            Serial.println("[STATE] -> [STO_STATE_OPEN]");
            break;

        case STO_STATE_RECON_1 :
            Serial.print("[Stoker][");
            Serial.print(nom);
            Serial.print("]");
            Serial.println("[STATE] ->[STO_STATE_RECON_1]");
            set_time_out(STO_TIME_OUT_MAX);
            break;

        case STO_STATE_CLOSING_INTER :
            Serial.print("[Stoker][");
            Serial.print(nom);
            Serial.print("]");
            Serial.println("[STATE] ->[STO_STATE_CLOSING_INTER]");
            set_servo_lock();
            set_time_out(STO_TIME_OUT_CLOSING);
            break;

        case STO_STATE_RECON_2 :
            set_servo_lock();
            Serial.print("[Stoker][");
            Serial.print(nom);
            Serial.print("]");
            Serial.println("[STATE] ->[STO_STATE_RECON_2]");
            break;

        case STO_STATE_STOCK :
            set_servo_lock();
            Serial.print("[Stoker][");
            Serial.print(nom);
            Serial.print("]");
            Serial.println("[STATE] ->[STO_STATE_STOCK]");
            break;
    }
}
