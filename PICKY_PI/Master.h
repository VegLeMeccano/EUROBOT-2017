#ifndef MASTER_H
#define MASTER_H
#include "Period.h"
#include "MAE_PICKY.h"

#include "Gestionnaire_Mission.h"
#include "Plateau_jeu.h"
#include "Element_Robot.h"

#include <wiringPi.h>

#define PERIODE_MASTER 50

#define PERIODE_JEU 90000


class Master
{
    private:

        // time
        long t_over;
        bool time_out_on;
        Period periode_run;

        Period period_jeu;

        // couleur
        bool color_blue;

        //port serie
        int portSerie;

        // element de jeu et control de mission
        Gestionnaire_Mission* gestionnaire_mission;
        Element_Robot* element_robot;
        Plateau_jeu* plateau_jeu;

        // MAE
        MAE_PICKY mae_picky;



    public:
        Master(int portSerie_);
        void run();

        // port serie
        int getPortSerie();

        // gestion du temps de la MAE
        void set_time_out(int dt_);     // besoin d'avoir acces de l'exterieur, pour mettre les tempos
        void reset_time_out();
        bool is_time_out();

        void start_compteur_periode();


        MAE_PICKY* get_mae_picky();       // retourne la MAE, util? je sais pas, si pour la com

        void decision_nouvelle_mission();

        Gestionnaire_Mission* get_gestionnaire_mission();
        Gestionnaire_Mission* get_gestionnaire();
        Gestionnaire_Mission* get_mission();

        Plateau_jeu* get_plateau_jeu();
        Element_Robot* get_element_robot();

        // color
        bool is_blue();
        bool is_yellow();
        void set_blue();
        void set_yellow();

        // pour simplifier dans booml
        void printSerial();


};

extern Master * master;

#endif // MASTER_H
