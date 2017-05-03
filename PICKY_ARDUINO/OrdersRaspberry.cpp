#include "OrdersRaspberry.h"

//Fichier de définition des fonction pour les ordre reçu depuis la Gumstix
//


OrdersRaspberry::OrdersRaspberry(Autom* slave_,IO* io_) :
    period(50),
    slave(slave_),
    io(io_),
    serial_count(0)
{
    treated=true;
}

void OrdersRaspberry::run()
{
    if(period.is_over())
    {
        period.reset();
        treatSerial();
        if ( !treated)
        {
            //Serial.println("coucou");
            executeinstr();
            treated = true;
            stream.str("");
            serial_count = 0;
            s="";
        }
    }

}

void OrdersRaspberry::treatSerial()
{
    char serial_char;

    // Ici on traite les différents messages reçus.
    while(Serial.available()>0 && serial_count < 28)
    {
        serial_char= Serial.read();
        if (serial_char =='\n')
        {
            //Serial.println("Fin de ligne");
            //on ne traite que les instructions de minimum 2 char
            if (serial_count<1)
            {
                treated = true;
            }
            else
            {
                treated = false;
            }
            //Serial.print("Enregistre : ");
            //Serial.print(s.c_str());
            //Serial.print("  serial_count  ");
            //Serial.println(serial_count);
            return;
        }
        s = s + serial_char;
        serial_count = serial_count + 1;
    }
}

