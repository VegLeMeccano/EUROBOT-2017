#include "Gestionnaire_Mission.h"




/********************************************************
    GESTIONNAIRE DE MISSION
*********************************************************/

Gestionnaire_Mission::Gestionnaire_Mission(Plateau_jeu* plateau_jeu_, Element_Robot* element_robot_):
        coord_reel(0,0,0),
        coord_ennemi(0,0,0),
        cap_to_mission(0),
        alignement_to_mission(false),
        premiere_entree_decision(true),
        distance_mission(0),
        plateau_jeu(plateau_jeu_),
        element_robot(element_robot_),
        color_blue(true),
        mission_collecte_module_centraux_initiale(MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE, plateau_jeu_, element_robot_),
        mission_collecte_module_centraux_restant(MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT, plateau_jeu_, element_robot_),
        mission_collecte_distributeur_monochrome(MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME, plateau_jeu_, element_robot_),
        mission_transfert_direct_distributeur_polychrome(MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME, plateau_jeu_, element_robot_),
        mission_push_distributeur_monochrome(MISSION_PUSH_DISTRIBUTEUR_MONOCHROME, plateau_jeu_, element_robot_),
        mission_push_cratere(MISSION_PUSH_CRATERE, plateau_jeu_, element_robot_),
        mission_drop_zone_depart(MISSION_DROP_ZONE_DEPART, plateau_jeu_, element_robot_),
        mission_depot_base_diagonale(MISSION_DEPOT_BASE_DIAGONALE, plateau_jeu_, element_robot_),
        mission_depot_base_verticale(MISSION_DEPOT_BASE_VERTICALE, plateau_jeu_, element_robot_),
        mission_en_cours(-1),
        mission_sortie_evitement(-1),
        temps_restant(90),
        vecteur_reel_ennemi(),
        vecteur_reel_mission()

{
    mission_depot_base_verticale.mission_remplie();
    //mission_collecte_module_centraux_restant.mission_remplie();
    //mission_collecte_distributeur_monochrome.mission_remplie();
    //mission_depot_base_diagonale.mission_remplie();

    cout << "[GESTIONNAIRE MISSION] -> [INIT BEGIN]" << endl;

    //display();
    affiche_mission_active();
    cout << "[GESTIONNAIRE MISSION] -> [INIT END]" << endl;

}

void Gestionnaire_Mission::display()
{
    mission_collecte_module_centraux_initiale.affiche();
    mission_collecte_module_centraux_restant.affiche();
    mission_collecte_distributeur_monochrome.affiche();
    mission_transfert_direct_distributeur_polychrome.affiche();
    mission_push_distributeur_monochrome.affiche();
    mission_push_cratere.affiche();
    mission_drop_zone_depart.affiche();
    mission_depot_base_diagonale.affiche();
    mission_depot_base_verticale.affiche();
}


/********************************************************
    PREMIERE MISSION
*********************************************************/
bool Gestionnaire_Mission::commencement()
{
    return premiere_entree_decision;
}

void Gestionnaire_Mission::commencement_end()
{
    premiere_entree_decision = false;
}


/********************************************************
    COORD
*********************************************************/
void Gestionnaire_Mission::set_coord(Coord coord_reel_)
{
    coord_reel = coord_reel_;
}

void Gestionnaire_Mission::set_coord_ennemi(Coord coord_reel_)
{
    coord_ennemi = coord_reel_;
}


Coord* Gestionnaire_Mission::get_coord_reel()
{
    return &coord_reel;
}

Coord* Gestionnaire_Mission::get_coord_ennemi()
{
    return &coord_ennemi;
}



