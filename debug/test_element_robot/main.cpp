#include <iostream>

#include "../../PICKY_PI/Element_Robot.h"

using namespace std;

int main()
{
    cout << "test_element_robot" << endl;


    Element_Robot* element_Picky;
    element_Picky = new Element_Robot();

    cout << "int ..." << endl<<endl;
    element_Picky->display_element();



    cout << "claw_catch_monochrome" << endl;
    element_Picky->get_stockage_CLAW()->catch_monochrome();
    element_Picky->display_element();


    cout << "claw_release" << endl;
    element_Picky->get_stockage_CLAW()->release();
    element_Picky->display_element();



    cout << "claw_catch_polychrome" << endl;
    element_Picky->get_stockage_CLAW()->catch_polychrome();
    element_Picky->display_element();

/*
    cout << "transfert claw_L" << endl;
    element_Picky->claw_to_stock_L();
    element_Picky->display_element();
*/

    cout << "transfert to stock auto" << endl;
    cout << "where to stock??? : #" << element_Picky->where_to_stock()<< endl;
    element_Picky->claw_to_stock(element_Picky->where_to_stock());
    element_Picky->display_element();


    cout << "claw_catch_polychrome" << endl;
    element_Picky->get_stockage_CLAW()->catch_polychrome();
    element_Picky->display_element();

/*
    cout << "transfert claw_L" << endl;
    element_Picky->claw_to_stock_L();
    element_Picky->display_element();
*/

    cout << "transfert to stock auto" << endl;
    cout << "where to stock??? : #" << element_Picky->where_to_stock()<< endl;
    element_Picky->claw_to_stock(element_Picky->where_to_stock());
    element_Picky->display_element();



    cout << "claw_catch_monochrome" << endl;
    element_Picky->get_stockage_CLAW()->catch_monochrome();
    element_Picky->display_element();

    cout << "transfert to stock auto" << endl;
    cout << "where to stock??? : #" << element_Picky->where_to_stock()<< endl;
    element_Picky->claw_to_stock(element_Picky->where_to_stock());
    element_Picky->display_element();

    cout << "transfert to claw" << endl;
    cout << "where to pick up, random??? : #" << element_Picky->where_to_pick_up()<< endl;
    element_Picky->stock_to_claw(element_Picky->where_to_pick_up());
    element_Picky->display_element();

    cout << "transfert to claw" << endl;
    cout << "where to pick up, monochrome??? : #" << element_Picky->where_to_pick_up_monochrome()<< endl;
    element_Picky->stock_to_claw(element_Picky->where_to_pick_up_monochrome());
    element_Picky->display_element();


    cout << "vidange tot" << endl;
    element_Picky->vidange_totale();
    element_Picky->display_element();


    return 0;

}
