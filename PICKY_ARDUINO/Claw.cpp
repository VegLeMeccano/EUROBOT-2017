#include "Claw.h"


/**************************************************************************
                CONSTRUCTOR
**************************************************************************/
Claw::Claw():
    period_run(CLW_PERIOD),
    state(0),
    time_out_on(false),
    asserv_required(false),
    color_asserv(0),
    presence_module(false),
    clawMotor(),
    cpt(0),
    color_found(false)
{
    servo_claw_squeeze.attach(PIN_CLW_SER_SQUEEZE);
    squeeze_position_folded();
    //servo_spaceShuttle.attach(pin_servo_spaceShuttle);
    Serial.println("[Claw][init]");
    in_state_func();
    //set_color_blue();


    // initialisation du tableau
    for (int i(0); i<CLW_DATA_NB_POINT; i++ )
    {
        tab_data_angle[i] = (double)i*(CLW_DATA_ANGLE_FINAL_POINT-CLW_DATA_ANGLE_FIRST_POINT)/(CLW_DATA_NB_POINT);
        //tab_cartography_angle[i] = tab_data_angle[i];
        //tab_cartography_angle[i+CLW_DATA_NB_POINT] = (double)(i+CLW_DATA_NB_POINT)*(CLW_DATA_ANGLE_FINAL_POINT-CLW_DATA_ANGLE_FIRST_POINT)/(CLW_DATA_NB_POINT);

        tab_data_color[i] = CLW_COLOR_UNKNOWN;
        //tab_cartography_color[i] = CLW_COLOR_UNKNOWN;
        //tab_cartography_color[i+CLW_DATA_NB_POINT] = CLW_COLOR_UNKNOWN;
    }
    //data_display();
    //cartography_display();
}

/**************************************************************************
                CARTOGRAPHY
**************************************************************************/
void Claw::data_display()
{
    Serial.println("[Claw][data display]");
    // display value
    for (int i(0); i<CLW_DATA_NB_POINT; i++ )
    {
        Serial.print("\t");
        Serial.print(i+1);
        Serial.print("\t");
        Serial.print(tab_data_angle[i]);
        Serial.print("\t");
        Serial.print(tab_data_color[i]);
        Serial.print(" ->\t");

        switch(tab_data_color[i])
        {
            case CLW_COLOR_WHITE:
                Serial.println("[WHITE]");
            break;

            case CLW_COLOR_UNKNOWN:
                Serial.println("[UNKNOW]");
            break;

            case CLW_COLOR_BLUE:
                Serial.println("[BLUE]");
            break;

            case CLW_COLOR_YELLOW:
                Serial.println("[YELLOW]");
            break;
        }
    }
}


void Claw::display_color()
{
        switch(colorSensor.return_color())
        {
            case CLW_COLOR_WHITE:
                Serial.println("# CLW_COLOR_WHITE");
            break;

            case CLW_COLOR_UNKNOWN:
                Serial.println("# CLW_COLOR_UNKNOW");
            break;

            case CLW_COLOR_BLUE:
                Serial.println("# CLW_COLOR_BLUE");
            break;

            case CLW_COLOR_YELLOW:
                Serial.println("# CLW_COLOR_YELLOW");
            break;
        }


}

/*
void Claw::cartography_display()
{
    Serial.println("[Claw][Cartography display]");
    // display value
    for (int i(0); i<CLW_DATA_NB_POINT*2; i++ )
    {
        Serial.print("\t");
        Serial.print(i+1);
        Serial.print("\t");
        Serial.print(tab_cartography_angle[i]);
        Serial.print("\t");
        Serial.print(tab_cartography_color[i]);
        Serial.print(" ->\t");

        switch(tab_cartography_color[i])
        {
            case CLW_COLOR_WHITE:
                Serial.println("[WHITE]");
            break;

            case CLW_COLOR_UNKNOWN:
                Serial.println("[UNKNOW]");
            break;

            case CLW_COLOR_BLUE:
                Serial.println("[BLUE]");
            break;

            case CLW_COLOR_YELLOW:
                Serial.println("[YELLOW]");
            break;
        }
    }
}
*/