/********************************************************
    DECISION MISSION
*********************************************************/
int Gestionnaire_Mission::decision_mission(long temps_restant_)
{
    temps_restant = temps_restant_; // en seconde

    mission_collecte_module_centraux_initiale.set_temps_restant(temps_restant);
    mission_collecte_module_centraux_restant.set_temps_restant(temps_restant);
    mission_collecte_distributeur_monochrome.set_temps_restant(temps_restant);
    mission_transfert_direct_distributeur_polychrome.set_temps_restant(temps_restant);
    mission_push_distributeur_monochrome.set_temps_restant(temps_restant);
    mission_push_cratere.set_temps_restant(temps_restant);
    mission_drop_zone_depart.set_temps_restant(temps_restant);
    mission_depot_base_diagonale.set_temps_restant(temps_restant);
    mission_depot_base_verticale.set_temps_restant(temps_restant);

    actualisation_Priorite();



    cout<<"[GESTIONNAIRE MISSION] -> [DECISION MISSION : BEGIN]"<<endl;

	plateau_jeu->display();
	element_robot->display();

	affiche_mission_active();



    /// recolte des données sur les missions, on prend seulement si la missions n'est pas remplie
    vector<float> vectorDistance;
    vector<string> vectorName;
    vector<int> vectorMission;
    vector<int> vectorPriorite;
    vector<float> vectorDecision;
    vector<float> vectorRatio_pts_temps;
    vector<float> vectorTimeToRealize;
    vector<float> vectorPtsToGet;


    if(!mission_collecte_module_centraux_initiale.is_accomplie()
       && mission_collecte_module_centraux_initiale.get_time_to_realise()< temps_restant
       && mission_collecte_module_centraux_initiale.is_priorite_normal()
       && mission_collecte_module_centraux_initiale.points_to_do() >0)
    {
        vectorMission.push_back(MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE);
        vectorName.push_back(mission_collecte_module_centraux_initiale.get_title());
        vectorDistance.push_back(mission_collecte_module_centraux_initiale.distance_to_mission(coord_reel));
        vectorPriorite.push_back(mission_collecte_module_centraux_initiale.get_priorite());
        vectorRatio_pts_temps.push_back(mission_collecte_module_centraux_initiale.get_ratio_pts_tps());
        vectorPtsToGet.push_back(mission_collecte_module_centraux_initiale.points_to_do());
        vectorTimeToRealize.push_back(mission_collecte_module_centraux_initiale.get_time_to_realise());
    }
    if(!mission_collecte_module_centraux_restant.is_accomplie()
       && mission_collecte_module_centraux_restant.get_time_to_realise()< temps_restant
       && mission_collecte_module_centraux_restant.is_priorite_normal()
       && mission_collecte_module_centraux_restant.points_to_do() >0)
    {
        vectorMission.push_back(MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT);
        vectorName.push_back(mission_collecte_module_centraux_restant.get_title());
        vectorDistance.push_back(mission_collecte_module_centraux_restant.distance_to_mission(coord_reel));
        vectorPriorite.push_back(mission_collecte_module_centraux_restant.get_priorite());
        vectorRatio_pts_temps.push_back(mission_collecte_module_centraux_restant.get_ratio_pts_tps());
        vectorPtsToGet.push_back(mission_collecte_module_centraux_restant.points_to_do());
        vectorTimeToRealize.push_back(mission_collecte_module_centraux_restant.get_time_to_realise());
    }

    if(!mission_collecte_distributeur_monochrome.is_accomplie()
       && mission_collecte_distributeur_monochrome.get_time_to_realise()< temps_restant
       && mission_collecte_distributeur_monochrome.is_priorite_normal()
       && mission_collecte_distributeur_monochrome.points_to_do() >0)
    {
        vectorMission.push_back(MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME);
        vectorName.push_back(mission_collecte_distributeur_monochrome.get_title());
        vectorDistance.push_back(mission_collecte_distributeur_monochrome.distance_to_mission(coord_reel));
        vectorPriorite.push_back(mission_collecte_distributeur_monochrome.get_priorite());
        vectorRatio_pts_temps.push_back(mission_collecte_distributeur_monochrome.get_ratio_pts_tps());
        vectorPtsToGet.push_back(mission_collecte_distributeur_monochrome.points_to_do());
        vectorTimeToRealize.push_back(mission_collecte_distributeur_monochrome.get_time_to_realise());
    }

    if(!mission_transfert_direct_distributeur_polychrome.is_accomplie()
       && mission_transfert_direct_distributeur_polychrome.get_time_to_realise()< temps_restant
       && mission_transfert_direct_distributeur_polychrome.is_priorite_normal()
       && mission_transfert_direct_distributeur_polychrome.points_to_do() >0)
    {
        vectorMission.push_back(MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME);
        vectorName.push_back(mission_transfert_direct_distributeur_polychrome.get_title());
        vectorDistance.push_back(mission_transfert_direct_distributeur_polychrome.distance_to_mission(coord_reel));
        vectorPriorite.push_back(mission_transfert_direct_distributeur_polychrome.get_priorite());
        vectorRatio_pts_temps.push_back(mission_transfert_direct_distributeur_polychrome.get_ratio_pts_tps());
        vectorPtsToGet.push_back(mission_transfert_direct_distributeur_polychrome.points_to_do());
        vectorTimeToRealize.push_back(mission_transfert_direct_distributeur_polychrome.get_time_to_realise());
    }

    if(!mission_push_distributeur_monochrome.is_accomplie()
       && mission_push_distributeur_monochrome.get_time_to_realise()< temps_restant
       && mission_push_distributeur_monochrome.is_priorite_normal()
       && mission_push_distributeur_monochrome.points_to_do() >0)
    {
        vectorMission.push_back(MISSION_PUSH_DISTRIBUTEUR_MONOCHROME);
        vectorName.push_back(mission_push_distributeur_monochrome.get_title());
        vectorDistance.push_back(mission_push_distributeur_monochrome.distance_to_mission(coord_reel));
        vectorPriorite.push_back(mission_push_distributeur_monochrome.get_priorite());
        vectorRatio_pts_temps.push_back(mission_push_distributeur_monochrome.get_ratio_pts_tps());
        vectorPtsToGet.push_back(mission_push_distributeur_monochrome.points_to_do());
        vectorTimeToRealize.push_back(mission_push_distributeur_monochrome.get_time_to_realise());
    }

    if(!mission_push_cratere.is_accomplie()
       && mission_push_cratere.get_time_to_realise()< temps_restant
       && mission_push_cratere.is_priorite_normal()
       && mission_push_cratere.points_to_do() >0)
    {
        vectorMission.push_back(MISSION_PUSH_CRATERE);
        vectorName.push_back(mission_push_cratere.get_title());
        vectorDistance.push_back(mission_push_cratere.distance_to_mission(coord_reel));
        vectorPriorite.push_back(mission_push_cratere.get_priorite());
        vectorRatio_pts_temps.push_back(mission_push_cratere.get_ratio_pts_tps());
        vectorPtsToGet.push_back(mission_push_cratere.points_to_do());
        vectorTimeToRealize.push_back(mission_push_cratere.get_time_to_realise());
    }

    if(!mission_drop_zone_depart.is_accomplie()
       && mission_drop_zone_depart.get_time_to_realise()< temps_restant
       && mission_drop_zone_depart.is_priorite_normal()
       && mission_drop_zone_depart.points_to_do() >0)
    {
        vectorMission.push_back(MISSION_DROP_ZONE_DEPART);
        vectorName.push_back(mission_drop_zone_depart.get_title());
        vectorDistance.push_back(mission_drop_zone_depart.distance_to_mission(coord_reel));
        vectorPriorite.push_back(mission_drop_zone_depart.get_priorite());
        vectorRatio_pts_temps.push_back(mission_drop_zone_depart.get_ratio_pts_tps());
        vectorPtsToGet.push_back(mission_drop_zone_depart.points_to_do());
        vectorTimeToRealize.push_back(mission_drop_zone_depart.get_time_to_realise());
    }

    if(!mission_depot_base_diagonale.is_accomplie()
       && mission_depot_base_diagonale.get_time_to_realise()< temps_restant
       && mission_depot_base_diagonale.is_priorite_normal()
       && mission_depot_base_diagonale.points_to_do() >0)
    {
        vectorMission.push_back(MISSION_DEPOT_BASE_DIAGONALE);
        vectorName.push_back(mission_depot_base_diagonale.get_title());
        vectorDistance.push_back(mission_depot_base_diagonale.distance_to_mission(coord_reel));
        vectorPriorite.push_back(mission_depot_base_diagonale.get_priorite());
        vectorRatio_pts_temps.push_back(mission_depot_base_diagonale.get_ratio_pts_tps());
        vectorPtsToGet.push_back(mission_depot_base_diagonale.points_to_do());
        vectorTimeToRealize.push_back(mission_depot_base_diagonale.get_time_to_realise());
    }

    if(!mission_depot_base_verticale.is_accomplie()
       && mission_depot_base_verticale.get_time_to_realise()< temps_restant
       && mission_depot_base_verticale.is_priorite_normal()
       && mission_depot_base_verticale.points_to_do() >0)
    {
        vectorMission.push_back(MISSION_DEPOT_BASE_VERTICALE);
        vectorName.push_back(mission_depot_base_verticale.get_title());
        vectorDistance.push_back(mission_depot_base_verticale.distance_to_mission(coord_reel));
        vectorPriorite.push_back(mission_depot_base_verticale.get_priorite());
        vectorRatio_pts_temps.push_back(mission_depot_base_verticale.get_ratio_pts_tps());
        vectorPtsToGet.push_back(mission_depot_base_verticale.points_to_do());
        vectorTimeToRealize.push_back(mission_depot_base_verticale.get_time_to_realise());
    }


    //cout<<"[GESTIONNAIRE MISSION] -> [DECISION MISSION]"<<endl;
    /// affichage des missions à faire et les poids associées
    cout<<"[NB mission dispo] -> "<<vectorDistance.size()<<endl;
    cout<<"MISSION DISPONIBLE ----------------------------------- "<<endl;
    for (int index=0; index<(int)vectorDistance.size(); index++) {
        /** OPERATION POUR DECISION DE MISSION ICI : priorite - distance/1000*/

        // V = 0.4m/s =d/t -> t=d/v=vector_d/400mm/s
        vectorDecision.push_back((float)vectorPtsToGet[index]/(vectorTimeToRealize[index]+ vectorDistance[index]/300.0) );
        cout.precision(2);
        cout<<"#"<<vectorMission[index]<<" "<<vectorName[index] << "\tp : "<< vectorPtsToGet[index]
        << " \td : "<<(int)vectorDistance[index]<< " \tt : "<<(int)((vectorTimeToRealize[index]+ vectorDistance[index]/250.0))
        <<"  \tPds :"<<vectorDecision[index]<<endl;
    }
    cout<<"----------------------------------------------------- "<<endl;


    /// decision de la mission a faire
    if(vectorDistance.size() == 0)
    {
        cout<<"aucune mission restante"<<endl;
        mission_en_cours = -1;
        distance_mission = 0;
        actualisation_target(mission_en_cours);
        sortie_evitement = false;
        cout<<"[GESTIONNAIRE MISSION] -> [DECISION MISSION : END]"<<endl;
        return -1;
    }
    else
    {
        if(vectorDistance.size() == 1)
        {
            cout<<"une seule mission restante"<<endl;
            int mission_to_do = vectorMission[0];
            //cout<<"The mission to do : [" <<mission_to_do<<"] "<<vectorName[0]<<endl;
            cout << "New mission -> [#"  << mission_to_do << "] " << vectorName[0]<< endl;

            /// appel de trigger()
            actualisation_target(mission_to_do);
            distance_mission = vectorDistance[0];
            mission_en_cours = mission_to_do;
            sortie_evitement = false;
            cout<<"[GESTIONNAIRE MISSION] -> [DECISION MISSION : END]"<<endl;
            return mission_to_do;
        }
        else
        {
            // check le time...


            /// choix a faire dans les prioritées, en prennant en compte les distances restantes
            //cout<<"choix a faire ! "<<endl;
            //float biggest = *max_element(vectorDecision.begin(),vectorDecision.end());
            int index_max = distance(vectorDecision.begin(),max_element(vectorDecision.begin(),vectorDecision.end()));
            int mission_to_do = vectorMission[index_max];
            //cout << "The largest element is "  << biggest << endl;
            //cout << "The element is : "  << index_max << endl;
            cout << "New mission -> [#"  << mission_to_do << "] " << vectorName[index_max]<< endl;
            distance_mission = vectorDistance[index_max];
            /// appel de trigger()
            actualisation_target(mission_to_do);
            mission_en_cours = mission_to_do;
            sortie_evitement = false;
            cout<<"[GESTIONNAIRE MISSION] -> [DECISION MISSION : END]"<<endl;
            return mission_to_do;
        }
    }

    //mission_en_cours = -1;
    sortie_evitement = false;
    cout<<"[GESTIONNAIRE MISSION] -> [DECISION MISSION : END]"<<endl;
    return -1;


}



