/*
 PROGRAMME PRINCIPAL BAS NIVEAU
 Carte : Arduino Mega 2560
 Robot : PRINCIPAL
 Nom   : PICKY
 Annee : 2017
 Auteur: Veg (Loic MAXEL)
*/


/** INCLUDES **/
#include <Arduino.h>
#include <Servo.h>
#include "IO.h"
#include "Const.h"
#include "OrdersRaspberry.h"
#include <pnew.cpp>
#include "Utils/Switch.h"



/** DECLARATIONS **/
#define ALLUMAGE 0
#define STARTMIS 1
#define GAME 2
#define END_INIT 3
#define END 4

IO* io;
OrdersRaspberry* com;
Autom* slave;

int state;
int led_on;
long timer;
long TEMPS_PARTIE = 90000; //en ms mettre 90

int color_str;



//test capteur US

    // bumper de strategie
    Switch bumper_START(PIN_STR_SWI_START);
    Switch bumper_Couleur(PIN_STR_SWI_COULEUR);
    Switch bumper_Strat_1(PIN_STR_SWI_STRAT_1);



/** INITIALISATION **/
void setup()
{

    // setup bumper
    bumper_Couleur.reverse();
    bumper_Strat_1.reverse();


    /** setup ODO SLAVE **/

    // ODO SLAVE LEFT CHANEL A INC
    attachInterrupt(PIN_SLA_ODO_L_CHA, inc_ticG, RISING);
    pinMode(2, INPUT);
    digitalWrite(2,HIGH);

    // ODO SLAVE LEFT CHANEL B DIR
    pinMode(PIN_SLA_ODO_L_CHB, INPUT);
    digitalWrite(PIN_SLA_ODO_L_CHB,HIGH);

    // ODO SLAVE RIGHT CHANEL A INC
    attachInterrupt(PIN_SLA_ODO_R_CHA, inc_ticD, RISING);
    pinMode(3, INPUT);
    digitalWrite(3,HIGH);

    // ODO SLAVE RIGHT CHANEL B DIR
    pinMode(PIN_SLA_ODO_R_CHB, INPUT);
    digitalWrite(PIN_SLA_ODO_R_CHB,HIGH);



    /** setup ODO ROULETTE **/

    // ODO ROULETTE CHANEL A INC
    //#define PIN_CLW_ODO_CHA 2 // == pin 21 (interrupt 2)
    //#define PIN_CLW_ODO_CHB 6
    digitalWrite(21,HIGH);
    pinMode(21, INPUT);
    attachInterrupt(PIN_CLW_ODO_CHA, inc_tic_roulette,RISING);



    // ODO ROULETTE CHANEL B DIR
    pinMode(PIN_CLW_ODO_CHB, INPUT);
    digitalWrite(PIN_CLW_ODO_CHB,HIGH);


    /** setup COLOR SENSOR **/
    attachInterrupt(PIN_CLW_COL_OUT, inc_pulse_color, RISING);
    pinMode(PIN_CLW_COL_S0, OUTPUT);
    pinMode(PIN_CLW_COL_S1, OUTPUT);
    pinMode(PIN_CLW_COL_S2, OUTPUT);
    pinMode(PIN_CLW_COL_S3, OUTPUT);



    // initialisation du port serie
    Serial.begin(9600) ;
    Serial.println("#SERIAL READY");
    Serial.println("#BAS NIVEAU PICKY");

    // initialisation des PINS IN et OUT
    io = new IO();
    //Serial.println("[IO][INIT]");

    // initialisation du slave
    slave = new Autom();
    //Serial.println("[SLAVE][INIT]");

    // initialisation du protocol de communication via le port serie
    com = new OrdersRaspberry(slave,io);
    Serial.println("[OrdersRaspberry][INIT]");

    //write_serial_strat();
    Serial.println("");
    Serial.println("________________________");

    // initialisation du timer et de l'etat de depart
    state = ALLUMAGE;
    //state = GAME;
    timer = 0;
    Serial.println("etat init");

    Serial.print("* START : ");
    Serial.println((int)bumper_START.is_on());

    Serial.print("* COULEUR : ");
    Serial.println((int)bumper_Couleur.is_on());
    Serial.print("* STRAT 1 : ");
    Serial.println((int)bumper_Strat_1.is_on());



    if (bumper_Couleur.is_on()){
        Serial.println("[Strategie][COULEUR] -> JAUNE");
        Serial.println("# GAME_YELLOW");
        color_str = STR_COLOR_YELLOW;
        io->get_claw()->set_color_yellow();
    }
    else{
        Serial.println("[Strategie][COULEUR] -> BLEU");
        color_str = STR_COLOR_BLUE;
        Serial.println("# GAME_BLUE");
        io->get_claw()->set_color_blue();
    }

    //testMoteurD.attach(PIN_PWM_MOTEUR_PROPU_DROITE);
    //testMoteurG.attach(PIN_PWM_MOTEUR_PROPU_GAUCHE);
    //testMoteurG.writeMicroseconds(1500);
    //testMoteurD.writeMicroseconds(1700);
    //gauche AV -> up 1500
    // idem pour droite

    slave->turn_off_evit();
}


