#include <iostream>

#include "../../PICKY_MASTER_PI/Plateau_jeu.h"
#include "../../PICKY_MASTER_PI/Element_Robot.h"
#include "../../PICKY_MASTER_PI/Gestionnaire_Mission.h"


using namespace std;

int main()
{
    Plateau_jeu* plateau_jeu;
    plateau_jeu = new Plateau_jeu();


    //plateau_jeu->get_module_central_4()->remove();

    plateau_jeu->get_module_central_1()->remove();
    plateau_jeu->get_module_central_2()->remove();
    plateau_jeu->get_module_central_3()->remove();
    plateau_jeu->get_distributeur_monochrome()->remove_from_below();


    Element_Robot* element_robot;
    element_robot = new Element_Robot();

    element_robot->get_stockage_CLAW()->catch_monochrome();
    element_robot->claw_to_stock(element_robot->where_to_stock());
    element_robot->get_stockage_CLAW()->catch_monochrome();
    element_robot->claw_to_stock(element_robot->where_to_stock());
    element_robot->get_stockage_CLAW()->catch_monochrome();
    element_robot->claw_to_stock(element_robot->where_to_stock());

    //element_robot->get_stockage_CLAW()->catch_monochrome();

    plateau_jeu->display();
    element_robot->display();



    Gestionnaire_Mission* gestionnaire_mission;
    gestionnaire_mission = new Gestionnaire_Mission(plateau_jeu, element_robot);
    gestionnaire_mission->set_yellow();
    //gestionnaire_mission->affiche_mission_active();

    gestionnaire_mission->set_coord(Coord(-600,1800,0));
    cout << "mission to do -> #" << gestionnaire_mission->decision_mission(2) << endl;

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
