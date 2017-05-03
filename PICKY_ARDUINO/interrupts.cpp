#include "interrupts.h"
#include "pins.h"

//tics interrupt functions


/*******************************************************
                    INTERRUPTS ODO SLAVE
*******************************************************/
long ticG = 0;
long ticD = 0;

long ticG2 = 0;
long ticD2 = 0;


// increment odo PROPU GAUCHE
void inc_ticG(){
    int chb;
    chb = digitalRead(PIN_SLA_ODO_L_CHB);

    if (chb != 1)
    {
        ticG = ticG + 1;
        ticG2 = ticG2 + 1;
    }
    else
    {
        ticG = ticG - 1;
        ticG2 = ticG2 - 1;
    }
    //Serial.print("tic G : ");
    //Serial.println(ticG);
}

// increment odo PROPU DROITE
void inc_ticD(){

    int chb = digitalRead(PIN_SLA_ODO_R_CHB) ;
    if (chb != 1)
    {
        ticD = ticD - 1;
        ticD2 = ticD2 - 1;
    }
    else
    {
        ticD = ticD + 1;
        ticD2 = ticD2 + 1;
    }
    //Serial.print("tic D : ");
    //Serial.println(ticD);
}

//#endif

/*******************************************************
                    INTERRUPTS ODO ROULETTE
*******************************************************/
long tic_roulette =0;

void inc_tic_roulette(){
    //tic_roulette = tic_roulette + 1;
    int chb = digitalRead(PIN_CLW_ODO_CHB) ;
    if (chb != 1)
    {
        tic_roulette = tic_roulette - 1;
    }
    else
    {
        tic_roulette = tic_roulette + 1;
    }
    //Serial.println("1");
    //Serial.print("tic_roulette : ");
    //Serial.println(tic_roulette);

}


/*******************************************************
                    INTERRUPTS COLOR SENSOR
*******************************************************/

long pulse_color = 0;

 /*
 interruption capteur couleur
 */
void inc_pulse_color() {
  // increase pulse count
    pulse_color = pulse_color + 1;
 }