/********************************************************
    DISTANCE TO MISSION
*********************************************************/
int Gestionnaire_Mission::get_distance_to_mission()
{
    return distance_mission;
}


bool Gestionnaire_Mission::is_mission_far()
{
    return (distance_mission > DISTANCE_MINI_TO_MISSION);
}

float Gestionnaire_Mission::get_cap_to_mission()
{
    return cap_to_mission*180 / 3.1416;
}

float Gestionnaire_Mission::get_x_mission()
{
    return x_mission;
}

float Gestionnaire_Mission::get_y_mission()
{
    return y_mission;
}

float Gestionnaire_Mission::get_cap_mission()
{
    return cap_mission; //*180 / PI;
}


string Gestionnaire_Mission::get_cap_to_mission_str()
{
    string result;
    ostringstream convert;

    convert << (int)get_cap_to_mission();
    result = convert.str();
    return result;
}

string Gestionnaire_Mission::get_x_mission_str()
{
    string result;
    ostringstream convert;

    convert << get_x_mission();
    result = convert.str();
    return result;
}

string Gestionnaire_Mission::get_y_mission_str()
{
    string result;
    ostringstream convert;

    convert << get_y_mission();
    result = convert.str();
    return result;
}

string Gestionnaire_Mission::get_cap_mission_str()
{
    string result;
    ostringstream convert;

    convert << (int)get_cap_mission();
    result = convert.str();
    return result;
}



