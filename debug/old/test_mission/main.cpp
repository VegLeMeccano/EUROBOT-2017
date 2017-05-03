#include <iostream>



#include "../PICKY_MASTER_PI/Mission.h"
#include "../PICKY_MASTER_PI/Mission_Zone_Ennemie.h"
#include "../PICKY_MASTER_PI/Gestionnaire_Mission.h"

#include <vector>
using namespace std;

int main()
{

    /*
    cout << "Hello world!" <<true<< endl;
    Mission mission(true, 5, Coord(500,0,90),"basique");

    cout << "X : " <<mission.get_coord_debut_mission().get_x()<< endl;
    cout << "Y : " <<mission.get_coord_debut_mission().get_y()<< endl;
    cout << "CAP : " <<mission.get_coord_debut_mission().get_cap()<< endl;

    cout << "mission : " <<mission.is_accomplie()<< endl;
    mission.mission_remplie();
    cout << "mission : " <<mission.is_accomplie()<< endl;

    cout << "distance to mission : " <<mission.distance_to_mission(Coord(0,0,0))<< endl;
*/
/**
    Coord coord_reel(0,0,0);
    Mission_Zone_Ennemie mission_zone_ennemie(false);
    mission_zone_ennemie.set_couleur(1);
    mission_zone_ennemie.affiche();
    cout << "distance to mission : " <<mission_zone_ennemie.distance_to_mission(coord_reel)<< endl;
*/
/**
    Coord coord_reel(0,0,0);
    Mission_Zone_Ennemie* mission_zone_ennemie;
    mission_zone_ennemie = new Mission_Zone_Ennemie(false);
    mission_zone_ennemie->set_couleur(1);
    mission_zone_ennemie->affiche();
    cout << "distance to mission : " <<mission_zone_ennemie->distance_to_mission(coord_reel)<< endl;
*/

    Gestionnaire_Mission* gestionnaire;
    gestionnaire = new Gestionnaire_Mission();

    /**
    gestionnaire->set_coord(Coord(-1134,996,-90));
    gestionnaire->decision_mission();
    gestionnaire->evitement_mission();
    gestionnaire->decision_mission();

    gestionnaire->get_mission_claps()->mission_remplie();
    //gestionnaire->get_mission_distrib()->mission_remplie();
    gestionnaire->get_element_robot()->gobelet_saisie();
    gestionnaire->decision_mission();

    gestionnaire->get_element_robot()->pop_corn_aspire();
    gestionnaire->get_mission_distrib()->netoyage_zone_done();
    //gestionnaire->get_mission_chiage_balle()->mission_remplie();
    //gestionnaire->get_mission_claps()->mission_remplie();
    //gestionnaire->get_mission_distrib()->mission_remplie();
    gestionnaire->set_coord(Coord(0,800,0));

    gestionnaire->decision_mission();
    gestionnaire->get_mission_chiage_balle()->mission_remplie();
    //gestionnaire->get_mission_chiage_balle()->mission_remplie();
    gestionnaire->decision_mission();


    gestionnaire->get_element_robot()->pile_droite_incr();
    gestionnaire->get_element_robot()->pile_droite_incr();
    gestionnaire->get_element_robot()->pile_droite_incr();
    gestionnaire->get_element_robot()->pile_droite_incr();

    gestionnaire->decision_mission();
    //gestionnaire->affiche_mission_active();
    //gestionnaire->get_mission_claps()->mission_remplie();

    //gestionnaire->affiche_mission_active();

    */
    gestionnaire->set_coord(Coord(-1134,996,-90));
    //gestionnaire->set_coord(Coord(0,0,-90));
    gestionnaire->decision_mission();
    //gestionnaire->evitement_mission();
    gestionnaire->get_element_robot()->pile_droite_incr();
    gestionnaire->get_element_robot()->pile_droite_incr();
    gestionnaire->get_element_robot()->pop_corn_aspire();
    gestionnaire->decision_mission();
    gestionnaire->get_mission_chiage_balle()->mission_remplie();
    gestionnaire->decision_mission();
    gestionnaire->get_mission_claps()->mission_remplie();
    gestionnaire->get_element_robot()->gobelet_saisie();
    gestionnaire->get_element_robot()->pile_droite_incr();
    gestionnaire->get_element_robot()->pile_droite_incr();
    gestionnaire->decision_mission();


/*
    Mission_Zone_Ennemie* mission_zone_ennemie;
    mission_zone_ennemie = new Mission_Zone_Ennemie(true);

    vector<float> vectorDistance;
    vectorDistance.push_back(0.1);
    vectorDistance.push_back(4.0);

    for (int index=0; index<vectorDistance.size(); index++) {
        cout << vectorDistance[index] << endl;
    }
*/





    return 0;


}