double Claw::cartography_get_target()
{
    // barycentre
    int compteur = 0;
    double x_mean = 0;
    double y_mean = 0;

    double angle_barycentre = 0;

    color_found = false;

    for (int i(0); i<CLW_DATA_NB_POINT; i++ )
    {
        if(tab_data_color[i] == color_asserv)
        {
            compteur++;
            color_found = true;
            x_mean += cos(tab_data_angle[i]*3.1416/180.0);
            y_mean += sin(tab_data_angle[i]*3.1416/180.0);
            //angle_barycentre += tab_data_angle[i];
        }
    }
    //angle_barycentre = angle_barycentre/compteur;
    x_mean = x_mean/compteur;
    y_mean = y_mean/compteur;
    angle_barycentre = atan2(y_mean,x_mean)*180.0/3.1416 + CLW_OFFSET_ANGLE;

    if(angle_barycentre<0){
        angle_barycentre += 360.0;
    }
    if(angle_barycentre>360){
        angle_barycentre -= 360.0;
    }

    Serial.print("\ttarget barycentre -> ");
    Serial.println(angle_barycentre);

    return angle_barycentre;

}


/**************************************************************************
                GETTER
**************************************************************************/
ColorSensor* Claw::get_colorSensor(){
    return &colorSensor;
}

ClawMotor* Claw::get_clawMotor(){
    return &clawMotor;
}



/**************************************************************************
                CMD simple de la pince
**************************************************************************/

void Claw::squeeze_position_folded(){
    servo_claw_squeeze.writeMicroseconds(CLW_PWM_SER_SQUEEZE_FOLDED);
}

void Claw::squeeze_position_catch(){
    servo_claw_squeeze.writeMicroseconds(CLW_PWM_SER_SQUEEZE_CATCH);
}

void Claw::squeeze_position_open_medium(){
    servo_claw_squeeze.writeMicroseconds(CLW_PWM_SER_SQUEEZE_OPEN_MEDIUM);
}

void Claw::squeeze_position_open_wide(){
    servo_claw_squeeze.writeMicroseconds(CLW_PWM_SER_SQUEEZE_OPEN_WIDE);
}


/**************************************************************************
                Choix color asservie
**************************************************************************/

void Claw::set_color_blue(){
    color_asserv = CLW_COLOR_BLUE;
    Serial.println("[Claw][set asserved color][BLUE]");
}

void Claw::set_color_yellow(){
    color_asserv = CLW_COLOR_YELLOW;
    Serial.println("[Claw][set asserved color][YELLOW]");
}

/**************************************************************************
                Choix asserv
**************************************************************************/
void Claw::set_color_asserv_ON(){
    asserv_required = true;
}


void Claw::set_color_asserv_OFF(){
    asserv_required = false;
}


/**************************************************************************
                CHECK
**************************************************************************/
bool Claw::get_presence_module()
{
    return presence_module;
}


/***********************************************************************
               DEBUG
***********************************************************************/
void Claw::debug(){
    Serial.print("\t[tic roulette] -> ");
    Serial.println(tic_roulette);

    Serial.print("\t[Color Asserv] -> ");
    if(color_asserv == CLW_COLOR_BLUE){
        Serial.println("BLUE");
    }
    else{
        Serial.println("YELLOW");
    }

    Serial.print("\t[Asserv] -> ");
    Serial.println(asserv_required);
    // mettre si asserv ON ou OFF
    // couleur asservie

    Serial.print("\t[STATE] -> ");
    Serial.println(state);

    Serial.print("\t[IR][CLAW CLOSED] -> \t");
    Serial.print(analogRead(PIN_CLW_IR));
    Serial.print(" / if between [");
    Serial.print(CLW_SEUIL_IR_LIMIT_LOW);
    Serial.print(" ; ");
    Serial.print(CLW_SEUIL_IR_LIMIT_UP);
    Serial.print("] ");

    if (analogRead(PIN_CLW_IR)>CLW_SEUIL_IR_LIMIT_LOW && analogRead(PIN_CLW_IR)<CLW_SEUIL_IR_LIMIT_UP){
        Serial.println(" -> MODULE_PRESENT");
    }
    else{
        Serial.println(" -> MODULE_ABSENT");
    }


    Serial.print("\t[IR][CLAW OPEN] -> \t");
    Serial.print(analogRead(PIN_CLW_IR));
    Serial.print(" / if >");
    Serial.print(CLW_SEUIL_IR_LIMIT_LOW);

    if (analogRead(PIN_CLW_IR)>CLW_SEUIL_IR_LIMIT_LOW ){
        Serial.println(" -> MODULE_PRESENT");
    }
    else{
        Serial.println(" -> MODULE_ABSENT");
    }

}



