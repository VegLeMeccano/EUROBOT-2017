#ifndef PLATEAU_JEU_H
#define PLATEAU_JEU_H

#include "Distributeur.h"
#include "Module.h"
#include "Zone_depose_module.h"
#include "Cratere.h"

// par defaut en blue

class Plateau_jeu
{
    public:
        Plateau_jeu();

        void set_color_blue();
        void set_color_yellow();

        Distributeur* get_distributeur_polychrome();
        Distributeur* get_distributeur_monochrome();
        Module* get_module_central_1();
        Module* get_module_central_2();
        Module* get_module_central_3();
        Module* get_module_central_4();
        Module* get_module_central_5();

        Zone_depose_module* get_depose_module_zone_depart();
        Zone_depose_module* get_depose_module_base_laterale();
        Zone_depose_module* get_depose_module_base_centrale_diagonale();
        Zone_depose_module* get_depose_module_base_centrale_verticale();

        Cratere* get_cratere_zone_depart();

        int point_total();



        // check on zone de dépose
        int evaluation_marked_point();


        void display();

    protected:

    private:
        Distributeur *distributeur_polychrome;
        Distributeur *distributeur_monochrome;
        Module *module_centraux[5];

        Zone_depose_module *depose_module_zone_depart;
        Zone_depose_module *depose_module_base_laterale;
        Zone_depose_module *depose_module_base_centrale_diagonale;
        Zone_depose_module *depose_module_base_centrale_verticale;

        Cratere *cratere_zone_depart;


        bool color_blue;
        //bool cratere_zone_depart;

};

#endif // PLATEAU_JEU_H
