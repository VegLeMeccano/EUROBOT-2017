#ifndef DISTRIBUTEUR_H
#define DISTRIBUTEUR_H

#include <iostream>
#include "Coord.h"
#include "Module.h"

#define NB_MODULE_DISTRIBUTEUR 4

using namespace std;


class Distributeur
{
    public:
        Distributeur();
        Distributeur(Coord coord_);
        Distributeur(bool polychrome_, Coord coord_);

        bool is_empty();
        int nb_module_available();

        void remove_from_below();
        Coord* get_coord();
        void switchX();

        void display();

    protected:

    private:
        // contient 4 module, 1 premier en base, ... 4eme en haut
        Module *module[NB_MODULE_DISTRIBUTEUR];

        Coord coord;




};

#endif // DISTRIBUTEUR_H