/***********************************************************************
                TRIGGER MANU
***********************************************************************/

void Claw::trigger_open_wide()
{
    trigger(CLW_TRIGGER_OPEN_WIDE);
}

void Claw::trigger_open_medium()
{
    trigger(CLW_TRIGGER_OPEN_MEDIUM);
}

void Claw::trigger_close_folded()
{
    trigger(CLW_TRIGGER_FOLD);
}

void Claw::trigger_catch_auto()
{
    trigger(CLW_TRIGGER_CATCH_AUTO);
}

void Claw::trigger_catch_manuel()
{
    trigger(CLW_TRIGGER_CATCH_MANUAL);
}

void Claw::trigger_release()
{
    trigger(CLW_TRIGGER_RELEASE);
}


/***********************************************************************
                MAE : TRIGGER
***********************************************************************/
void Claw::trigger(int transition)
{
    //Serial.println("");
    Serial.print("[Claw][TRIGGER] -> [#");
    Serial.print(transition);
    Serial.print("]");

    switch(transition)
    {

        case CLW_TRIGGER_TIME_OUT:
            Serial.println("[AUTO][CLW_TRIGGER_TIME_OUT]");
        break;
        case CLW_TRIGGER_ASS_FINI:
            Serial.println("[AUTO][CLW_TRIGGER_ASS_FINI]");
        break;
        case CLW_TRIGGER_IR_DETECTED:
            Serial.println("[AUTO][CLW_TRIGGER_IR_DETECTED]");
        break;
        case CLW_TRIGGER_IR_UNDETECTED:
            Serial.println("[AUTO][CLW_TRIGGER_IR_UNDETECTED]");
        break;
        case CLW_TRIGGER_DATA_COLLECTED:
            Serial.println("[AUTO][CLW_TRIGGER_DATA_COLLECTED]");
        break;
        case CLW_TRIGGER_TARGET_COMPUTED:
            Serial.println("[AUTO][CLW_TRIGGER_TARGET_COMPUTED]");
        break;
        case CLW_TRIGGER_CANCEL:
            Serial.println("[AUTO][CLW_TRIGGER_CANCEL]");
        break;


        case CLW_TRIGGER_OPEN_WIDE:
            Serial.println("[MANU][CLW_TRIGGER_OPEN_WIDE]");
        break;
        case CLW_TRIGGER_OPEN_MEDIUM:
            Serial.println("[MANU][CLW_TRIGGER_OPEN_MEDIUM]");
        break;
        case CLW_TRIGGER_CATCH_AUTO:
            Serial.println("[MANU][CLW_TRIGGER_CATCH_AUTO]");
        break;
        case CLW_TRIGGER_CATCH_MANUAL:
            Serial.println("[MANU][CLW_TRIGGER_CATCH_MANUAL]");
        break;
        case CLW_TRIGGER_RELEASE:
            Serial.println("[MANU][CLW_TRIGGER_RELEASE]");
        break;
        case CLW_TRIGGER_FOLD:
            Serial.println("[MANU][CLW_TRIGGER_FOLD]");
        break;

    }

/*
    // add things here for MAE
    if (transition == CLW_TRIGGER_OPEN_WIDE || transition == CLW_TRIGGER_OPEN_MEDIUM || transition == CLW_TRIGGER_RELEASE)
    {
         Serial.println("[OPEN]");
         //Serial.println(transition);
         //trigger_to_be = transition;
    }

    if (transition == CLW_TRIGGER_FOLD)
    {
         Serial.println("[FOLD]");
        // Serial.println(transition);
         //trigger_to_be = transition;
    }

    if (transition == CLW_TRIGGER_CATCH_AUTO || transition == CLW_TRIGGER_CATCH_MANUAL)
    {
         Serial.println("[CATCH]");
         //Serial.println(transition);
         //trigger_to_be = transition;
    }

    if (transition == CLW_TRIGGER_TIME_OUT )
    {
         Serial.println("[TIME OUT]");
         //Serial.println(transition);
         //trigger_to_be = transition;
    }

    if (transition == CLW_TRIGGER_ASS_FINI )
    {
         Serial.println("[ASS FINI]");
         //Serial.println(transition);
         //trigger_to_be = transition;
    }
    if (transition == CLW_TRIGGER_IR_DETECTED || transition == CLW_TRIGGER_IR_UNDETECTED)
    {
         Serial.println("[IR DETECTION]");
         //Serial.println(transition);
         //trigger_to_be = transition;
    }
*/
/*
   Serial.print("[Claw][CURRENT STATE] -> ");
   Serial.println(state);
*/
   int old_state;
   old_state = state;
   switch(state)
    {
        case CLW_STATE_FOLDED :
           if (transition == CLW_TRIGGER_OPEN_WIDE)
           {
                state = CLW_STATE_OPEN_WIDE;
           }
           if (transition == CLW_TRIGGER_OPEN_MEDIUM)
           {
                state = CLW_STATE_OPEN_MEDIUM;
           }
           break;


        case CLW_STATE_OPEN_WIDE :
            // replis
            if (transition == CLW_TRIGGER_FOLD)
            {
                state = CLW_STATE_FOLDED;
            }
            // open medium
             if (transition == CLW_TRIGGER_OPEN_MEDIUM)
            {
                state = CLW_STATE_OPEN_MEDIUM;
            }
            // saisie auto
            if (transition == CLW_TRIGGER_CATCH_AUTO)
            {
                state = CLW_STATE_RECON_1;
            }
            // saisie manuel
            if (transition == CLW_TRIGGER_CATCH_MANUAL)
            {
                state = CLW_STATE_CLOSING_INTER;
            }
            break;

        case CLW_STATE_OPEN_MEDIUM :
            // replis
            if (transition == CLW_TRIGGER_FOLD)
            {
                state = CLW_STATE_FOLDED;
            }
            // open wide
             if (transition == CLW_TRIGGER_OPEN_WIDE)
            {
                state = CLW_STATE_OPEN_WIDE;
            }
            // saisie auto
            if (transition == CLW_TRIGGER_CATCH_AUTO)
            {
                state = CLW_STATE_RECON_1;
            }
            // saisie manuel
            if (transition == CLW_TRIGGER_CATCH_MANUAL)
            {
                state = CLW_STATE_CLOSING_INTER;
            }
            break;

        case CLW_STATE_RECON_1 :
            if (transition == CLW_TRIGGER_TIME_OUT)
            {
                state = CLW_STATE_OPEN_MEDIUM;
                Serial.println("# CLW_AUTO_GIVE_UP");
            }
            if (transition == CLW_TRIGGER_IR_DETECTED)
            {
                state = CLW_STATE_CLOSING_INTER;
            }
            break;

        case CLW_STATE_CLOSING_INTER :
            //Serial.println("ETAT_BALLE_DROITE_RELEVE");
            if (transition == CLW_TRIGGER_TIME_OUT)
            {
                state = CLW_STATE_RECON_2;
            }
            break;

        case CLW_STATE_RECON_2 :
            //Serial.println("ETAT_BALLE_DROITE_RELEVE");
            if (transition == CLW_TRIGGER_IR_DETECTED)
            {
                if(asserv_required)
                {
                    state = CLW_STATE_COLLECTING_DATA;
                    Serial.println("# CLW_STOCKED");
                    presence_module = true;
                    cpt = 0;
                    clawMotor.new_prise(); // reset odo
                    clawMotor.set_asserv(tab_data_angle[cpt]);

                }
                else
                {
                    state = CLW_STATE_STOCK;
                    Serial.println("# CLW_STOCKED");
                    presence_module = true;
                }

            }
            if (transition == CLW_TRIGGER_IR_UNDETECTED)
            {
                state = CLW_STATE_OPEN_MEDIUM;
                Serial.println("# CLW_FAIL_CATCH");
            }
            break;

        case CLW_STATE_STOCK :
            //Serial.println("ETAT_BALLE_DROITE_RELEVE");
            if (transition == CLW_TRIGGER_RELEASE)
            {
                state = CLW_STATE_OPEN_MEDIUM;
            }
            if (transition == CLW_TRIGGER_OPEN_MEDIUM)
            {
                state = CLW_STATE_OPEN_MEDIUM;
                presence_module = false;
                Serial.println("# CLW_RELEASE");
            }
            if (transition == CLW_TRIGGER_OPEN_WIDE)
            {
                state = CLW_STATE_OPEN_WIDE;
                presence_module = false;
                Serial.println("# CLW_RELEASE");
            }
            break;

        case CLW_STATE_COLLECTING_DATA :
            //Serial.println("ETAT_BALLE_DROITE_RELEVE");
            /*
            if (transition == CLW_TRIGGER_ASS_FINI)
            {
                state = CLW_STATE_STOCK;
                Serial.print("# Claw_GOOD_COLOR");
            }
            */
            if (transition == CLW_TRIGGER_DATA_COLLECTED)
            {
                state = CLW_STATE_ASSERV_STOCK;
                Serial.println("# CLW_DATA_COLLECTED");
            }


            if (transition == CLW_TRIGGER_TIME_OUT)
            {
                state = CLW_STATE_STOCK;
                Serial.println("# CLW_FAIL_DATA");
                //Serial.println("# CLW_FAIL_DATA");
            }

            break;

/*
        case CLW_STATE_CARTOGRAPHY :
            //Serial.println("ETAT_BALLE_DROITE_RELEVE");
            if (transition == CLW_TRIGGER_TARGET_COMPUTED)
            {
                state = CLW_STATE_ASSERV_STOCK;
                Serial.print("# Claw_Target_Computed");
            }
            if (transition == CLW_TRIGGER_TIME_OUT)
            {
                state = CLW_STATE_STOCK;
                Serial.print("# Claw_Abandon_cartography");
            }
            break;
*/
        case CLW_STATE_ASSERV_STOCK :
            //Serial.println("ETAT_BALLE_DROITE_RELEVE");
            if (transition == CLW_TRIGGER_ASS_FINI)
            {
                state = CLW_STATE_STOCK;
                Serial.println("# CLW_ASSERV_OK");
            }
            if (transition == CLW_TRIGGER_TIME_OUT)
            {
                state = CLW_STATE_STOCK;
                Serial.println("# CLW_ASSERV_FAIL");
            }
            if (transition == CLW_TRIGGER_COLOR_NOT_FOUNDED)
            {
                state = CLW_STATE_STOCK;
                Serial.println("# CLW_ASSERV_NO_TARGET");
            }

            break;
    }

   if (old_state != state)
    {
        /*
        Serial.print("[Claw][NEW STATE] -> [");
        Serial.print(state);
        Serial.println("]");
        */

        reset_time_out();
        in_state_func();
    }
}
int Claw::actualState()
{
    return state;
}

