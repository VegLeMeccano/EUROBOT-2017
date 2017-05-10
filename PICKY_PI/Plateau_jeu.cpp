#include "Plateau_jeu.h"

Plateau_jeu::Plateau_jeu():
    color_blue(true)
{
    distributeur_polychrome = new Distributeur(POLYCHROME,Coord(-1460,650,0));
    distributeur_monochrome = new Distributeur(MONOCHROME,Coord(-350,1960,0));
    module_centraux[0] = new Module(POLYCHROME,Coord(-500,1400,0));
    module_centraux[1] = new Module(POLYCHROME,Coord(-600,600,0));
    module_centraux[2] = new Module(POLYCHROME,Coord(-1000,900,0));
    module_centraux[3] = new Module(MONOCHROME,Coord(-1300,1400,0));
    module_centraux[4] = new Module(MONOCHROME,Coord(-700,150,0));

    cratere_zone_depart = new Cratere(5);

    depose_module_zone_depart = new Zone_depose_module(ZONE_DEPART,13); //no limit...
    depose_module_base_laterale = new Zone_depose_module(BASE_LUNAIRE,4);
    depose_module_base_centrale_diagonale = new Zone_depose_module(BASE_LUNAIRE,5);
    depose_module_base_centrale_verticale = new Zone_depose_module(BASE_LUNAIRE,5);
    cout <<"[PLATEAU JEU] -> [INIT]" << endl;
}

Cratere* Plateau_jeu::get_cratere_zone_depart()
{
    return cratere_zone_depart;
}



void Plateau_jeu::set_color_blue()
{
 if(!color_blue)
 {
    set_color_yellow();
 }
}

// inversion des X (x -> -x)
void Plateau_jeu::set_color_yellow()
{
    if(color_blue)
    {
        color_blue = false;
        module_centraux[0]->switchX();
        module_centraux[1]->switchX();
        module_centraux[2]->switchX();
        module_centraux[3]->switchX();
        module_centraux[4]->switchX();
        distributeur_polychrome->switchX();
        distributeur_monochrome->switchX();
    }


}

void Plateau_jeu::display()
{
    //cout << "plateau de jeu " <<endl;
    cout <<"[PLATEAU JEU] -> [DEBUG]" << endl;
    cout <<"-----------------PLATEAU JEU--------------------" << endl;
    cout << "blue :  " << color_blue <<endl;
    for(int i = 0; i<5; i++)
    {
        cout << "[PRISE] Module Centraux #" << i << " [" << module_centraux[i]->is_present() << "/1] (" << module_centraux[i]->get_coord()->get_x() << " ; " << module_centraux[i]->get_coord()->get_y() << ")"<< endl ;
    }

    cout << "[PRISE] Distributeur Monochrome " <<  " [" << distributeur_monochrome->nb_module_available() << "/4] (" << distributeur_monochrome->get_coord()->get_x() << " ; " << distributeur_monochrome->get_coord()->get_y() << ")"<< endl ;
    cout << "[PRISE] Distributeur Polychrome " <<  " [" << distributeur_polychrome->nb_module_available() << "/4] (" << distributeur_polychrome->get_coord()->get_x() << " ; " << distributeur_polychrome->get_coord()->get_y() << ")"<< endl ;


    cout << "[DEPOT] Zone Depart " <<  "\t module -> [" << depose_module_zone_depart->nb_module_in_stock() << "/" << depose_module_zone_depart->nb_slot_available() << "] \t PTS ->  " << depose_module_zone_depart->point_marked() << endl ;
    cout << "[DEPOT] Base Laterale " <<  "\t module -> [" << depose_module_base_laterale->nb_module_in_stock() << "/" << depose_module_base_laterale->nb_slot_available() << "] \t PTS ->  " << depose_module_base_laterale->point_marked() << endl ;
    cout << "[DEPOT] Base Diagonale " <<  "\t module -> [" << depose_module_base_centrale_diagonale->nb_module_in_stock() << "/" << depose_module_base_centrale_diagonale->nb_slot_available() << "] \t PTS ->  " << depose_module_base_centrale_diagonale->point_marked() << endl ;
    cout << "[DEPOT] Base Verticale " <<  "\t module -> [" << depose_module_base_centrale_verticale->nb_module_in_stock() << "/" << depose_module_base_centrale_verticale->nb_slot_available() << "] \t PTS ->  " << depose_module_base_centrale_verticale->point_marked() << endl ;

   cout << "[CRATERE] Zone Depart " <<  "\t Roche -> [" << cratere_zone_depart->get_nb_sphere()*cratere_zone_depart->is_empty() << "/" << cratere_zone_depart->get_nb_sphere() << "] \t PTS ->  " << cratere_zone_depart->get_nb_sphere()*2*cratere_zone_depart->is_empty() << endl ;


    cout << "[PTS] total -> " <<  point_total() << " pts" << endl;
    cout <<"-----------------------------------------------" << endl<< endl;
}


int Plateau_jeu::point_total()
{
    return depose_module_zone_depart->point_marked() + depose_module_base_laterale->point_marked() + depose_module_base_centrale_diagonale->point_marked()+ depose_module_base_centrale_verticale->point_marked() + cratere_zone_depart->get_nb_sphere()*2*cratere_zone_depart->is_empty();
}



Distributeur* Plateau_jeu::get_distributeur_polychrome()
{
    return distributeur_polychrome;
}
Distributeur* Plateau_jeu::get_distributeur_monochrome()
{
    return distributeur_monochrome;
}
Module* Plateau_jeu::get_module_central_1()
{
    return module_centraux[0];
}
Module* Plateau_jeu::get_module_central_2()
{
    return module_centraux[1];
}
Module* Plateau_jeu::get_module_central_3()
{
    return module_centraux[2];
}
Module* Plateau_jeu::get_module_central_4()
{
    return module_centraux[3];
}
Module* Plateau_jeu::get_module_central_5()
{
    return module_centraux[4];
}


Zone_depose_module* Plateau_jeu::get_depose_module_zone_depart()
{
    return depose_module_zone_depart;
}
Zone_depose_module* Plateau_jeu::get_depose_module_base_laterale()
{
    return depose_module_base_laterale;
}
Zone_depose_module* Plateau_jeu::get_depose_module_base_centrale_diagonale()
{
    return depose_module_base_centrale_diagonale;
}
Zone_depose_module* Plateau_jeu::get_depose_module_base_centrale_verticale()
{
    return depose_module_base_centrale_verticale;
}
