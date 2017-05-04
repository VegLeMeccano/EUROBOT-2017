#include "Mission.h"

Mission::Mission(int mission_nb_, Plateau_jeu* plateau_jeu_, Element_Robot* element_robot_):
        coord_debut_mission(),
        status(MISSION_TO_DO),        // statu de la mission
        mission_faite(false),
        title(),
        priorite(PRIORITE_MISSION_NORMAL),
        color_blue(true),
        mission_nb(mission_nb_),
        mission_active(true),
        plateau_jeu(plateau_jeu_),
        element_robot(element_robot_),
        time_to_achieve_mission(0),
        ratio_pts_tps(0),
        nbr_pts(0),
        temps_restant(90)
{
    //ctor
    reset();
    //set_yellow();
}

void Mission::set_temps_restant(long temps_restant_)
{
    temps_restant = temps_restant_;
    refresh_status();
}


/*************************************************************************
            COLOR
*************************************************************************/
void Mission::set_blue()
{
    color_blue = true;
    reset();
}

void Mission::set_yellow()
{
    color_blue = false;
    reset();
}

/*************************************************************************
            RESET
*************************************************************************/
void Mission::reset()
{
    switch(mission_nb)
    {
            case MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE:
                title = "COLLECT_CENTR_INIT";
                coord_debut_mission = Coord(-606,1781,-90*PI/180.0);
            break;

            case MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT:
                title = "COLLECT_CENTR_REST";
                coord_debut_mission = Coord(-943,887,120*PI/180.0);
            break;

            case MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME:
                title = "COLLECT_DISTRIB_MONO";
                coord_debut_mission = Coord(-350,1779,90*PI/180.0);
            break;

            case MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME:
                title = "TRANSF_DISTRIB_POLY";
                coord_debut_mission = Coord(-1262,695,180*PI/180.0);
            break;

            case MISSION_PUSH_DISTRIBUTEUR_MONOCHROME:
                title = "PUSH_DISTRIB_MONOC";
                coord_debut_mission = Coord(-350,1779,90*PI/180.0);
            break;

            case MISSION_PUSH_CRATERE:
                title = "PUSH_CRATERE       ";
                coord_debut_mission = Coord(-750,1134,90*PI/180.0);
            break;

            case MISSION_DROP_ZONE_DEPART:
                title = "DROP_ZONE_DEPART";
                coord_debut_mission = Coord(-1260,1781,90*PI/180.0);
            break;

            case MISSION_DEPOT_BASE_DIAGONALE:
                title = "DEPOT_BASE_DIAGONAL";
                coord_debut_mission = Coord(-700,700,240*PI/180.0);
            break;

            case MISSION_DEPOT_BASE_VERTICALE:
                title = "DEPOT_BASE_VERTICAL";
                coord_debut_mission = Coord(0,960,-90*PI/180.0);
            break;
    }
    if(!color_blue)
    {
        coord_debut_mission.set_x(-coord_debut_mission.get_x());

        if(coord_debut_mission.get_cap() <= PI)
        {
            coord_debut_mission.set_cap((float)(PI - coord_debut_mission.get_cap()));
        }
        else
        {
            coord_debut_mission.set_cap(PI*3 - coord_debut_mission.get_cap());
        }

    }
}

/*************************************************************************
            PRIORITE
*************************************************************************/
void Mission::set_priorite(int priorite_)
{
    priorite = priorite_;
}

int Mission::get_priorite()
{
    return priorite;
}


Coord Mission::get_coord_debut_mission()
{
    return coord_debut_mission;
}


void Mission::set_priorite_evitement()
{
    priorite = PRIORITE_MISSION_EVITEMENT;
}

void Mission::set_priorite_normal()
{
    priorite = PRIORITE_MISSION_NORMAL;
}
bool Mission::is_priorite_evitement()
{
    return priorite == PRIORITE_MISSION_EVITEMENT;
}

bool Mission::is_priorite_normal()
{
    return priorite == PRIORITE_MISSION_NORMAL;
}

/*************************************************************************
            ON:OFF
*************************************************************************/
bool Mission::is_accomplie()
{
    return mission_faite;
}


void Mission::mission_remplie()
{
    cout<<title<<" -> remplie"<<endl;
    mission_faite = true;
    desactivation();
}


bool Mission::is_on()
{
    return mission_active;
}

bool Mission::is_off()
{
    return !mission_active;
}

void Mission::activation()
{
    mission_active = true;
}
void Mission::desactivation()
{
    mission_active = false;
}


/*************************************************************************
            DISTANCE
*************************************************************************/
float Mission::distance_to_mission(Coord coord_reel)
{
    return Vector(coord_debut_mission,coord_reel).norm();
}

void Mission::set_coord_debut_mission(Coord coord_debut_mission_)
{
    coord_debut_mission = coord_debut_mission_;
}