/********************************************************
    TRIGGER SUR NEXT MISSION : dans le master???
*********************************************************/
void Gestionnaire_Mission::actualisation_target(int mission_indice_)
{
    sortie_evitement = false;
    mission_en_cours = mission_indice_;
    mission_sortie_evitement = -1;
    cout<<"actualisation de la target (mission) : \n\t#" <<  mission_en_cours << " "  ;
    Vector *vector_to_mission;

    switch(mission_en_cours)
    {
            case MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE:
            cout<<mission_collecte_module_centraux_initiale.get_title()<<endl;
            // pour trigger du master
            vector_to_mission = new Vector(coord_reel,mission_collecte_module_centraux_initiale.get_coord_debut_mission());
            cap_to_mission = vector_to_mission->get_angle();
            x_mission = mission_collecte_module_centraux_initiale.get_coord_debut_mission().get_x();
            y_mission = mission_collecte_module_centraux_initiale.get_coord_debut_mission().get_y();
            cap_mission = mission_collecte_module_centraux_initiale.get_coord_debut_mission().get_cap();
            //cout << "cap vers objectif : " << int(cap_to_mission*180 / PI) << endl;
            break;

            case MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT:
            cout<<mission_collecte_module_centraux_restant.get_title()<<endl;
            // pour trigger du master
            vector_to_mission = new Vector(coord_reel,mission_collecte_module_centraux_restant.get_coord_debut_mission());
            cap_to_mission = vector_to_mission->get_angle();
            x_mission = mission_collecte_module_centraux_restant.get_coord_debut_mission().get_x();
            y_mission = mission_collecte_module_centraux_restant.get_coord_debut_mission().get_y();
            cap_mission = mission_collecte_module_centraux_restant.get_coord_debut_mission().get_cap();
            //cout << "cap vers objectif : " << int(cap_to_mission*180 / PI) << endl;
            break;

            case MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME:
            cout<<mission_transfert_direct_distributeur_polychrome.get_title()<<endl;
            // pour trigger du master
            vector_to_mission = new Vector(coord_reel,mission_transfert_direct_distributeur_polychrome.get_coord_debut_mission());
            cap_to_mission = vector_to_mission->get_angle();
            x_mission = mission_transfert_direct_distributeur_polychrome.get_coord_debut_mission().get_x();
            y_mission = mission_transfert_direct_distributeur_polychrome.get_coord_debut_mission().get_y();
            cap_mission = mission_transfert_direct_distributeur_polychrome.get_coord_debut_mission().get_cap();
            //cout << "cap vers objectif : " << int(cap_to_mission*180 / PI) << endl;
            break;

            case MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME:
            cout<<mission_collecte_distributeur_monochrome.get_title()<<endl;
            // pour trigger du master
            vector_to_mission = new Vector(coord_reel,mission_collecte_distributeur_monochrome.get_coord_debut_mission());
            cap_to_mission = vector_to_mission->get_angle();
            x_mission = mission_collecte_distributeur_monochrome.get_coord_debut_mission().get_x();
            y_mission = mission_collecte_distributeur_monochrome.get_coord_debut_mission().get_y();
            cap_mission = mission_collecte_distributeur_monochrome.get_coord_debut_mission().get_cap();
            //cout << "cap vers objectif : " << int(cap_to_mission*180 / PI) << endl;
            break;


            case MISSION_PUSH_DISTRIBUTEUR_MONOCHROME:
            cout<<mission_push_distributeur_monochrome.get_title()<<endl;
            // pour trigger du master
            vector_to_mission = new Vector(coord_reel,mission_push_distributeur_monochrome.get_coord_debut_mission());
            cap_to_mission = vector_to_mission->get_angle();
            x_mission = mission_push_distributeur_monochrome.get_coord_debut_mission().get_x();
            y_mission = mission_push_distributeur_monochrome.get_coord_debut_mission().get_y();
            cap_mission = mission_push_distributeur_monochrome.get_coord_debut_mission().get_cap();
            //cout << "cap vers objectif : " << int(cap_to_mission*180 / PI) << endl;
            break;

            case MISSION_PUSH_CRATERE:
            cout<<mission_push_cratere.get_title()<<endl;
            // pour trigger du master
            vector_to_mission = new Vector(coord_reel,mission_push_cratere.get_coord_debut_mission());
            cap_to_mission = vector_to_mission->get_angle();
            x_mission = mission_push_cratere.get_coord_debut_mission().get_x();
            y_mission = mission_push_cratere.get_coord_debut_mission().get_y();
            cap_mission = mission_push_cratere.get_coord_debut_mission().get_cap();
            //cout << "cap vers objectif : " << int(cap_to_mission*180 / PI) << endl;
            break;

            case MISSION_DROP_ZONE_DEPART:
            cout<<mission_drop_zone_depart.get_title()<<endl;
            // pour trigger du master
            vector_to_mission = new Vector(coord_reel,mission_drop_zone_depart.get_coord_debut_mission());
            cap_to_mission = vector_to_mission->get_angle();
            x_mission = mission_drop_zone_depart.get_coord_debut_mission().get_x();
            y_mission = mission_drop_zone_depart.get_coord_debut_mission().get_y();
            cap_mission = mission_drop_zone_depart.get_coord_debut_mission().get_cap();
            //cout << "cap vers objectif : " << int(cap_to_mission*180 / PI) << endl;
            break;

            case MISSION_DEPOT_BASE_DIAGONALE:
            cout<<mission_depot_base_diagonale.get_title()<<endl;
            // pour trigger du master
            vector_to_mission = new Vector(coord_reel,mission_depot_base_diagonale.get_coord_debut_mission());
            cap_to_mission = vector_to_mission->get_angle();
            x_mission = mission_depot_base_diagonale.get_coord_debut_mission().get_x();
            y_mission = mission_depot_base_diagonale.get_coord_debut_mission().get_y();
            cap_mission = mission_depot_base_diagonale.get_coord_debut_mission().get_cap();
            //cout << "cap vers objectif : " << int(cap_to_mission*180 / PI) << endl;
            break;

            case MISSION_DEPOT_BASE_VERTICALE:
            cout<<mission_depot_base_verticale.get_title()<<endl;
            // pour trigger du master
            vector_to_mission = new Vector(coord_reel,mission_depot_base_verticale.get_coord_debut_mission());
            cap_to_mission = vector_to_mission->get_angle();
            x_mission = mission_depot_base_verticale.get_coord_debut_mission().get_x();
            y_mission = mission_depot_base_verticale.get_coord_debut_mission().get_y();
            cap_mission = mission_depot_base_verticale.get_coord_debut_mission().get_cap();
            //cout << "cap vers objectif : " << int(cap_to_mission*180 / PI) << endl;
            break;

            case -1:
            cout<<"NO MISSION TO DO"<<endl;
            // pour trigger du master
            vector_to_mission = new Vector(coord_reel,coord_reel);
            cap_to_mission = 0;
            x_mission = coord_reel.get_x();
            y_mission = coord_reel.get_y();
            cap_mission = coord_reel.get_cap();
            //cout << "cap vers objectif : " << int(cap_to_mission*180 / PI) << endl;
            break;

    }
    // affiche les stats... Coord reel, Coord target, cap to target... distance a vol de piaf...
    cout<<"\tCoord reel -> (" << setprecision (4)<< coord_reel.get_x() << " , " << coord_reel.get_y() << " , " << coord_reel.get_cap()*180/PI << " ) " <<endl;
    cout<<"\tCoord ennemi -> (" << setprecision (4)<< coord_ennemi.get_x() << " , " << coord_ennemi.get_y() << " , " << coord_ennemi.get_cap()*180/PI << " ) " <<endl;
    cout<<"\tCoord target -> (" << setprecision (4)<< x_mission << " , " << y_mission << " , " << cap_mission*180/PI << " ) " <<endl;
    cout<<"\tDist to mission -> " << setprecision (4)<< get_distance_to_mission()  << " mm " <<endl;
    cout<<"\tCap to mission -> " << setprecision (4)<< get_cap_to_mission()  << " deg " <<endl;

    cout<<endl;
}


