#include "Compteur.h"

Compteur::Compteur():
    cpt(0)
{
    //ctor
    reset();
}


void Compteur::incremente()
{
    cpt++;
}

void Compteur::reset()
{
    cpt = 0;
}

int Compteur::get_compte()
{
    return cpt;
}
