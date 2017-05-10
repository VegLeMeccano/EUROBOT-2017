#include <iostream>

#include "../../PICKY_PI/Plateau_jeu.h"
#include "../../PICKY_PI/Element_Robot.h"
#include "../../PICKY_PI/Gestionnaire_Mission.h"


using namespace std;

int main()
{
    Plateau_jeu* plateau_jeu;
    plateau_jeu = new Plateau_jeu();


    //plateau_jeu->get_module_central_4()->remove();
/*
    plateau_jeu->get_module_central_1()->remove();
    plateau_jeu->get_module_central_2()->remove();
    plateau_jeu->get_module_central_3()->remove();
    plateau_jeu->get_distributeur_monochrome()->remove_from_below();
*/

    Element_Robot* element_robot;
    element_robot = new Element_Robot();

/*
    element_robot->get_stockage_CLAW()->catch_monochrome();
    element_robot->claw_to_stock(element_robot->where_to_stock());
    element_robot->get_stockage_CLAW()->catch_monochrome();
    element_robot->claw_to_stock(element_robot->where_to_stock());
    element_robot->get_stockage_CLAW()->catch_monochrome();
    element_robot->claw_to_stock(element_robot->where_to_stock());

    element_robot->get_stockage_CLAW()->catch_monochrome();
    element_robot->claw_to_stock(element_robot->where_to_stock());
    //element_robot->get_stockage_CLAW()->catch_monochrome();
*/
    /// plateau_jeu->display();
    /// element_robot->display();

/*
    plateau_jeu->get_depose_module_zone_depart()->add_module(element_robot->get_stockage_C()->get_module());
    element_robot->get_stockage_C()->release();

    if(!element_robot->claw_available())
    {
        plateau_jeu->get_depose_module_zone_depart()->add_module(element_robot->get_stockage_CLAW()->get_module());
        element_robot->get_stockage_CLAW()->release();
    }


    plateau_jeu->display();
    element_robot->display();
*/

    element_robot->get_stockage_CLAW()->catch_monochrome();
    element_robot->claw_to_stock(element_robot->where_to_stock());

    Gestionnaire_Mission* gestionnaire_mission;
    gestionnaire_mission = new Gestionnaire_Mission(plateau_jeu, element_robot);
    //gestionnaire_mission->set_yellow();
    gestionnaire_mission->set_blue();
    //gestionnaire_mission->affiche_mission_active();


    //gestionnaire_mission->get_mission_collecte_module_centraux_initiale()->mission_remplie();
    //gestionnaire_mission->get_mission_collecte_module_centraux_restant()->mission_remplie();
    //gestionnaire_mission->get_mission_collecte_distributeur_monochrome()->mission_remplie();

    //gestionnaire_mission->get_mission_push_cratere()->mission_remplie();
    //gestionnaire_mission->get_mission_push_distributeur_monochrome()->mission_remplie();
   // gestionnaire_mission->get_mission_transfert_direct_distributeur_polychrome()->mission_remplie();

    //gestionnaire_mission->get_mission_drop_zone_depart()->mission_remplie();
   //gestionnaire_mission->get_mission_depot_base_diagonale()->mission_remplie();
    //gestionnaire_mission->get_mission_depot_base_verticale()->mission_remplie();


    gestionnaire_mission->set_coord(Coord(-602,1915,(360-90)*PI/180));
    gestionnaire_mission->decision_mission(90);
    //cout << "mission to do -> #" << gestionnaire_mission->decision_mission(90) << endl;




    gestionnaire_mission->set_coord(Coord(-602,1600,(360-90)*PI/180));
    gestionnaire_mission->set_coord_ennemi(Coord(-600,1000,0));
    gestionnaire_mission->evitement_mission();
    gestionnaire_mission->decision_mission(90);
    //gestionnaire_mission->decision_mission(90);


/*
    plateau_jeu->get_depose_module_base_centrale_diagonale()->add_module_polychrome();
    plateau_jeu->get_depose_module_base_centrale_diagonale()->add_module_polychrome();
    plateau_jeu->get_depose_module_base_centrale_diagonale()->add_module_polychrome();
    gestionnaire_mission->get_mission_collecte_module_centraux_initiale()->mission_remplie();


    gestionnaire_mission->set_coord(Coord(-600,1800,0));
    cout << "mission to do -> #" << gestionnaire_mission->decision_mission(65) << endl;

    element_robot->get_stockage_CLAW()->catch_monochrome();
    element_robot->claw_to_stock(element_robot->where_to_stock());
    element_robot->get_stockage_CLAW()->catch_monochrome();

    gestionnaire_mission->set_coord(Coord(-600,1800,0));
    cout << "mission to do -> #" << gestionnaire_mission->decision_mission(40) << endl;

    plateau_jeu->get_depose_module_base_centrale_diagonale()->add_module_polychrome();
    plateau_jeu->get_depose_module_base_centrale_diagonale()->add_module_polychrome();
    element_robot->vidange_totale();

    plateau_jeu->display();
    element_robot->display();

    gestionnaire_mission->set_coord(Coord(-600,1800,0));
    cout << "mission to do -> #" << gestionnaire_mission->decision_mission(15) << endl;


gestionnaire_mission->get_mission_push_cratere()->mission_remplie();

    gestionnaire_mission->set_coord(Coord(-600,1800,0));
    cout << "mission to do -> #" << gestionnaire_mission->decision_mission(5) << endl;

    plateau_jeu->display();
    element_robot->display();

    */

/*
    gestionnaire_mission->evitement_mission();
    //gestionnaire_mission->affiche_mission_active();

    cout << "EVITEMENT PROVOQUE " <<endl<<endl;
    //gestionnaire_mission->set_coord(Coord(-600,1800,0));
    cout << "mission to do -> #" << gestionnaire_mission->decision_mission(15) << endl;
    //gestionnaire_mission->affiche_mission_active();
*/


    //cout << "Hello world!" << endl;
    return 0;
}