/********************************************************
    EVITEMENT MISSION
*********************************************************/
void Gestionnaire_Mission::evitement_mission()
{
    // laquelle, on la TAG
    mission_sortie_evitement = mission_en_cours;
    mission_en_cours = -1;

    sortie_evitement = true;
    cout<<"[Evitement provoque sur mission] -> #"<<mission_sortie_evitement<<""<<endl;

    // autre mission a eviter dans le cone de detection, peut etre mission en cours redeclenchable...
    // a voir dans actualisation des priorités

}


/********************************************************
    ACTUALISATION PRIORITE : mission a eviter d'y retourner de suite....
*********************************************************/
void Gestionnaire_Mission::actualisation_Priorite()
{
    // temps restant pour decision des truc important
    //temps_restant = (period_jeu.time_elapsed()- PERIODE_JEU)/1000; // en s
    //cout<<"temps restant : "<<temps_restant<<" s"<<endl;
    //cout<<"actualisation des prioritées"<<endl;

    vecteur_reel_ennemi.set_vector(coord_reel,coord_ennemi);

    //vecteur_reel_mission.set_vector(coord_reel,coord_ennemi);



    if(sortie_evitement == true)
    {
        // on devrait faire un tableau de mission pour eviter ces repetitions...
        /// collecte
        vecteur_reel_mission.set_vector(coord_reel,mission_collecte_module_centraux_initiale.get_coord_debut_mission());
        if(abs(diff_cap(vecteur_reel_ennemi.get_angle(), vecteur_reel_mission.get_angle()))*180/PI < CONE_EVITEMENT_DEG){
                mission_collecte_module_centraux_initiale.set_priorite_evitement();
        }
        vecteur_reel_mission.set_vector(coord_reel,mission_collecte_module_centraux_restant.get_coord_debut_mission());
        if(abs(diff_cap(vecteur_reel_ennemi.get_angle(), vecteur_reel_mission.get_angle()))*180/PI < CONE_EVITEMENT_DEG){
                mission_collecte_module_centraux_restant.set_priorite_evitement();
        }
        vecteur_reel_mission.set_vector(coord_reel,mission_collecte_distributeur_monochrome.get_coord_debut_mission());
        if(abs(diff_cap(vecteur_reel_ennemi.get_angle(), vecteur_reel_mission.get_angle()))*180/PI < CONE_EVITEMENT_DEG){
                mission_collecte_distributeur_monochrome.set_priorite_evitement();
        }

        /// divers
        vecteur_reel_mission.set_vector(coord_reel,mission_push_distributeur_monochrome.get_coord_debut_mission());
        if(abs(diff_cap(vecteur_reel_ennemi.get_angle(), vecteur_reel_mission.get_angle()))*180/PI < CONE_EVITEMENT_DEG){
                mission_push_distributeur_monochrome.set_priorite_evitement();
        }
        vecteur_reel_mission.set_vector(coord_reel,mission_transfert_direct_distributeur_polychrome.get_coord_debut_mission());
        if(abs(diff_cap(vecteur_reel_ennemi.get_angle(), vecteur_reel_mission.get_angle()))*180/PI < CONE_EVITEMENT_DEG){
                mission_transfert_direct_distributeur_polychrome.set_priorite_evitement();
        }
        vecteur_reel_mission.set_vector(coord_reel,mission_push_cratere.get_coord_debut_mission());
        if(abs(diff_cap(vecteur_reel_ennemi.get_angle(), vecteur_reel_mission.get_angle()))*180/PI < CONE_EVITEMENT_DEG){
                mission_push_cratere.set_priorite_evitement();
        }

        /// depot
        vecteur_reel_mission.set_vector(coord_reel,mission_drop_zone_depart.get_coord_debut_mission());
        if(abs(diff_cap(vecteur_reel_ennemi.get_angle(), vecteur_reel_mission.get_angle()))*180/PI < CONE_EVITEMENT_DEG){
                mission_drop_zone_depart.set_priorite_evitement();
        }
        vecteur_reel_mission.set_vector(coord_reel,mission_depot_base_diagonale.get_coord_debut_mission());
        if(abs(diff_cap(vecteur_reel_ennemi.get_angle(), vecteur_reel_mission.get_angle()))*180/PI < CONE_EVITEMENT_DEG){
                mission_depot_base_diagonale.set_priorite_evitement();
        }
        vecteur_reel_mission.set_vector(coord_reel,mission_depot_base_verticale.get_coord_debut_mission());
        if(abs(diff_cap(vecteur_reel_ennemi.get_angle(), vecteur_reel_mission.get_angle()))*180/PI < CONE_EVITEMENT_DEG){
                mission_depot_base_verticale.set_priorite_evitement();
        }


        // peut etre mettre juste un malus
        switch(mission_sortie_evitement)
        {

            case MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE:
                mission_collecte_module_centraux_initiale.set_priorite_evitement();
            break;

            case MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT:
                mission_collecte_module_centraux_restant.set_priorite_evitement();
            break;

            case MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME:
                 mission_collecte_distributeur_monochrome.set_priorite_evitement();

            break;

            case MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME:
                mission_transfert_direct_distributeur_polychrome.set_priorite_evitement();
            break;

            case MISSION_PUSH_DISTRIBUTEUR_MONOCHROME:
                mission_push_distributeur_monochrome.set_priorite_evitement();
            break;

            case MISSION_PUSH_CRATERE:
                mission_push_cratere.set_priorite_evitement();
            break;

            case MISSION_DROP_ZONE_DEPART:
                mission_drop_zone_depart.set_priorite_evitement();
            break;

            case MISSION_DEPOT_BASE_DIAGONALE:
                mission_depot_base_diagonale.set_priorite_evitement();
            break;

            case MISSION_DEPOT_BASE_VERTICALE:
                mission_depot_base_verticale.set_priorite_evitement();
            break;
        }

    }
    else
    {
                mission_collecte_module_centraux_initiale.set_priorite_normal();
                mission_collecte_module_centraux_restant.set_priorite_normal();
                mission_transfert_direct_distributeur_polychrome.set_priorite_normal();
                mission_push_distributeur_monochrome.set_priorite_normal();
                mission_push_cratere.set_priorite_normal();
                mission_drop_zone_depart.set_priorite_normal();
                mission_depot_base_diagonale.set_priorite_normal();
                mission_depot_base_verticale.set_priorite_normal();
    }


}


