#ifndef CONTROL_H
#define CONTROL_H

#include "Utils/Coord.h"
#include "Utils/Sonar.h"
#include "Utils/PID.h"
#include "pins.h"
#include "Const.h"

/*******************************************************
    PERIODE
********************************************************/
#define PERIODE_PID 20
#define PERIODE_COORD 10
#define PERIODE_SONAR 500


/*******************************************************
    GAIN ODO
********************************************************/
// GAIN du slave
#define GAIN_ODO_G 0.340045058//0.377287304 //0.325998//0.338409475
#define GAIN_ODO_D 0.339614681//0.379146919 //0.338925//0.337609723
#define GAIN_ODO_inter 0.012413283

//0.005537522 //0.004987

/*******************************************************
    Constante moteur
********************************************************/
// moteur
#define MOTEUR_PROPU_DROIT_ARRET 1516
#define MOTEUR_PROPU_DROIT_MAX_AVANT 1000
#define MOTEUR_PROPU_DROIT_MAX_ARRIERE 2000

#define MOTEUR_PROPU_GAUCHE_ARRET 1516
#define MOTEUR_PROPU_GAUCHE_MAX_AVANT 1000
#define MOTEUR_PROPU_GAUCHE_MAX_ARRIERE 2000



/*******************************************************
    BF : boucle fermé
********************************************************/
// type of BF
#define STOP 0
#define BFFW 1
#define BFCAP 2
#define BFXYCAP 3

/*******************************************************
    SPEED
********************************************************/
// type of speed
#define SLOW 0
#define MEDIUM 1
#define FAST 2

#define MIN_MAX_SLOW 150
#define MIN_MAX_MEDIUM 200
#define MIN_MAX_FAST 250  // don't use it too fast

/*******************************************************
    PID
********************************************************/

// gain PID cap (rotation)
#define GAIN_KP_CAP 200  //Ku = 260
#define GAIN_KI_CAP 0 //52.0 //70.0
#define GAIN_KD_CAP 0 //18.0 //40.0

// gain PID deplacement
#define GAIN_KP_DEP 1.5
#define GAIN_KI_DEP 0.00
#define GAIN_KD_DEP 0.00

/** FAST ***************************/
// gain PID deplacement en fast
#define GAIN_KP_DEP_FAST 0.9
#define GAIN_KI_DEP_FAST 0.0133
#define GAIN_KD_DEP_FAST 0.00
#define GAIN_KP_CAP_FAST 170  //Ku = 260
#define GAIN_KI_CAP_FAST 4 //52.0 //70.0
#define GAIN_KD_CAP_FAST 0.5 //18.0 //40.0

/** MEDIUM ***************************/
// gain PID deplacement en medium
#define GAIN_KP_DEP_MEDIUM 1.3
#define GAIN_KI_DEP_MEDIUM 0.02
#define GAIN_KD_DEP_MEDIUM 0.00
#define GAIN_KP_CAP_MEDIUM 150  //Ku = 260
#define GAIN_KI_CAP_MEDIUM 2 //52.0 //70.0
#define GAIN_KD_CAP_MEDIUM 0 //18.0 //40.0

/** SLOW ***************************/
// gain PID deplacement en slow
#define GAIN_KP_DEP_SLOW 3.5//3
#define GAIN_KI_DEP_SLOW 0.13//0.05
#define GAIN_KD_DEP_SLOW 2
#define GAIN_KP_CAP_SLOW 336  //Ku = 260
#define GAIN_KI_CAP_SLOW 35 //52.0 //70.0
#define GAIN_KD_CAP_SLOW 200 //18.0 //40.0


/*******************************************************
    ERROR NEAR & DONE
********************************************************/
// norme sur les etats de transistion proche  et fini
#define NEAR_ERROR_DEP 200
#define DONE_ERROR_DEP 100

#define NEAR_ERROR_CAP 8.0 * 3.1416 / 180.0
#define DONE_ERROR_CAP  5.0 * 3.1416 / 180.0


/** BF CAP ***************************/
#define NEAR_ERROR_DEP_BF_CAP 120
#define DONE_ERROR_DEP_BF_CAP 80

#define NEAR_ERROR_CAP_BF_CAP 8.0 * 3.1416 / 180.0
#define DONE_ERROR_CAP_BF_CAP  4.0 * 3.1416 / 180.0


/** BF AVANCE ***************************/
#define NEAR_ERROR_DEP_BF_AVANCE 120
#define DONE_ERROR_DEP_BF_AVANCE 80

#define NEAR_ERROR_CAP_BF_AVANCE 8.0 * 3.1416 / 180.0
#define DONE_ERROR_CAP_BF_AVANCE  5.0 * 3.1416 / 180.0


/** BF DROITE ***************************/
#define NEAR_ERROR_DEP_BF_DROITE 150
#define DONE_ERROR_DEP_BF_DROITE 100

#define NEAR_ERROR_CAP_BF_DROITE 8.0 * 3.1416 / 180.0
#define DONE_ERROR_CAP_BF_DROITE  4.0 * 3.1416 / 180.0




/*******************************************************
    BLOCAGE
********************************************************/
// compteur blocage
#define BLOCAGE_MAX 15


class ControlLoop
/* This class gets the updated coordinate, and talk to the 2 PID
 * loops to tell the robot where to go.
 * This class also talk to the Raspberry Pi to say when the movement is finished*/
{
    private:
        Coord real_coord;           // coordonne actuelle
        Coord target_position;      // coordonne cible
        Vector dir;                 // vecteur de direction a suivre entre le point actuel et la cible (provisoire ou finale)
        bool detect_on;             // activation de la detection d'adversaire
        int bf_type;                // type de BF en cours
        int asserv_state;           // etat PID -> FAR, NEAR
        PID pidcap;                 // PID cap
        PID piddep;                 // PID deplacement
        int cmd_g;                  // commande sur roue gauche
        int cmd_d;                  // commande sur roue droite
        int cmd_dep;                // commande deplacement
        int cmd_cap;                // commance cap
        bool fw_g;                  // avance roue gauche
        bool fw_d;                  // avance roue droite
        int count_not_moving;       // Compteur de blocage
        Coord late_pos;             // to check how much we moved lately
        Sonar sonarg;               // Sonar cote droit
        //Sonar sonard;               // Sonar cote gauche
        bool assfini_on;

    public:
        ControlLoop();
        void bf_avance(float d);
        void set_target(Coord coord);
        void update_error(Coord coord);
        int get_cmd_g();
        bool get_fw_g();
        int get_cmd_d();
        bool get_fw_d();
        void run(Coord real_coord_);
        void compute_pids();
        void compute_cmds();
        void set_BF(int bf_type_, Coord target_position_);
        void next_asserv_state();
        void check_blockage();
        void check_adversary();
        void setxycap(Coord new_coord);
        void write_real_coords();
        void write_debug();
        void set_speed(int speed);
        void recaler();
        void setTuningCap(float Kp, float Ki, float Kd );
        void setTuningDep(float Kp, float Ki, float Kd );
        void turn_on_evit();
        void turn_off_evit();
        //Sonar* get_sonar_d();
        Sonar* get_sonar_g();

        void set_assfini_ON();
        void set_assfini_OFF();

};



#endif