/**
BOUCLE DE CONTROL
*/
void loop(){



    // enclenchement du start
   if (state == ALLUMAGE && bumper_START.is_on())
    {
        state = STARTMIS;
        Serial.println("# START_IN");
        delay(100);
    }
    else
    {
            // debut de jeu quand le start est releve
        if (state == STARTMIS && bumper_START.is_off())
        {
            state = GAME ;
            Serial.println("# START_OUT");
            Serial.println("# START_GAME");
            //slave->turn_on_evit();
            timer = millis();
            //Serial.println(timer);

        }
        else
        {
            // fin de partie si t>90s
            if ( state == GAME && ((millis()-timer) > TEMPS_PARTIE  ) )
            {
                // déclenchement space shuttle
                io->get_spaceShuttle()->trigger_launch();
                Serial.println("# END_GAME_INIT");
                Serial.println("# END_GAME");
                state = END_INIT ;
                slave->stop();
                //io->stop();



            }
            else
            {
                if(state == END_INIT || state == END){
                    state = END ;
                    //Serial.println("# END_GAME");
                    slave->stop();
                    //io->stop();
                }


                    //Serial.println(millis()-timer);
                    com->run();
                    slave->run();
                    io->run();
            }
        }
    }



/**
            com->run();
            slave->run();
            io->run();
            delay(1);


*/



/*
    // test US
    Serial.print("SONAR GAUCHE : ");
    Serial.println(analogRead(PIN_SONAR_GAUCHE));

    Serial.print("SONAR DROITE : ");
    Serial.println(analogRead(PIN_SONAR_DROITE));

   // test des IR des ASCENSEUR
    Serial.print("IR CENTRAL : ");
    Serial.println(analogRead(PIN_IR_CENTRAL));

    Serial.print("IR BAS GAUCHE : ");
    Serial.println(analogRead(PIN_IR_BAS_GAUCHE));

    Serial.print("IR BAS DROITE : ");
    Serial.println(analogRead(PIN_IR_BAS_DROITE));

    Serial.print("IR HAUT GAUCHE : ");
    Serial.println(analogRead(PIN_IR_HAUT_GAUCHE));

    Serial.print("IR HAUT DROITE : ");
    Serial.println(analogRead(PIN_IR_HAUT_DROITE));

    Serial.print("IR MID GAUCHE : ");
    Serial.println(analogRead(PIN_IR_MID_GAUCHE));

    Serial.print("IR MID DROITE : ");
    Serial.println(analogRead(PIN_IR_MID_DROITE));

    Serial.println();


   delay(500);
*/




//   delay(200);

}