/********************************************************
    ACTUALISATION PRIORITE : mission a eviter d'y retourner de suite....
*********************************************************/
void Gestionnaire_Mission::affiche_mission_active()
{
    actualisation_Priorite();
    cout<<"[GESTIONNAIRE MISSION] -> [DEBUG]"<<endl;
    cout<<"[temps restant] -> " << temps_restant << " s" <<endl;

    cout<<"---------- mission en cours ----------------"<<endl;
            switch(mission_en_cours)
        {

            case MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE:
                mission_collecte_module_centraux_initiale.affiche();
            break;

            case MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT:
                mission_collecte_module_centraux_restant.affiche();
            break;

            case MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME:
                mission_transfert_direct_distributeur_polychrome.affiche();
            break;

            case MISSION_PUSH_DISTRIBUTEUR_MONOCHROME:
                mission_push_distributeur_monochrome.affiche();
            break;

            case MISSION_PUSH_CRATERE:
                mission_push_cratere.affiche();
            break;

            case MISSION_DROP_ZONE_DEPART:
                mission_drop_zone_depart.affiche();
            break;

            case MISSION_DEPOT_BASE_DIAGONALE:
                mission_depot_base_diagonale.affiche();
            break;

            case MISSION_DEPOT_BASE_VERTICALE:
                mission_depot_base_verticale.affiche();
            break;
        }


    cout<<"---------- mission active ------------------"<<endl;
    if(!mission_collecte_module_centraux_initiale.is_accomplie()
       && !mission_collecte_module_centraux_initiale.is_priorite_evitement()
       && mission_collecte_module_centraux_initiale.get_time_to_realise() < temps_restant)
       { mission_collecte_module_centraux_initiale.affiche(); }

    if(!mission_collecte_module_centraux_restant.is_accomplie()
       && !mission_collecte_module_centraux_restant.is_priorite_evitement()
       && mission_collecte_module_centraux_restant.get_time_to_realise() < temps_restant)
       { mission_collecte_module_centraux_restant.affiche(); }

    if(!mission_collecte_distributeur_monochrome.is_accomplie()
       && !mission_collecte_distributeur_monochrome.is_priorite_evitement()
       && mission_collecte_distributeur_monochrome.get_time_to_realise() < temps_restant)
       { mission_collecte_distributeur_monochrome.affiche(); }

    if(!mission_transfert_direct_distributeur_polychrome.is_accomplie()
       && !mission_transfert_direct_distributeur_polychrome.is_priorite_evitement()
       && mission_transfert_direct_distributeur_polychrome.get_time_to_realise() < temps_restant)
       { mission_transfert_direct_distributeur_polychrome.affiche(); }

    if(!mission_push_distributeur_monochrome.is_accomplie()
       && !mission_push_distributeur_monochrome.is_priorite_evitement()
       && mission_push_distributeur_monochrome.get_time_to_realise() < temps_restant)
       { mission_push_distributeur_monochrome.affiche(); }

    if(!mission_push_cratere.is_accomplie()
       && !mission_push_cratere.is_priorite_evitement()
       && mission_push_cratere.get_time_to_realise() < temps_restant)
       { mission_push_cratere.affiche(); }

    if(!mission_drop_zone_depart.is_accomplie()
       && !mission_drop_zone_depart.is_priorite_evitement()
       && mission_drop_zone_depart.get_time_to_realise() < temps_restant)
       { mission_drop_zone_depart.affiche(); }

    if(!mission_depot_base_diagonale.is_accomplie()
       && !mission_depot_base_diagonale.is_priorite_evitement()
       && mission_depot_base_diagonale.get_time_to_realise() < temps_restant)
       { mission_depot_base_diagonale.affiche(); }

    if(!mission_depot_base_verticale.is_accomplie()
       && !mission_depot_base_verticale.is_priorite_evitement()
       && mission_depot_base_verticale.get_time_to_realise() < temps_restant)
       { mission_depot_base_verticale.affiche(); }

    cout<<"---------- mission evitement ------------------"<<endl;

    if(mission_collecte_module_centraux_initiale.is_priorite_evitement())               { mission_collecte_module_centraux_initiale.affiche(); }
    if(mission_collecte_module_centraux_restant.is_priorite_evitement())             { mission_collecte_module_centraux_restant.affiche(); }
    if(mission_collecte_distributeur_monochrome.is_priorite_evitement())        { mission_collecte_distributeur_monochrome.affiche(); }
    if(mission_transfert_direct_distributeur_polychrome.is_priorite_evitement())       { mission_transfert_direct_distributeur_polychrome.affiche(); }
    if(mission_push_distributeur_monochrome.is_priorite_evitement())   { mission_push_distributeur_monochrome.affiche(); }
    if(mission_push_cratere.is_priorite_evitement())  { mission_push_cratere.affiche(); }
    if(mission_drop_zone_depart.is_priorite_evitement())        { mission_drop_zone_depart.affiche(); }
    if(mission_depot_base_diagonale.is_priorite_evitement())        { mission_depot_base_diagonale.affiche(); }
    if(mission_depot_base_verticale.is_priorite_evitement())        { mission_depot_base_verticale.affiche(); }

    cout<<"---------- mission no time left ------------------"<<endl;
    if(!mission_collecte_module_centraux_initiale.is_accomplie() && mission_collecte_module_centraux_initiale.get_time_to_realise() >= temps_restant)               { mission_collecte_module_centraux_initiale.affiche(); }
    if(!mission_collecte_module_centraux_restant.is_accomplie() && mission_collecte_module_centraux_restant.get_time_to_realise() >= temps_restant)             { mission_collecte_module_centraux_restant.affiche(); }
    if(!mission_collecte_distributeur_monochrome.is_accomplie() && mission_collecte_distributeur_monochrome.get_time_to_realise() >= temps_restant)        { mission_collecte_distributeur_monochrome.affiche(); }
    if(!mission_transfert_direct_distributeur_polychrome.is_accomplie() && mission_transfert_direct_distributeur_polychrome.get_time_to_realise() >= temps_restant)       { mission_transfert_direct_distributeur_polychrome.affiche(); }
    if(!mission_push_distributeur_monochrome.is_accomplie() && mission_push_distributeur_monochrome.get_time_to_realise() >= temps_restant)   { mission_push_distributeur_monochrome.affiche(); }
    if(!mission_push_cratere.is_accomplie() && mission_push_cratere.get_time_to_realise() >= temps_restant)  { mission_push_cratere.affiche(); }
    if(!mission_drop_zone_depart.is_accomplie() && mission_drop_zone_depart.get_time_to_realise() >= temps_restant)        { mission_drop_zone_depart.affiche(); }
    if(!mission_depot_base_diagonale.is_accomplie() && mission_depot_base_diagonale.get_time_to_realise() >= temps_restant)        { mission_depot_base_diagonale.affiche(); }
    if(!mission_depot_base_verticale.is_accomplie() && mission_depot_base_verticale.get_time_to_realise() >= temps_restant)        { mission_depot_base_verticale.affiche(); }


    cout<<"---------- mission remplie/desactive ------------------"<<endl;
    if(mission_collecte_module_centraux_initiale.is_accomplie())               { mission_collecte_module_centraux_initiale.affiche(); }
    if(mission_collecte_module_centraux_restant.is_accomplie())             { mission_collecte_module_centraux_restant.affiche(); }
    if(mission_collecte_distributeur_monochrome.is_accomplie())        { mission_collecte_distributeur_monochrome.affiche(); }
    if(mission_transfert_direct_distributeur_polychrome.is_accomplie())       { mission_transfert_direct_distributeur_polychrome.affiche(); }
    if(mission_push_distributeur_monochrome.is_accomplie())   { mission_push_distributeur_monochrome.affiche(); }
    if(mission_push_cratere.is_accomplie())  { mission_push_cratere.affiche(); }
    if(mission_drop_zone_depart.is_accomplie())        { mission_drop_zone_depart.affiche(); }
    if(mission_depot_base_diagonale.is_accomplie())        { mission_depot_base_diagonale.affiche(); }
    if(mission_depot_base_verticale.is_accomplie())        { mission_depot_base_verticale.affiche(); }
    cout<<"--------------------------------------------------------"<<endl;


    // affiche les stats... Coord reel, Coord target, cap to target... distance a vol de piaf...
    cout<<"Coord reel -> (" << setprecision (4)<< coord_reel.get_x() << " , " << coord_reel.get_y() << " , " << coord_reel.get_cap()*180/PI << " ) " <<endl;
    cout<<"Coord ennemi -> (" << setprecision (4)<< coord_ennemi.get_x() << " , " << coord_ennemi.get_y() << " , " << coord_ennemi.get_cap()*180/PI << " ) " <<endl;
    cout<<"Coord target -> (" << setprecision (4)<< x_mission << " , " << y_mission << " , " << cap_mission*180/PI << " ) " <<endl;
    cout<<"Dist to mission -> " << setprecision (4)<< get_distance_to_mission()  << " mm " <<endl;
    cout<<"Cap to mission -> " << setprecision (4)<< get_cap_to_mission()  << " deg " <<endl<<endl;


}


