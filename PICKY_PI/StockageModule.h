#ifndef STOCKAGEMODULE_H
#define STOCKAGEMODULE_H

#include <iostream>

#include "Module.h"


using namespace std;

class StockageModule
{
    public:
        StockageModule();

        // getter
        bool is_stockage_empty();
        bool is_stockage_full();

        bool is_color_polychrome();
        bool is_color_monochrome();

        // setter
        void catch_polychrome();
        void catch_monochrome();
        void release();

        Module get_module();







    protected:
        // on suppose que l'on prend uniquement des modules interresant
        bool presence_module;
        bool color_monochrome;
        bool color_polychrome;

        void set_color_to_polychrome();
        void set_color_to_monochrome();
        void set_stockage_empty();
        void set_stockage_full();


    private:



};

#endif // STOCKAGEMODULE_H
