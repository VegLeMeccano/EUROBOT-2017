#include <iostream>
#include "../../PICKY_PI/Module.h"
#include "../../PICKY_PI/Distributeur.h"
#include "../../PICKY_PI/Plateau_jeu.h"

using namespace std;

int main()
{
    /**** test module seul ****/
    /*
    Module* modulePoychrome_1;
    modulePoychrome_1 = new Module(true,Coord(1,1,0));

    modulePoychrome_1->display();

    modulePoychrome_1->set_remove();
    modulePoychrome_1->display();

*/


    /**** test distributeur seul ****/

    /*
    Distributeur* distrib_polychrome;
    //distrib_polychrome = new Distributeur(MONOCHROME,Coord(1,1,0));
    distrib_polychrome = new Distributeur(POLYCHROME,Coord(1,1,0));
    distrib_polychrome->display();


    cout << "remove 1" <<endl;
    distrib_polychrome->remove_from_below();
    distrib_polychrome->display();

    cout << "remove 1" <<endl;
    distrib_polychrome->remove_from_below();
    distrib_polychrome->display();

    cout << "remove 1" <<endl;
    distrib_polychrome->remove_from_below();
    distrib_polychrome->display();

    cout << "remove 1" <<endl;
    distrib_polychrome->remove_from_below();
    distrib_polychrome->display();

    cout << "remove 1" <<endl;
    distrib_polychrome->remove_from_below();
    distrib_polychrome->display();
*/

    Plateau_jeu* plateau;
    plateau = new Plateau_jeu();
    plateau->set_color_blue();
    plateau->display();


    plateau->set_color_yellow();
    plateau->display();

    plateau->get_distributeur_monochrome()->remove_from_below();
    plateau->get_module_central_1()->remove();
    plateau->display();

    plateau->get_depose_module_zone_depart()->is_full();
    plateau->get_depose_module_zone_depart()->add_module(Module(POLYCHROME));
    plateau->get_depose_module_zone_depart()->add_module(Module(POLYCHROME));
    plateau->get_depose_module_zone_depart()->add_module(Module(POLYCHROME));
    plateau->get_depose_module_zone_depart()->add_module(Module(POLYCHROME));

    plateau->get_depose_module_base_laterale()->add_module(Module(POLYCHROME));
    plateau->get_depose_module_base_laterale()->add_module(Module(POLYCHROME));
    plateau->get_depose_module_base_laterale()->add_module(Module(POLYCHROME));
    plateau->get_depose_module_base_laterale()->add_module(Module(POLYCHROME));


     plateau->get_cratere_zone_depart()->vidange();

    plateau->display();





    return 0;
}