/********************************************************
    ACTUALISATION PRIORITE : mission a eviter d'y retourner de suite....
*********************************************************/
void Gestionnaire_Mission::set_blue()
{
    color_blue = true;
    //plateau_jeu->set_color_blue();
    mission_collecte_module_centraux_initiale.set_blue();
    mission_collecte_module_centraux_restant.set_blue();
    mission_collecte_distributeur_monochrome.set_blue();
    mission_transfert_direct_distributeur_polychrome.set_blue();
    mission_push_distributeur_monochrome.set_blue();
    mission_push_cratere.set_blue();
    mission_drop_zone_depart.set_blue();
    mission_depot_base_diagonale.set_blue();
    mission_depot_base_verticale.set_blue();
}

void Gestionnaire_Mission::set_yellow()
{
    color_blue = false;
    //pour mission
    mission_collecte_module_centraux_initiale.set_yellow();
    mission_collecte_module_centraux_restant.set_yellow();
    mission_collecte_distributeur_monochrome.set_yellow();
    mission_transfert_direct_distributeur_polychrome.set_yellow();
    mission_push_distributeur_monochrome.set_yellow();
    mission_push_cratere.set_yellow();
    mission_drop_zone_depart.set_yellow();
    mission_depot_base_diagonale.set_yellow();
    mission_depot_base_verticale.set_yellow();
}