void OrdersRaspberry::executeinstr()
{
    stream.str(s);
    std::string temp;
    stream>>temp;
    char ordre = temp[0];
    ///Serial.print("ordre ind = ");
    int ind = ((int)temp[1]) - 48;
    ///Serial.print(ordre);
    ///Serial.print("@");
    ///Serial.println(ind);
    std::string temp2;
    std::string cap;
    std::string x;
    std::string y;
    std::string z;
    std::string v;
    int r = 0;
    //int v = 0;
    int s = 0;
    bool precis;
    Coord target;
    switch (ordre)
    {



    /*****************************************************
        ordre de debug
    ******************************************************/
    case 'O':
            //Serial.println("debug");
            //slave->get_control()->write_debug();

        switch (ind)
        {
           case 0:
                Serial.println("@[Slave][O0][Debug ODO : Reinit]");
                //Serial.println("Reinit");
                slave->debuggDistanceInit();
                slave->debuggTicInit();
            break;

		// mettre un bavardeur

            case 1:
                Serial.println("@[Slave][O1][Debug ODO]");

                Serial.print("\t[L] [TIC] -> ");
                Serial.print(slave->debuggTic_g());
                Serial.print("\t\t[distance] -> ");
                Serial.println(slave->debuggDistance_g());


                Serial.print("\t[R] [TIC] -> ");
                Serial.print(slave->debuggTic_d());
                Serial.print("\t\t[distance] -> ");
                Serial.println(slave->debuggDistance_d());

            break;



        /** Set gain PIDs : deplacement
        **/
        case 2:
            Serial.println("@[Slave][O2][SET PID : Deplacement]");
            //Serial.println(" SET GAINS (DEBUG) ");

            stream >> y >> z >> cap;
            Serial.println("setting gains for dep");
            Serial.println(" Kp KI KV");

            slave->get_control()->setTuningDep(atof(y.c_str()), atof(z.c_str()), atof(cap.c_str())); // a revoir
            slave->get_control()->write_debug();

            break;

        /** Set gain PIDs : cap
        **/
        case 3:
            Serial.println("@[Slave][O3][SET PID : Cap]");
            Serial.println(" setting gains for cap");
            Serial.println(" Kp KI KV");

            slave->get_control()-> setTuningCap(atof(y.c_str()), atof(z.c_str()), atof(cap.c_str()));
            slave->get_control()->write_debug();

            break;




        /** pour test des gains, par methode de nichols
        **/
        case 4:
            Serial.println("@[Slave][O4][assfini: OFF]");
            slave->get_control()->set_assfini_OFF();
            //slave->get_control()->write_debug();

            break;

        case 5:
            Serial.println("@[Slave][O5][assfini: ON]");
            slave->get_control()->set_assfini_ON();
            //slave->get_control()->write_debug();

            break;

        }
        break;



    /*****************************************************
        ordre de type Slave (base roulante)
    ******************************************************/
    case 'S' :
        //Vitesse vit;
        // ordre de type Slave
        switch (ind)
        {

        /** reinit les coords X,Y, CAP
        // attention ne deplace pas le robot **/
        case 0: // set x, y, cap
            Serial.println("@[Slave][S0][set X Y CAP]");
            Serial.print("SET X Y CAP :");
            stream >> x >> y >> cap;

            Serial.println(atoi(x.c_str()));
            if (atoi(x.c_str())== -1)
            {
                Serial.println("recal y -> x unknown");
                slave->setxycap_no_x(atoi(y.c_str()), 3.14 * atoi(cap.c_str())/ 180.0);
            }
            else
            {
                if (atoi(y.c_str())== -1)
                {
                    Serial.println("recal x -> y unknown");
                    slave->setxycap_no_y(atoi(x.c_str()), 3.14 * atoi(cap.c_str())/ 180.0);
                }
                else
                {
                    slave->setxycap(Coord(atoi(x.c_str()), atoi(y.c_str()), 3.14 * atoi(cap.c_str())/ 180.0));
                }

            }
            Serial.print(atoi(x.c_str()));
            Serial.print(" ");
            Serial.print(atoi(y.c_str()));
            Serial.print(" ");
            Serial.print(atoi(cap.c_str()));
            Serial.println(" ");
            break;


        /** donne les coordonnees du robots
        **/
        case 1:
            Serial.println("@[Slave][S1][get coords]");
            Serial.println("GET X Y CAP: ");
            slave->get_control()->write_real_coords();

            break;

        /** recalage arriere du robot
        **/
        case 2:
            Serial.println("[Slave][S2][Recalage AR]");
            //Serial.println("Recalage");
            slave->get_control()->recaler();
            break;



        /** BFCap
        **/
        case 3:
            Serial.println("@[Slave][S3][BF Cap]");
            Serial.print("SET CAP :");
            stream >> cap;
            target = Coord(0, 0, 3.1416 * atoi(cap.c_str()) / 180.0);
            Serial.print ("BFCap ");
            Serial.println(atoi(cap.c_str()));
            slave->get_control()->set_BF(BFCAP, target);
            break;



        /** BF Avance
         x -> distance droit devant
         v -> vitesse de consigne (0 slow, 1 medium, 2 fast)
        **/
        case 4:
            Serial.println("@[Slave][S4][BF Avance]");
            stream >> x >> v;

            Serial.println("BFAvance");
            Serial.print(" ");
            Serial.print(atoi(x.c_str()));
            Serial.print(" ");
            Serial.print(atoi(v.c_str()));

            target = Coord(atoi(x.c_str()), 0, 0);

            //slave->get_control()->set_speed(atoi(v.c_str()));
            slave->get_control()->set_BF(BFFW, target);
            break;


        /** BF Droite
         x -> distance droit devant
         v -> vitesse de consigne (0 slow, 1 medium, 2 fast)
        **/
        case 5: //BFDroite
            Serial.println("@[Slave][S5][BF Droite]");
            stream >> x >> y >> cap >> v;

            Serial.print ("BFDroite ");
            Serial.print(atoi(x.c_str()));
            Serial.print(" ");
            Serial.print(atoi(y.c_str()));
            Serial.print(" ");
            Serial.println(atoi(cap.c_str()));
            //Serial.print(" ");
            //Serial.println(v);

            target = Coord(atoi(x.c_str()), atoi(y.c_str()), 3.14 * atoi(cap.c_str())/ 180.0);
            slave->get_control()->set_BF(BFXYCAP, target);
            //vit=determinerVitesse(v);
        //    slave->set<BFDroite>(x,y,cap ,vit,precis);
            break;


        /** BF cercle
         x -> distance droit devant
         v -> vitesse de consigne (0 slow, 1 medium, 2 fast)
        **/
        case 6: //BF Droite simple (sans cap)
            Serial.println("@[Slave][S6][BF Cercle]");
            //stream >> x >> y >> r >> cap >> s >> v;
            stream >> x >> y >> cap >> v;
            Serial.println("BF Droite sans correction de cap");
            break;



        /** Set speed
         v -> vitesse de consigne (0 slow, 1 medium, 2 fast)
        **/
        case 7: //set speed
            Serial.println("@[Slave][S7][Set Speed]");
            //Serial.println("Set speed");
            stream >> v;
            Serial.print("speed -> ");
            Serial.println(atoi(v.c_str()));
            slave->get_control()->set_speed(atoi(v.c_str()));
            //slave->get_control()->set_speed(1); //pour test uniquement

            break;


        /** Set gain PIDs
         x -> 0 gain dep, 1 gain cap
        **/
        case 8:
            Serial.println("@[Slave][S8][SET PID]");
            //Serial.println(" SET GAINS (DEBUG) ");

            stream>> x >> y >> z >> cap;

            if (atoi(x.c_str()) == 1 )
            {
                Serial.println("setting gains for dep");
                Serial.println(" Kp KI KV");

                slave->get_control()->setTuningDep(atof(y.c_str()), atof(z.c_str()), atof(cap.c_str())); // a revoir
                slave->get_control()->write_debug();

            }
            else
            {
                Serial.println(" setting gains for cap");
                Serial.println(" Kp KI KV");

                slave->get_control()-> setTuningCap(atof(y.c_str()), atof(z.c_str()), atof(cap.c_str()));
                slave->get_control()->write_debug();


            }
            break;

        /** Arret moteur
        **/
        case 9:
            Serial.println("@[Slave][S9][STOP]");
            //Serial.println("SLAVE : stop");
            slave->stop();
            break;
        }
        break;




    /*****************************************************
        ordre de type evitement
    ******************************************************/
    case 'E' :

        switch (ind)
        {

        /** desactivation evitement
        **/
        case 0:
            Serial.println("@[Slave][E0][EVITEMENT : OFF]");
            //Serial.println("EVITEMENT : OFF");
            slave->turn_off_evit();
            break;


        /** activation evitement
        **/
        case 1:
            Serial.println("@[Slave][E1][EVITEMENT : ACTIF]");
            //Serial.println("EVITEMENT : ACTIF");
            slave->turn_on_evit();
            break;


        /** debugg sonar
        **/
        case 2:
            //Serial.println("DEBUG SONAR: ");
            Serial.println("@[Slave][E2][Debug Sonar]");
            slave->get_control()->write_debug();
            break;


        /** debugg sonar
        **/
        case 3:
            Serial.println("@[Slave][E3][Debug Sonar][flux actif]");
            //Serial.println("DEBUG SONAR: flux actif");
            slave->bavardeur_sonar_on();// get_control()->bavardeur_sonar_on();
            break;


        /** debugg sonar
        **/
        case 4:
            Serial.println("@[Slave][E4][Debug Sonar][flux desactive]");
            //Serial.println("DEBUG SONAR: flux desactive");
            slave->bavardeur_sonar_off(); //get_control()->bavardeur_sonar_off();
            break;
        }
    break;



     /*****************************************************
        SPACE SHUTTLE
    ******************************************************/
    case 'H' :

        switch (ind)
        {

        /** lancement
        **/
        case 1:
            Serial.println("@[SpaceShuttle][H1][Lancement]");
            io->get_spaceShuttle()->trigger_launch();

            break;


        /** debug
        **/
        case 0:
            Serial.println("@[SpaceShuttle][H0][Debug]");
            io->get_spaceShuttle()->debug();
            break;

        }
    break;



     /*****************************************************
        STOCKER
    ******************************************************/
    case 'T' :

        switch (ind)
        {

        /** DEBUG -> seuil
        **/
        case 0:
            Serial.println("@[Stocker][T0][DEBUG ALL]");
            io->get_stocker_L()->debug();
            io->get_stocker_C()->debug();
            io->get_stocker_R()->debug();
            break;


        /** debug
        **/
        case 1:
            Serial.println("@[Stocker][T1][L][AUTO]");
            io->get_stocker_L()->trigger_auto();
            break;


        /** debug
        **/
        case 2:
            Serial.println("@[Stocker][T2][L][MANUEL]");
            io->get_stocker_L()->trigger_manuel();
            break;


        /** debug
        **/
        case 3:
            Serial.println("@[Stocker][T3][L][RELEASE]");
            io->get_stocker_L()->trigger_release();
            break;


        /** debug
        **/
        case 4:
            Serial.println("@[Stocker][T4][C][AUTO]");
            io->get_stocker_C()->trigger_auto();
            break;


        /** debug
        **/
        case 5:
            Serial.println("@[Stocker][T5][C][MANUEL]");
            io->get_stocker_C()->trigger_manuel();
            break;


        /** debug
        **/
        case 6:
            Serial.println("@[Stocker][T6][C][RELEASE]");
            io->get_stocker_C()->trigger_release();
            break;


        /** debug
        **/
        case 7:
            Serial.println("@[Stocker][T7][R][AUTO]");
            io->get_stocker_R()->trigger_auto();
            break;


        /** debug
        **/
        case 8:
            Serial.println("@[Stocker][T8][R][MANUEL]");
            io->get_stocker_R()->trigger_manuel();
            break;


        /** debug
        **/
        case 9:
            Serial.println("@[Stocker][T9][R][RELEASE]");
            io->get_stocker_R()->trigger_release();
            break;
        }



    break;



     /*****************************************************
        CLAW
    ******************************************************/
    case 'C' :

        switch (ind)
        {

        /** DEBUG -> seuil
        **/
        case 0:
            Serial.println("@[CLAW][ColorSensor][C0][DEBUG]");
            io->get_claw()->get_colorSensor()->debug();
            io->get_claw()->debug();
            break;

        case 1:
            Serial.println("@[CLAW][C1][OPEN MEDIUM]");
            io->get_claw()->trigger_open_medium();
            break;

        case 2:
            Serial.println("@[CLAW][C2][OPEN WIDE]");
            io->get_claw()->trigger_open_wide();
            break;

        case 3:
            Serial.println("@[CLAW][C3][CATCH MANUEL]");
            io->get_claw()->trigger_catch_manuel();
            break;

        case 4:
            Serial.println("@[CLAW][C4][CATCH AUTO]");
            io->get_claw()->trigger_catch_auto();
            break;

        case 5:
            Serial.println("@[CLAW][C5][FOLD]");
            io->get_claw()->trigger_close_folded();
            break;

        case 6:
            Serial.println("@[CLAW][C6][RETURN COLOR]");
            io->get_claw()->display_color();
            break;

        case 7:
            Serial.println("@[CLAW][C7][Asserv ON]");
            io->get_claw()->set_color_asserv_ON();
            break;

        case 8:
            Serial.println("@[CLAW][C8][Asserv OFF]");
            io->get_claw()->set_color_asserv_OFF();
            break;

        }
    break;



     /*****************************************************
        M : CLAW MOTOR
    ******************************************************/
    case 'M' :

        switch (ind)
        {

        /** DEBUG -> seuil
        **/
        case 0:
            Serial.println("@[CLAW Motor][M0][DEBUG]");
            io->get_claw()->get_clawMotor()->debug();
            //io->get_claw()->debug();
            break;

        case 1:
            stream >> x;
            Serial.println(atoi(x.c_str()));

            Serial.println("@[CLAW Motor][M1][test motor direction]");
            io->get_claw()->get_clawMotor()->motor_cmd(atoi(x.c_str()));
            //io->get_claw()->debug();
            break;

        case 2:
            stream >> x;
            Serial.println(atoi(x.c_str()));
            Serial.println("@[CLAW Motor][M2][test asserv angle]");
            io->get_claw()->get_clawMotor()->set_asserv((double)(atoi(x.c_str()) ));
            //io->get_claw()->debug();
            break;
        }
    break;


     /*****************************************************
        F : FLIPPER / ARM SYS
    ******************************************************/
    case 'F' :

        switch (ind)
        {
        case 0:
            Serial.println("@[ARM SYS][FLIPPER][F0][VERTICAL]");
            io->get_armSys()->get_flipper_vertical();
            break;

        case 1:
            Serial.println("@[ARM SYS][FLIPPER][F1][HORIZONTAL]");
            io->get_armSys()->get_flipper_horizontal();
            break;
        }
    break;


     /*****************************************************
        L : SLIDER / ARM SYS
    ******************************************************/
    case 'L' :

        switch (ind)
        {
        case 0:
            Serial.println("@[ARM SYS][SLIDER][L0][LEFT]");
            io->get_armSys()->get_slider_left();
            break;

        case 1:
            Serial.println("@[ARM SYS][SLIDER][L1][CENTRE]");
            io->get_armSys()->get_slider_centre();
            break;

        case 2:
            Serial.println("@[ARM SYS][SLIDER][L2][RIGHT]");
            io->get_armSys()->get_slider_right();
            break;

        }
    break;



     /*****************************************************
        Y : YAW / ARM SYS
    ******************************************************/
    case 'Y' :

        switch (ind)
        {
        case 0:
            Serial.println("@[ARM SYS][YAW][Y0][LEFT TOTAL]");
            io->get_armSys()->get_yaw_left_total();
            break;

        case 1:
            Serial.println("@[ARM SYS][YAW][Y1][LEFT DIAGONAL]");
            io->get_armSys()->get_yaw_left_diagonal();
            break;

        case 2:
            Serial.println("@[ARM SYS][YAW][Y2][FRONT]");
            io->get_armSys()->get_yaw_front();
            break;

        case 3:
            Serial.println("@[ARM SYS][YAW][Y3][RIGHT DIAGONAL]");
            io->get_armSys()->get_yaw_right_diagonal();
            break;

        case 4:
            Serial.println("@[ARM SYS][YAW][Y4][RIGHT TOTAL]");
            io->get_armSys()->get_yaw_right_total();
            break;
        }
    break;


     /*****************************************************
        P : PITCH / ARM SYS
    ******************************************************/
    case 'P' :

        switch (ind)
        {
        case 0:
            Serial.println("@[ARM SYS][PITCH][P0][FOLDED]");
            io->get_armSys()->get_pitch_folded();
            break;

        case 1:
            Serial.println("@[ARM SYS][PITCH][P1][FRONTAL CATCH AR]");
            io->get_armSys()->get_pitch_frontal_catch_AR();
            break;

        case 2:
            Serial.println("@[ARM SYS][PITCH][P2][FRONTAL CATCH AV]");
            io->get_armSys()->get_pitch_frontal_catch_AV();
            break;

        case 3:
            Serial.println("@[ARM SYS][PITCH][P3][UPPER CATCH TOP]");
            io->get_armSys()->get_pitch_upper_catch_TOP();
            break;

        case 4:
            Serial.println("@[ARM SYS][PITCH][P4][UPPER CATCH DOWN]");
            io->get_armSys()->get_pitch_upper_catch_DOWN();
            break;

        case 5:
            Serial.println("@[ARM SYS][PITCH][P5][UPPER STOCK]");
            io->get_armSys()->get_pitch_upper_stock();
            break;
        }
    break;



    }




    return;


}

