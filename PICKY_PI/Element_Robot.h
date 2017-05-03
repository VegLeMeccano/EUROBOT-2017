#ifndef ELEMENT_ROBOT_H
#define ELEMENT_ROBOT_H

#include "StockageModule.h"

#include <iostream>
using namespace std;

#define NB_MAX_MODULE_ROBOT 4

#define STOCK_L 0
#define STOCK_C 1
#define STOCK_R 2


class Element_Robot
{
    private:

        // Stockage
        /*
        StockageModule stockage_L;
        StockageModule stockage_C;
        StockageModule stockage_R;
*/
        StockageModule stockage_CLAW;

        StockageModule *stockageModule[3];





    public:
        Element_Robot();

        void display();
        void display_element();
        bool is_presence_element();

        StockageModule* get_stockage_L();
        StockageModule* get_stockage_C();
        StockageModule* get_stockage_R();
        StockageModule* get_stockage_CLAW();

        int nb_module_present();
        int nb_slot_available();

// available
        bool claw_available();
        bool stockage_available();

        // transfert
        void claw_to_stock_L();
        void claw_to_stock_C();
        void claw_to_stock_R();

        void stock_L_to_claw();
        void stock_C_to_claw();
        void stock_R_to_claw();

        void vidange_stock();
        void vidange_claw();

        void vidange_totale();


// a utiliser pour les transferrts automatique
        bool can_be_stocked();
        int where_to_stock();
        void claw_to_stock(int indice_);

        bool can_be_picked_up();
        int where_to_pick_up();
        int where_to_pick_up_monochrome();
        int where_to_pick_up_polychrome();
        void stock_to_claw(int indice_);






};

#endif // ELEMENT_ROBOT_H