// la strat est elle verte?
bool Gestionnaire_Mission::is_blue()
{
    return color_blue;
}

// jaune?
bool Gestionnaire_Mission::is_yellow()
{
    return !color_blue;
}



Mission* Gestionnaire_Mission::get_mission_collecte_module_centraux_initiale()
{
    return &mission_collecte_module_centraux_initiale;
}
Mission* Gestionnaire_Mission::get_mission_collecte_module_centraux_restant()
{
    return &mission_collecte_module_centraux_restant;
}
Mission* Gestionnaire_Mission::get_mission_collecte_distributeur_monochrome()
{
    return &mission_collecte_distributeur_monochrome;
}

Mission* Gestionnaire_Mission::get_mission_transfert_direct_distributeur_polychrome()
{
    return &mission_transfert_direct_distributeur_polychrome;
}
Mission* Gestionnaire_Mission::get_mission_push_distributeur_monochrome()
{
    return &mission_push_distributeur_monochrome;
}
Mission* Gestionnaire_Mission::get_mission_push_cratere()
{
    return &mission_push_cratere;
}

Mission* Gestionnaire_Mission::get_mission_drop_zone_depart()
{
    return &mission_drop_zone_depart;
}
Mission* Gestionnaire_Mission::get_mission_depot_base_diagonale()
{
    return &mission_depot_base_diagonale;
}
Mission* Gestionnaire_Mission::get_mission_depot_base_verticale()
{
    return &mission_depot_base_verticale;
}