/***********************************************************************
                RUN
***********************************************************************/
void Claw::run(){

    colorSensor.run();
    clawMotor.run();

    if (period_run.is_over())
    {
        period_run.reset();

        // time out
        if (is_time_out())
        {
            trigger(CLW_TRIGGER_TIME_OUT);
        }

        // Ir detection
        if(state == CLW_STATE_RECON_1 )
        {
            if(analogRead(PIN_CLW_IR)>CLW_SEUIL_IR_LIMIT_LOW )
            {
                trigger(CLW_TRIGGER_IR_DETECTED);
            }
            // sinon le time out prend le dessus env 10s
        }

        // Ir detection
        if(state == CLW_STATE_RECON_2)
        {
            if(analogRead(PIN_CLW_IR)>CLW_SEUIL_IR_LIMIT_LOW && analogRead(PIN_CLW_IR)<CLW_SEUIL_IR_LIMIT_UP)
            {
                trigger(CLW_TRIGGER_IR_DETECTED);
            }
            else{
                trigger(CLW_TRIGGER_IR_UNDETECTED);
            }
        }

        // si la target est atteinte
        if(state == CLW_STATE_ASSERV_STOCK)
        {
            if(clawMotor.get_assFini())
            {
                trigger(CLW_TRIGGER_ASS_FINI);
            }
            if(!color_found)
            {
                // not found
                trigger(CLW_TRIGGER_COLOR_NOT_FOUNDED);
            }
        }

        // OPERATIONS COMPLEXE COLLECTING DATA
        if(state == CLW_STATE_COLLECTING_DATA)
        {
            //Serial.print("[Claw][cpt] -> [");
            //Serial.println(cpt);

            if(cpt<CLW_DATA_NB_POINT)
            {
                //Serial.print("[Claw][assfini] -> [");
                //Serial.println(clawMotor.get_assFini());

                if(clawMotor.get_assFini())
                {
                    //** cartography en real time **/
                    tab_data_color[cpt] = colorSensor.return_color();

                    //** cartography en real time **/
                    //tab_cartography_color[cpt] = tab_data_color[cpt];
                    /*
                    switch(tab_data_color[cpt])
                    {
                        case CLW_COLOR_BLUE:
                            tab_cartography_color[cpt + CLW_DATA_NB_POINT] = CLW_COLOR_YELLOW;
                        break;

                        case CLW_COLOR_YELLOW:
                            tab_cartography_color[cpt + CLW_DATA_NB_POINT] = CLW_COLOR_BLUE;
                        break;

                        case CLW_COLOR_WHITE:
                            tab_cartography_color[cpt + CLW_DATA_NB_POINT] = CLW_COLOR_WHITE;
                        break;

                        case CLW_COLOR_UNKNOWN:
                            tab_cartography_color[cpt + CLW_DATA_NB_POINT] = CLW_COLOR_UNKNOWN;
                        break;
                    }
                    */

                    cpt ++;
                    if(cpt == CLW_DATA_NB_POINT)
                    {
                        trigger(CLW_TRIGGER_DATA_COLLECTED);
                    }
                    else
                    {
                       clawMotor.set_asserv(tab_data_angle[cpt]);
                    }

                }
                else
                {
                    // attente?
                }


            }

        }


    }
}


