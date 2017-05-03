#include "ColorSensor.h"


/***********************************************************************
                CONSTRUCTOR
***********************************************************************/
ColorSensor::ColorSensor():
    period_reset(PERIODE_COLOR_SENSOR),
    state(STATE_R)
{
    // Setting frequency-scaling to 20%
    digitalWrite(PIN_CLW_COL_S0,HIGH);
    digitalWrite(PIN_CLW_COL_S1,LOW);

    // RED filter
    digitalWrite(PIN_CLW_COL_S2,LOW);
    digitalWrite(PIN_CLW_COL_S3,LOW);

    Serial.println("[COLOR SENSOR][init]");
    // periode d'echantillonage de remise a 0 pour la lecture de la couleur
}


/***********************************************************************
                CHECK
***********************************************************************/
bool ColorSensor::is_bleue()
{
    if(B>G && G>R  /*R<800 && G<1000 && B>1000*/){
        return true;
    }
    else{
        return false;
    }
}

bool ColorSensor::is_yellow()
{
    if(R>G && G>B /*R>1500 && G>1000 && B<1000*/){
        return true;
    }
    else{
        return false;
    }
}

bool ColorSensor::is_white()
{
    if(R>3000 && G>3000 && B>3000){
        return true;
    }
    else{
        return false;
    }
}


int ColorSensor::return_color()
{
    if(is_white()){
        return CLW_COLOR_WHITE;
    }
    else{
        if(is_bleue()){
            return CLW_COLOR_BLUE;
        }
        else{
                if(is_yellow()){
                    return CLW_COLOR_YELLOW;
                }
                else{
                    return CLW_COLOR_UNKNOWN;
                }
        }
    }
}


/***********************************************************************
                RUN
***********************************************************************/
void ColorSensor::run()
{
    int dt;
    dt = millis() - last_time;
    if (period_reset.is_over())
    {
        period_reset.reset();

        if (dt > 0.)
        {
            last_count = PERIODE_COLOR_SENSOR *  pulse_color / dt ;
            //last_count = pulse_color/PERIODE_COLOR_SENSOR  ;
            last_time = millis();
            pulse_color = 0;


            switch(state)
            {
                case STATE_R :
                    R = last_count;

                    state = STATE_G;
                    // GREEN filter
                    digitalWrite(PIN_CLW_COL_S2,HIGH);
                    digitalWrite(PIN_CLW_COL_S3,HIGH);


                    break;


                case STATE_G :
                    G = last_count ;

                    state = STATE_B;
                    // BLEUE filter
                    digitalWrite(PIN_CLW_COL_S2,LOW);
                    digitalWrite(PIN_CLW_COL_S3,HIGH);
                    break;


                case STATE_B :
                    B = last_count ;

                    state = STATE_R;
                    // RED filter
                    digitalWrite(PIN_CLW_COL_S2,LOW);
                    digitalWrite(PIN_CLW_COL_S3,LOW);
                    break;
            }
        }
    }
}

/***********************************************************************
                DEBGUG
***********************************************************************/
void ColorSensor::debug()
{
    Serial.println("[COLOR SENSOR][DEBUG] ");

    Serial.print("\t[INPUT] -> R : ");
    Serial.print(R);
    Serial.print("\t G: ");
    Serial.print(G);
    Serial.print("\t B: ");
    Serial.println(B);

    Serial.print("\t[BLUE] -> \t");
    Serial.println(is_bleue());
    Serial.print("\t[YELLOW] -> \t");
    Serial.println(is_yellow());
    Serial.print("\t[WHITE] ->  \t");
    Serial.println(is_white());

    Serial.print("\t[COLOR DETECTED] ->  \t");

    switch(return_color())
    {
        case CLW_COLOR_WHITE:
            Serial.println("[WHITE]");
        break;

        case CLW_COLOR_UNKNOWN:
            Serial.println("[UNKNOW...]");
        break;

        case CLW_COLOR_BLUE:
            Serial.println("[BLUE]");
        break;

        case CLW_COLOR_YELLOW:
            Serial.println("[YELLOW]");
        break;
    }
    /*
    if(is_white()){
        Serial.print("[WHITE]");
    }
    else{
        if(is_bleue()){
            Serial.print("[BLUE]");
        }
        else{
                if(is_yellow()){
                    Serial.println("[YELLOW]");
                }
                else{
                    Serial.println("[UNKNOW...]");
                }
        }
    }
    */

}



