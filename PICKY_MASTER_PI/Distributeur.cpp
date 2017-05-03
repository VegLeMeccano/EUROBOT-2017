#include "Distributeur.h"

Distributeur::Distributeur():
    coord()
{
    for(int i=0 ; i<NB_MODULE_DISTRIBUTEUR ; i++)
    {
          module[i] = new Module();
    }
}

Distributeur::Distributeur(Coord coord_):
    coord(coord_.get_x(),coord_.get_y(),0)
{
    for(int i=0 ; i<NB_MODULE_DISTRIBUTEUR ; i++)
    {
          module[i] = new Module(coord_);
    }
}

Distributeur::Distributeur(bool polychrome_, Coord coord_):
    coord(coord_.get_x(),coord_.get_y(),0)
{
    for(int i=0 ; i<NB_MODULE_DISTRIBUTEUR ; i++)
    {
          module[i] = new Module(polychrome_, coord_);
    }
}


bool Distributeur::is_empty()
{
    if(nb_module_available()>0)
    {
        return false;
    }
    else{
        return true;
    }
}


int Distributeur::nb_module_available()
{
    int cpt = 0;
    for(int i=0 ; i<NB_MODULE_DISTRIBUTEUR ; i++)
    {
        if(module[i]->is_present())
        {
            cpt++;
        }
    }
    return cpt;
}


void Distributeur::remove_from_below()
{
    if(is_empty())
    {
            // do nothing... already empty dude!
    }
    else{
        int i = 0;
        while(i<NB_MODULE_DISTRIBUTEUR && !module[i]->is_present())
        {
            i++;
        }
        module[i]->set_remove();
    }
}


Coord* Distributeur::get_coord()
{
    return &coord;
}

void Distributeur::switchX()
{
    for(int i=0 ; i<NB_MODULE_DISTRIBUTEUR ; i++)
    {
        module[i]->switchX();
    }
    coord.set_x(-coord.get_x());

}


void Distributeur::display()
{
    cout << "nb module : " << nb_module_available() << endl;
    for(int i=0 ; i<NB_MODULE_DISTRIBUTEUR ; i++)
    {
        module[i]->display();
    }
}
