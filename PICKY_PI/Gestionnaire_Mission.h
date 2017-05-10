#ifndef GESTIONNAIRE_MISSION_H
#define GESTIONNAIRE_MISSION_H

#include "Element_Robot.h"
#include "Plateau_jeu.h"
#include "Coord.h"
#include "Mission.h"


#include <iomanip>
#include <locale>
#include <sstream>
#include <string>


#include <vector>
#include <iterator>
#include <algorithm>






#define DISTANCE_MINI_TO_MISSION 150
#define CONE_EVITEMENT_DEG 40 // 45deg autour du vecteur reel, ennemi






using namespace std;

class Gestionnaire_Mission
{
    private:

        Element_Robot* element_robot;        // pour savoir ce qu'on a sous la dent
        Plateau_jeu* plateau_jeu;

        bool color_blue;


        //Coordonne actuel
        Coord coord_reel;

        // Coordonne ennemi
        Coord coord_ennemi;

        float cap_to_mission;
        float x_mission;
        float y_mission;
        float cap_mission;
        int distance_mission;
        bool alignement_to_mission;

        // mission de collecte
        Mission mission_collecte_module_centraux_initiale;
        Mission mission_collecte_module_centraux_restant;
        Mission mission_collecte_distributeur_monochrome;

        // mission one shot
        Mission mission_transfert_direct_distributeur_polychrome;
        Mission mission_push_distributeur_monochrome;
        Mission mission_push_cratere;

        //
        Mission mission_drop_zone_depart;
        Mission mission_depot_base_diagonale;
        Mission mission_depot_base_verticale;


        // couleur et temps restant
        //int couleur;

        long temps_restant;

        // pour les trategies
        int strategie_1;
        int strategie_2;
        int mission_sortie_evitement; // mission en cours, abordé... par l'évitement
        int mission_en_cours;
        bool sortie_evitement;
        bool premiere_entree_decision;

        Vector vecteur_reel_ennemi;
        Vector vecteur_reel_mission;

    public:
        //Gestionnaire_Mission(MAE_PICKY* mae_picky_,Plateau_jeu* plateau_jeu_, Element_Robot* element_robot_);
        Gestionnaire_Mission(Plateau_jeu* plateau_jeu_, Element_Robot* element_robot_);

        void display();
        int strategie();
        void set_strategie_1(int strat_);
        void set_strategie_2(int strat_);

        void set_coord(Coord coord_reel_);
        void set_coord_ennemi(Coord coord_reel_);
        Coord* get_coord_reel();
        Coord* get_coord_ennemi();


        bool is_blue();
        bool is_yellow();
        void set_blue();
        void set_yellow();


        int decision_mission(long temps_restant_);            // appel de triger sur la mission a realiser
        void affiche_mission_active();

        // pour premiere mission a faire (degagement zone de depart)
        bool commencement();
        void commencement_end();


        // pour orientation vers next mission
        int get_distance_to_mission();
        float get_cap_to_mission();
        float get_x_mission();
        float get_y_mission();
        float get_cap_mission();
        bool is_mission_far();

        string get_cap_to_mission_str();
        string get_x_mission_str();
        string get_y_mission_str();
        string get_cap_mission_str();



        void actualisation_Priorite();
        void actualisation_temps_restant();
        void actualisation_target(int mission_indice_);
        void evitement_mission();                   // pour baisser la priorite de la mission

        Mission* get_mission_collecte_module_centraux_initiale();
        Mission* get_mission_collecte_module_centraux_restant();
        Mission* get_mission_collecte_distributeur_monochrome();

        Mission* get_mission_transfert_direct_distributeur_polychrome();
        Mission* get_mission_push_distributeur_monochrome();
        Mission* get_mission_push_cratere();

        Mission* get_mission_drop_zone_depart();
        Mission* get_mission_depot_base_diagonale();
        Mission* get_mission_depot_base_verticale();

};

#endif // GESTIONNAIRE_MISSION_H