/***********************************************************************
                TIME
***********************************************************************/
void Claw::set_time_out(int dt_)
{
    t_over = millis() + dt_;
    time_out_on = true;
    //trigger_to_be = trigger;

    Serial.print("[Claw][TIME OUT] -> [set time out : ");
    Serial.print(dt_);
    Serial.println(" ms]");

}

void Claw::reset_time_out()
{
    time_out_on = false;
}


bool Claw::is_time_out()
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
void Claw::in_state_func()
{
    switch (state)
    {
        case CLW_STATE_FOLDED :
            Serial.print("[Claw][STATE] -> ");
            Serial.println("[CLW_STATE_FOLDED]");
            squeeze_position_folded();
            break;

        case CLW_STATE_OPEN_WIDE :
            squeeze_position_open_wide();
            Serial.print("[Claw][STATE] -> ");
            Serial.println("[CLW_STATE_OPEN_WIDE]");
            break;

        case CLW_STATE_OPEN_MEDIUM :
            squeeze_position_open_medium();
            Serial.print("[Claw][STATE] -> ");
            Serial.println("[CLW_STATE_OPEN_MEDIUM]");
            break;

        case CLW_STATE_RECON_1 :
            Serial.print("[Claw][STATE] -> ");
            Serial.println("[CLW_STATE_RECON_1]");
            set_time_out(6000);
            break;

        case CLW_STATE_CLOSING_INTER :
            squeeze_position_catch();

            Serial.print("[Claw][STATE] -> ");
            Serial.println("[CLW_STATE_CLOSING_INTER]");
            set_time_out(1000);
            break;

        case CLW_STATE_RECON_2 :
            squeeze_position_catch();
            Serial.print("[Claw][STATE] -> ");
            Serial.println("[CLW_STATE_RECON_2]");
            break;

        case CLW_STATE_STOCK :
            squeeze_position_catch();
            Serial.print("[Claw][STATE] -> ");
            Serial.println("[CLW_STATE_STOCK]");
            Serial.println("# CLW_STOCK_READY");
            break;

        case CLW_STATE_COLLECTING_DATA :
            Serial.print("[Claw][STATE] -> ");
            Serial.println("[CLW_STATE_COLLECTING_DATA]");
            //cpt = 0;
            set_time_out(6000);
            break;
/*
        case CLW_STATE_CARTOGRAPHY :
            set_time_out(2000);
            Serial.print("[Claw][STATE] -> ");
            Serial.println("[CLW_STATE_CARTOGRAPHY]");
            break;
*/
        case CLW_STATE_ASSERV_STOCK :
            Serial.print("[Claw][STATE] -> ");
            Serial.println("[CLW_STATE_ASSERV_STOCK]");
            set_time_out(1500);
            data_display();
            //cartography_display();

            target_angle = cartography_get_target();
            if(color_found)
            {
                clawMotor.set_asserv_propre(target_angle);
                Serial.println("[# CLW_COLOR_FOUNDED]");
            }
            else
            {
                Serial.println("[# CLW_COLOR_NOT_FOUNDED]");
            }
            break;
    }
}