/*************************************************************************
            DISPLAY
*************************************************************************/
void Mission::display()
{
    affiche();
}

void Mission::affiche()
{
    refresh_status();
    cout <<"#"<< mission_nb  ;
    cout <<" "<< title << "\ton:"<< !is_accomplie() << "\tt: "<< time_to_achieve_mission << " \tpts: "<< points_to_do() << "\tq:" <<setprecision(4)<<get_ratio_pts_tps();
    cout << "\t(" << coord_debut_mission.get_x() << ";" << coord_debut_mission.get_y()<<";" << coord_debut_mission.get_cap()*180/PI<<")"<<endl;



    /*<<endl;
    cout<<"Status  : "<<mission_faite<<endl;
    cout<<"Pts     : "<<nbr_pts<<endl;
    cout<<"Coord   : "<<get_coord_debut_mission().get_x()<<" "<<get_coord_debut_mission().get_y()<<" "<<get_coord_debut_mission().get_cap()<<endl;*/
}




int Mission::points_to_do()
{
    refresh_status();
    return nbr_pts;

}

float Mission::get_ratio_pts_tps()
{
    return ratio_pts_tps;
}

float Mission::get_time_to_realise()
{
    refresh_status();
    return time_to_achieve_mission;
}




void Mission::refresh_status()
{
    reset();
    float points = 0;
    int module_dispo = 0;
    int module_possible_tps_restant = 0;
    time_to_achieve_mission = 0;
    time_to_achieve_mission += TIME_OFFSET_DEBUT_MISSION; // pour le deplacement
    int cpt = 0;

    switch(mission_nb)
    {

            // modulo du temps restant....
            case MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE:
            module_possible_tps_restant = (int)(temps_restant/TIME_TO_CATCH_AND_STOCK_PER_MODULE);
            // si on a plus de place que de module => on les queshs tous!

            if(!is_accomplie() && !plateau_jeu->get_module_central_1()->is_present() && !plateau_jeu->get_module_central_2()->is_present() && !plateau_jeu->get_module_central_3()->is_present())
            {
                mission_remplie();
            }

            if((plateau_jeu->get_module_central_1()->is_present() + plateau_jeu->get_module_central_2()->is_present() + plateau_jeu->get_module_central_3()->is_present()) <= element_robot->nb_slot_available())
            {
                module_dispo = (plateau_jeu->get_module_central_1()->is_present() + plateau_jeu->get_module_central_2()->is_present() + plateau_jeu->get_module_central_3()->is_present());
                //module_dispo  = ;
                //points =                    module_dispo*PTS_PER_MODULE_BASE_LUNAIRE*POIDS_COLLECT_OVER_PLACEMENT;
                //time_to_achieve_mission +=  module_dispo*TIME_TO_CATCH_AND_STOCK_PER_MODULE;
            }

            // si on a moins de place...
            else
            {
                module_dispo = element_robot->nb_slot_available();
                //points =                    module_dispo*PTS_PER_MODULE_BASE_LUNAIRE*POIDS_COLLECT_OVER_PLACEMENT;
                //time_to_achieve_mission +=  module_dispo*TIME_TO_CATCH_AND_STOCK_PER_MODULE;

            }
            // comparer slot available dans le robot et ce qui ya de disp
            cpt = 0;
            while(( (cpt+1)*TIME_TO_CATCH_AND_STOCK_PER_MODULE + TIME_OFFSET_DEBUT_MISSION) < temps_restant  && cpt < module_dispo)
            {
                cpt++;
            }
            // on interdit de collecter si on est a la fin
            if(temps_restant < TIME_LIMIT_TO_COLLECT)
            {
                cpt = 0;
                time_to_achieve_mission = TIME_LIMIT_TO_COLLECT;
            }
            module_dispo = cpt;
            points =                    module_dispo*PTS_PER_MODULE_BASE_LUNAIRE*POIDS_COLLECT_OVER_PLACEMENT;
            time_to_achieve_mission +=  module_dispo*TIME_TO_CATCH_AND_STOCK_PER_MODULE;
            break;


            // modulo du temps restant....
            case MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT:
            if(!is_accomplie() && !plateau_jeu->get_module_central_4()->is_present() && !plateau_jeu->get_module_central_5()->is_present() )
            {
                mission_remplie();
            }

            if((plateau_jeu->get_module_central_4()->is_present() + plateau_jeu->get_module_central_5()->is_present()) <= element_robot->nb_slot_available())
            {
                module_dispo = plateau_jeu->get_module_central_4()->is_present() + plateau_jeu->get_module_central_5()->is_present() ;
                //points =                    module_dispo*PTS_PER_MODULE_BASE_LUNAIRE*POIDS_COLLECT_OVER_PLACEMENT;
                //time_to_achieve_mission +=  module_dispo*TIME_TO_CATCH_AND_STOCK_PER_MODULE;
            }
            // si on a moins de place...
            else
            {
                module_dispo = element_robot->nb_slot_available();
                //points =                    module_dispo*PTS_PER_MODULE_BASE_LUNAIRE*POIDS_COLLECT_OVER_PLACEMENT;
                //time_to_achieve_mission +=  module_dispo*TIME_TO_CATCH_AND_STOCK_PER_MODULE;
            }
            cpt = 0;
            while(( (cpt+1)*TIME_TO_CATCH_AND_STOCK_PER_MODULE + TIME_OFFSET_DEBUT_MISSION) < temps_restant && cpt < module_dispo)
            {
                cpt++;
            }

            // on interdit de collecter si on est a la fin
            if(temps_restant < TIME_LIMIT_TO_COLLECT)
            {
                cpt = 0;
                time_to_achieve_mission = TIME_LIMIT_TO_COLLECT;
            }
            module_dispo = cpt;
            points =                    module_dispo*PTS_PER_MODULE_BASE_LUNAIRE*POIDS_COLLECT_OVER_PLACEMENT;
            time_to_achieve_mission +=  module_dispo*TIME_TO_CATCH_AND_STOCK_PER_MODULE;

            break;

            // modulo du temps restant....
            case MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME:

            if(!is_accomplie() && plateau_jeu->get_distributeur_monochrome()->is_empty())
            {
                mission_remplie();
            }

            if(plateau_jeu->get_distributeur_monochrome()->nb_module_available() <= element_robot->nb_slot_available())
            {
                //points = plateau_jeu->get_distributeur_monochrome()->nb_module_available()*PTS_PER_MODULE_BASE_LUNAIRE;
                module_dispo = plateau_jeu->get_distributeur_monochrome()->nb_module_available();
                //points =                    module_dispo*PTS_PER_MODULE_BASE_LUNAIRE*POIDS_COLLECT_OVER_PLACEMENT;
                //time_to_achieve_mission +=  module_dispo*TIME_TO_CATCH_AND_STOCK_PER_MODULE;
            }
            // si on a moins de place...
            else
            {
                //points = element_robot->nb_slot_available()*PTS_PER_MODULE_BASE_LUNAIRE;
                module_dispo = element_robot->nb_slot_available();
                //points =                    module_dispo*PTS_PER_MODULE_BASE_LUNAIRE*POIDS_COLLECT_OVER_PLACEMENT;
                //time_to_achieve_mission +=  module_dispo*TIME_TO_CATCH_AND_STOCK_PER_MODULE;
            }
            cpt = 0;
            while((( cpt+1)*TIME_TO_CATCH_AND_STOCK_PER_MODULE + TIME_OFFSET_DEBUT_MISSION) < temps_restant && cpt < module_dispo)
            {
                cpt++;
            }

            // on interdit de collecter si on est a la fin
            if(temps_restant < TIME_LIMIT_TO_COLLECT)
            {
                cpt = 0;
                time_to_achieve_mission = TIME_LIMIT_TO_COLLECT;
            }

            module_dispo = cpt;
            points =                    module_dispo*PTS_PER_MODULE_BASE_LUNAIRE*POIDS_COLLECT_OVER_PLACEMENT;
            time_to_achieve_mission +=  module_dispo*TIME_TO_CATCH_AND_STOCK_PER_MODULE;
            break;


            // modulo du temps restant....
            case MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME:

                if(!is_accomplie() && plateau_jeu->get_distributeur_polychrome()->is_empty())
                {
                    mission_remplie();
                }

                if(element_robot->claw_available() || element_robot->nb_module_present()<=3)
                {
                    // on suppose qu'on drop rien d'autre
                    module_dispo = plateau_jeu->get_distributeur_polychrome()->nb_module_available();
                    //points =                    module_dispo*PTS_PER_MODULE_BASE_LUNAIRE;
                    //time_to_achieve_mission +=  module_dispo*TIME_FROM_DISTRIB_TO_BASE_PER_MODULE;
                }
                else{
                    points = 0;
                }
                cpt = 0;
                while(( (cpt+1)*TIME_FROM_DISTRIB_TO_BASE_PER_MODULE + TIME_OFFSET_DEBUT_MISSION) < temps_restant && cpt < module_dispo)
                {
                    cpt++;
                }
                module_dispo = cpt;
                points =                    module_dispo*PTS_PER_MODULE_BASE_LUNAIRE;
                time_to_achieve_mission +=  module_dispo*TIME_FROM_DISTRIB_TO_BASE_PER_MODULE;

            break;

            // modulo du temps restant...
            case MISSION_PUSH_DISTRIBUTEUR_MONOCHROME:

                if(!is_accomplie() && plateau_jeu->get_distributeur_monochrome()->is_empty())
                {
                    mission_remplie();
                }

                module_dispo = plateau_jeu->get_distributeur_monochrome()->nb_module_available();
                //points = plateau_jeu->get_distributeur_monochrome()->nb_module_available()*PTS_PER_MODULE_ZONE_DEPART;
                // pas forcement besoin d'avoir la pince de dispo... on peut quand meme fracasse...
                //time_to_achieve_mission += TIME_TO_PUSH_DISTRIB_PER_MODULE;
                cpt = 0;
                while(( (cpt+1)*TIME_TO_PUSH_DISTRIB_PER_MODULE + TIME_OFFSET_DEBUT_MISSION) < temps_restant && cpt <= module_dispo)
                {
                    cpt++;
                }
                module_dispo = cpt;
                points =                    module_dispo*PTS_PER_MODULE_ZONE_DEPART;
                time_to_achieve_mission +=  module_dispo*TIME_TO_PUSH_DISTRIB_PER_MODULE;
            break;

            // temps fixe
            case MISSION_PUSH_CRATERE:
                //besoin de le remplir a la main...
                points = 5*2;
                time_to_achieve_mission += TIME_TO_PUSH_CRATERE;
            break;

            // temps fixe
            case MISSION_DROP_ZONE_DEPART:
                points = element_robot->nb_module_present()*PTS_PER_MODULE_ZONE_DEPART;
                time_to_achieve_mission += TIME_TO_DROP;

            break;

            // modulo du temps restant...
            case MISSION_DEPOT_BASE_DIAGONALE:

                if(!is_accomplie() && plateau_jeu->get_depose_module_base_centrale_diagonale()->is_full())
                {
                    mission_remplie();
                }

                if(element_robot->nb_module_present()<=plateau_jeu->get_depose_module_base_centrale_diagonale()->nb_slot_available())
                {
                    module_dispo = element_robot->nb_module_present();
                    //points =                    module_dispo*PTS_PER_MODULE_BASE_LUNAIRE;
                    //time_to_achieve_mission +=  module_dispo*TIME_PLACE_MODULE_ON_BASE_PER_MODULE;
                }
                else
                {
                    module_dispo = plateau_jeu->get_depose_module_base_centrale_diagonale()->nb_slot_available();
                    //points =                    module_dispo*PTS_PER_MODULE_BASE_LUNAIRE;
                    //time_to_achieve_mission +=  module_dispo*TIME_PLACE_MODULE_ON_BASE_PER_MODULE;
                }
                cpt = 0;
                while(( (cpt+1)*TIME_PLACE_MODULE_ON_BASE_PER_MODULE + TIME_OFFSET_DEBUT_MISSION) < temps_restant && cpt <= module_dispo)
                {
                    cpt++;
                }
                module_dispo = cpt;
                points =                    module_dispo*PTS_PER_MODULE_BASE_LUNAIRE;
                time_to_achieve_mission +=  module_dispo*TIME_PLACE_MODULE_ON_BASE_PER_MODULE;


            break;

            // modulo du temps restant...
            case MISSION_DEPOT_BASE_VERTICALE:
                if(!is_accomplie() && plateau_jeu->get_depose_module_base_centrale_verticale()->is_full())
                {
                    mission_remplie();
                }

                if(element_robot->nb_module_present()<=plateau_jeu->get_depose_module_base_centrale_verticale()->nb_slot_available())
                {
                    module_dispo = element_robot->nb_module_present();
                    //points =                    module_dispo*PTS_PER_MODULE_BASE_LUNAIRE;
                    //time_to_achieve_mission +=  module_dispo*TIME_PLACE_MODULE_ON_BASE_PER_MODULE;
                }
                else
                {
                    module_dispo = plateau_jeu->get_depose_module_base_centrale_verticale()->nb_slot_available();
                    //points =                    module_dispo*PTS_PER_MODULE_BASE_LUNAIRE;
                    //time_to_achieve_mission +=  module_dispo*TIME_PLACE_MODULE_ON_BASE_PER_MODULE;
                }
                cpt = 0;
                while(((cpt+1)*TIME_PLACE_MODULE_ON_BASE_PER_MODULE  + TIME_OFFSET_DEBUT_MISSION)< temps_restant && cpt <= module_dispo)
                {
                    cpt++;
                }
                module_dispo = cpt;
                points =                    module_dispo*PTS_PER_MODULE_BASE_LUNAIRE;
                time_to_achieve_mission +=  module_dispo*TIME_PLACE_MODULE_ON_BASE_PER_MODULE;
            break;
    }

    ratio_pts_tps = points/time_to_achieve_mission;
    //cout << ratio_pts_tps << endl;
    nbr_pts =  points;
}



/*************************************************************************
            TITLE
*************************************************************************/
string Mission::get_title()
{
    return title;
}
