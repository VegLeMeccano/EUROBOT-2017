#include "Protocole_COM.h"


//int portSerie;

/** Constructeur COM
*/
Protocole_COM::Protocole_COM(Master* master_ ):
    period(PERIODE_COM),
    master(master_),
    serial_count(0)
{
    treated = true;
    cout << "[COM] initialisation" << endl;
    //master->set_couleur(COULEUR_VERT);

}


/**
 RUN COM
*/
void Protocole_COM::run()
{
    if(period.is_over())
    {
        period.reset();
        treatSerial();

        if ( !treated)
        {
            //Serial.println("message traite");
            //cout << "[COM] message traitée" << endl;
            executeinstr();
            treated = true;
            stream.str("");
            serial_count = 0;
            s="";
        }
    }

}


/**
 Traitement du signal COM
*/
void Protocole_COM::treatSerial()
{
    char serial_char;

    // Ici on traite les différents messages reçus.
    while(serialDataAvail(master->getPortSerie())>0 && serial_count < 228)
    {
        serial_char= serialGetchar(master->getPortSerie());

        if (serial_char =='\n')
        {
            //cout<<"Fin de ligne"<<endl;
            //on ne traite que les instructions de minimum 2 char
            if (serial_count<1)
            {
                treated = true;
            }
            else
            {
                treated = false;
            }
             //cout<<"Enregistre : "<<s.c_str()<<endl;
             //cout<<"serial_count :"<<serial_count<<endl;
            return;
        }
        //Serial.println(serial_count);
        s = s + serial_char;
        serial_count = serial_count + 1;
    }

}




/*
 Execution des instructions OrdersRaspberry
*/
void Protocole_COM::executeinstr()
{
    //char ordre = cmdBuffer[bufindr][strchr_pointer];
    stream.str(s);
    std::string temp;
    std::string ordre;
    std::string name;
    std::string x;
    std::string y;
    std::string cap;
    //stream>>temp;
    char ordre_d = s[0];
    cout<<"[arduino] "<<s<<endl;

    if(ordre_d == '#' || ordre_d == '*')
    {
        /*
        cout<<"appel arduino found : ";
        if(ordre_d == '#')
        {
            cout<<"ordre asserv/action"<<endl;
        }
        if (ordre_d == '*')
        {
            cout<<"ordre strat"<<endl;
        }
        */
    }
    else
    {
        // on sort, et on affiche la ligne
        return;
    }

    //cout << "[COM] ordre ind = " << endl;
    //int ind = ((int)temp[1]) - 48;      // pour avoir le numero de l'ordre
    //cout <<ordre<< "@" <<ind<< endl;

    switch (ordre_d)
    {

    /** ordre de type adversaire et truc fini
    */
	case '#' :

         /************************************************
                CHECK START SWITCH
        *************************************************/
        // start mis
        if(s.find("START_IN") != string::npos)
        {
            cout<<"[Master] start mis"<<endl;
            master->get_mae_picky()->start_mis();
        }

        //start retiré
        if(s.find("START_OUT") != string::npos)
        {
            cout<<"[Master] start enleve"<<endl;
            master->get_mae_picky()->start_enleve();
            master->start_compteur_periode();
        }

        //fin des 90s
        if(s.find("END_GAME") != string::npos)
        {
            cout<<"[Master] end of game"<<endl;
            master->get_mae_picky()->end_game();
        }




        /************************************************
                CHECK FIN ASSERV BASE ROULANTE
        *************************************************/
        if(s.find("SLAVE_NEAR") != string::npos)
        {
            cout<<"[Master] etat asserv, proche"<<endl;
            master->get_mae_picky()->near();
        }

        // check si l'asserv est fini
        if(s.find("SLAVE_AFINI") != string::npos)
        {
            cout<<"[Master] etat asserv, fini"<<endl;
            master->get_mae_picky()->assFini();

        }

        // check si l'asserv est fini
        if(s.find("SLAVE_BLOCAGE") != string::npos)
        {
            cout<<"[Master] etat asserv, blocage"<<endl;
            master->get_mae_picky()->blocage();
        }

        // check si l'asserv est fini
        if(s.find("SLAVE_ENNEMI") != string::npos)
        {
            cout<<"[Master] etat asserv, ennemi gauche"<<endl;
            master->get_mae_picky()->evitement(); // adversaire();
            master->get_gestionnaire_mission()->evitement_mission();
        }




        /************************************************
                CHECK STRAT & COLOR
        *************************************************/
	case '*' :

        // si bleu
        if(s.find("COULEUR : 0") != string::npos)
        {
            cout<<"[Master] couleur 0 (BLUE)"<<endl;
            master->set_blue();
        }

        //si jaune
        if(s.find("COULEUR : 1") != string::npos)
        {
            cout<<"[Master] couleur 1 (YELLOW)"<<endl;
            master->set_yellow();
        }


        if(s.find("STRAT 1 : 0") != string::npos)
        {
            cout<<"[Master] strategie 1 : 0 "<<endl;
            //master->get_gestionnaire_mission()->set_strategie_1(0);
        }


        if(s.find("STRAT 1 : 1") != string::npos)
        {
            cout<<"[Master] strategie 1 : 1 "<<endl;
            //master->get_gestionnaire_mission()->set_strategie_1(1);
        }


		/************************************************
                CHECK COORDS
        *************************************************/
         //si reception de coordonnées
        if(s.find("COORD") != string::npos)
        {
            stream.str(s);
            stream>> ordre >> name >> x >> y >> cap;
            //stream>> name >> x >> y >> cap;
            cout<<"compris : ";
            cout<< "x : "<<atoi(x.c_str());
            cout<< " y : "<<atoi(y.c_str());
            cout<< " cap : "<<atoi(cap.c_str())<<endl;

            master->get_gestionnaire_mission()->set_coord( Coord( atoi(x.c_str()) , atoi(y.c_str()) , 3.1423/180*atoi(cap.c_str()) ) );
            // aller chercher les coordonnées dans la chaine
            // to do
            // et les mettre dans le master pour decision sur mission a venir
            cout<<"[Master] REAL COORD : ";
            cout<<master->get_gestionnaire_mission()->get_coord().get_x()<<" ";
            cout<<master->get_gestionnaire_mission()->get_coord().get_y()<<" ";
            cout<<(int)(master->get_gestionnaire_mission()->get_coord().get_cap()*180/3.1416)<<endl;

            //master->set_couleur(COULEUR_VERT);
        }


        break;


    }

}




