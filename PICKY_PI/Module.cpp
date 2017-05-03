#include "Module.h"

Module::Module():
    coord(0,0,0),
    presence(true),
    polychrome(false),
    monochrome(false)
{
    //ctor
}

Module::Module(Coord coord_):
    coord(coord_.get_x(),coord_.get_y(),0),
    presence(true),
    polychrome(false),
    monochrome(false)
{
    //ctor
}

Module::Module(bool polychrome_):
    coord(0,0,0),
    presence(true),
    polychrome(false),
    monochrome(false)
{
    if(polychrome_){
        set_polychrome();
    }
    else{
        set_monochrome();
    }
}

Module::Module(bool polychrome_, Coord coord_):
    coord(coord_.get_x(),coord_.get_y(),0),
    presence(true),
    polychrome(false),
    monochrome(false)
{
    if(polychrome_){
        set_polychrome();
    }
    else{
        set_monochrome();
    }
}



void Module::set_polychrome()
{
    polychrome = true;
    monochrome = false;
}
void Module::set_monochrome()
{
    polychrome = false;
    monochrome = true;
}

bool Module::is_polychrome()
{
    return polychrome;
}
bool Module::is_monochrome()
{
    return monochrome;
}


void Module::set_remove()
{
    presence = false;
}

void Module::add()
{
    presence = true;
}

void Module::remove()
{
    presence = false;
}

bool Module::is_present()
{
    return presence;
}

Coord* Module::get_coord()
{
    return &coord;
}

void Module::display()
{
    cout <<"[module] (presence : " << is_present() << " ) (P:" << is_polychrome() <<") (coord : " << get_coord()->get_x() << " ; " << get_coord()->get_y() << " )"<< endl;
}

void Module::switchX()
{
    get_coord()->set_x(-get_coord()->get_x());
}

