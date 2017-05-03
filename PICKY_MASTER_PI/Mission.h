#ifndef MISSION_H
#define MISSION_H


#define STATUS_MISSION_FAITE 0
#define STATUS_MISSION_A_FAIRE 1

#include <iostream>
#include  <iomanip>
#include "Coord.h"
#include "Element_Robot.h"
#include "Plateau_jeu.h"

using namespace std;


/*** nom mission **/
#define MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE 0
#define MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT 1
#define MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME 2

#define MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME 3 // 40pts facile

#define MISSION_PUSH_DISTRIBUTEUR_MONOCHROME 4 // 8pts
#define MISSION_PUSH_CRATERE 5 // 10pts

#define MISSION_DROP_ZONE_DEPART 6 // 2xnb module

#define MISSION_DEPOT_BASE_DIAGONALE 7
#define MISSION_DEPOT_BASE_VERTICALE 8



#define PRIORITE_MISSION_DESACTIVATED -1
#define PRIORITE_MISSION_FAIBLE 0
#define PRIORITE_MISSION_MOYENNE 1
#define PRIORITE_MISSION_HAUTE 2
#define PRIORITE_MISSION_FIRST 3
#define PRIORITE_MISSION_NORMAL 4
#define PRIORITE_MISSION_EVITEMENT 5

#define MISSION_TO_DO true
#define MISSION_DONE false


#define TIME_TO_CATCH_AND_STOCK_PER_MODULE 3
#define TIME_TO_DROP 3
#define TIME_TO_PUSH_CRATERE 4
#define TIME_TO_PUSH_DISTRIB_PER_MODULE 2.5
#define TIME_FROM_DISTRIB_TO_BASE_PER_MODULE 5.5
#define TIME_PLACE_MODULE_ON_BASE_PER_MODULE 5

#define POIDS_COLLECT_OVER_PLACEMENT 0.50

#define TIME_OFFSET_DEBUT_MISSION 5
#define TIME_LIMIT_TO_COLLECT 25

class Mission
{
    public:
        Mission(int mission_nb_, Plateau_jeu* plateau_jeu_, Element_Robot* element_robot_);
        bool is_on();
        bool is_off();

        void activation();
        void desactivation();



        int points_to_collect();
        int points_to_release();

        int points_to_do();
        bool collect_required();


        // pour savoir le statu de la mission
        bool is_accomplie();
        void mission_remplie();




        // gestion du point de depart de la mission
        Coord get_coord_debut_mission(); //attention a la couleur, inverser les X et les angles
        void set_coord_debut_mission(Coord coord_debut_mission_);
        float distance_to_mission(Coord coord_reel);

        // le nombre de pts de la mission pour savoir si ça aut le coup d'y aller
        int point_restant();
        void set_nbr_pts(int pts_);

        void affiche();
        void display();
        string get_title();

        void set_priorite(int priorite_);
        void set_priorite_evitement();
        void set_priorite_normal();

        bool is_priorite_evitement();
        bool is_priorite_normal();
        int get_priorite();

        void set_blue();
        void set_yellow();

        float get_ratio_pts_tps();
        float get_time_to_realise();

        void set_temps_restant(long temps_restant_);


    protected:
        Coord coord_debut_mission;
        bool color_blue;    // color pour coordonnées /sym axe 0y
        int status;         // statut de la mission: 1: ON, 0: OFF
        void reset();       // coord et title
        bool mission_active;
        int mission_nb;

        Element_Robot* element_robot;        // pour savoir ce qu'on a sous la dent
        Plateau_jeu* plateau_jeu;

        long temps_restant;

        int priorite;
        bool require_collect;
        int time_to_achieve_mission;
        float ratio_pts_tps;

        void refresh_status();


        int nbr_pts; // a mettre en eval uniquement = fonction
        bool mission_faite;
        string title;







};

#endif // MISSION_H
