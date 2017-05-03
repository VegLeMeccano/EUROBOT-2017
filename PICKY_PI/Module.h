#ifndef MODULE_H
#define MODULE_H

#include <iostream>
#include "Coord.h"

#define POLYCHROME true
#define MONOCHROME false

using namespace std;


class Module
{
    public:
        Module();
        Module(Coord coord_);
        Module(bool polychrome_);
        Module(bool polychrome_, Coord coord_);
        void set_remove();
        void remove();
        void add();
        bool is_present();
        Coord* get_coord();

        void set_polychrome();
        void set_monochrome();

        bool is_polychrome();
        bool is_monochrome();

        void display();

        void switchX();

    protected:

    private:
        bool presence;
        bool polychrome;
        bool monochrome;
        Coord coord;


};

#endif // MODULE_H
