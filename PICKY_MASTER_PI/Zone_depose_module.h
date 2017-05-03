#ifndef ZONE_DEPOSE_MODULE_H
#define ZONE_DEPOSE_MODULE_H

#include "Module.h"

#define BASE_LUNAIRE 0
#define ZONE_DEPART 1

#define PTS_PER_MODULE_BASE_LUNAIRE 10
#define PTS_PER_MODULE_ZONE_DEPART 2

#define MAXIMAX 13


class Zone_depose_module
{
    public:
        Zone_depose_module(int locate_, int nb_max_);


        void add_module(Module module_to_add);

        bool is_full();

        int nb_slot_available();

        int nb_module_in_stock();
        int nb_module_monochrome_in_stock();
        int nb_module_polychrome_in_stock();

        int point_marked();


    protected:

    private:
        Module *module_in_stock[MAXIMAX];
        int nb_slot_max;
        int locate;

        Coord coord;


};

#endif // ZONE_DEPOSE_MODULE_H
