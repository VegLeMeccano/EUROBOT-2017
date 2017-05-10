#include "Cratere.h"

Cratere::Cratere(int nb_sphere_):
    nb_sphere(nb_sphere_),
    transfert_marked(false)
{
    //ctor
}



void Cratere::vidange()
{
    transfert_marked = true;
}

bool Cratere::is_empty()
{
    return transfert_marked;
}

int Cratere::get_nb_sphere()
{
        return nb_sphere;
}
