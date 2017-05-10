#include "Master.h"


/********************************************************
                MASTER
*********************************************************/
Master::Master(int portSerie_):
    periode_run(PERIODE_MASTER),
    period_jeu(PERIODE_JEU),
    time_out_on(false),
    t_over(0),
    color_blue(true),
    portSerie(portSerie_)
{
	compteur = new Compteur();
    element_robot = new Element_Robot();
    plateau_jeu = new Plateau_jeu();
    gestionnaire_mission = new Gestionnaire_Mission(plateau_jeu, element_robot);

    //mae_murphy.create();
    mae_picky.create();
    cout << "[MASTER_PICKY] initialisation" << endl;
}

Compteur* Master::get_compteur()
{
	return compteur;
}

/**************************************************************************
                RUN
**************************************************************************/
// boucle de controle du master
void Master::run()
{
    if(periode_run.is_over())
        {
            periode_run.reset();

            // execution des instructions
            get_mae_picky()->doActivity();

            // les transistions autre que time_out provienne du protocole de COM par ordre retour

            // check les time out
            if(is_time_out())
            {
                get_mae_picky()->time_out();
            }

            /** appel du protocol de COM
                - adversaire
                - assFini
                - ioFini
            */

        }
}



void Master::decision_nouvelle_mission()
{
    int new_mission = get_gestionnaire_mission()->decision_mission((PERIODE_JEU - period_jeu.time_elapsed())/1000); // temps restant en seconde
    switch(new_mission)
    {
        case MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE:
            get_mae_picky()->mission_collecte_module_centraux_initiale();
        break;

        case MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT:
            get_mae_picky()->mission_collecte_module_centraux_restant();
        break;

		case MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME:
            get_mae_picky()->mission_collecte_distributeur_monochrome();
        break;

        case MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME:
            get_mae_picky()->mission_transfert_direct_distributeur_polychrome();
        break;

        case MISSION_PUSH_DISTRIBUTEUR_MONOCHROME:
            get_mae_picky()->mission_push_distributeur_monochrome();
        break;

        case MISSION_PUSH_CRATERE:
            get_mae_picky()->mission_push_cratere();
        break;

        case MISSION_DROP_ZONE_DEPART:
            get_mae_picky()->mission_drop_zone_depart();
        break;

        case MISSION_DEPOT_BASE_DIAGONALE:
            get_mae_picky()->mission_depot_base_diagonale();
        break;

        case MISSION_DEPOT_BASE_VERTICALE:
            get_mae_picky()->mission_depot_base_verticale();
        break;

        case -1:
            get_mae_picky()->recall();
        break;

    }



}

/**************************************************************************
                PORT SERIE
**************************************************************************/
int Master::getPortSerie()
{
    return portSerie;
}


/**************************************************************************
                COLOR
**************************************************************************/
void Master::set_blue()
{
    color_blue = true;
    get_plateau_jeu()->set_color_blue();
	get_gestionnaire_mission()->set_blue();

}

void Master::set_yellow()
{
    color_blue = false;
    get_plateau_jeu()->set_color_yellow();
	get_gestionnaire_mission()->set_yellow();
}


// la strat est elle bleu
bool Master::is_blue()
{
    return color_blue;
}

// jaune?
bool Master::is_yellow()
{
    return !color_blue;
}

/**************************************************************************
                GETTER
**************************************************************************/
MAE_PICKY* Master::get_mae_picky()
{
    return  &mae_picky;
}

Gestionnaire_Mission* Master::get_gestionnaire_mission()
{
    return gestionnaire_mission;
}

Gestionnaire_Mission* Master::get_gestionnaire()
{
    return gestionnaire_mission;
}

Plateau_jeu* Master::get_plateau_jeu()
{
    return plateau_jeu;
}

Element_Robot* Master::get_element_robot()
{
    return element_robot;
}


/**************************************************************************
                TIME GESTION
**************************************************************************/
// tempo
void Master::set_time_out(int dt_)
{
    t_over = millis() + dt_;
    time_out_on = true;
}

// reset time out
void Master::reset_time_out()
{
    time_out_on = false;
}

// es ce que c'est fini
bool Master::is_time_out()
{
   if (time_out_on && t_over < millis())
   {
     time_out_on = false;
     //cout<<"time in "<< millis()<<endl;
     return true;
   }
   return false;
}

/***
    periode 90S
    **/
void Master::start_compteur_periode()
{
    period_jeu.reset();
}

