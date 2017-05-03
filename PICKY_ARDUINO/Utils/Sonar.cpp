#include "Sonar.h"

#define DISTANCE_DETECTION 400




/** utilisation de BAUMER UNDK 20U6903/S35A
*/

Sonar::Sonar(int pin_, Coord dir_):
    pin(pin_),
    dir(dir_),
    on(true)
{
    // constructeur
}


float Sonar::get_dist(){
    int sensorValue = analogRead(pin);

    if (sensorValue == 0)
    {
        Serial.print("warning check sonar connection, ");
    }
    return 90.442 + (float)sensorValue /1.0 *0.82383 ; //divide by max sensor value, multiply by 900 mm
}


bool Sonar::adv_detected(Coord pos_robot){
    if (!on)
    {
        return false;
    }
    float d = get_dist();
    if (d > 10.0 && d < DISTANCE_DETECTION)
    {
        /*
        adv = Coord(dir);
        adv.forward_translation(d) ;
        adv = Coord(
            pos_robot.get_x() + adv.get_x() * cos(pos_robot.get_cap()) + adv.get_y() * sin(pos_robot.get_cap()),
            pos_robot.get_y() + adv.get_y() * cos(pos_robot.get_cap()) + adv.get_x() * sin(pos_robot.get_cap()),
            pos_robot.get_cap());
            */
        adv = Coord(
            pos_robot.get_x() + (dir.get_x() + d)*cos(pos_robot.get_cap()) - (dir.get_y())*sin(pos_robot.get_cap()),
            pos_robot.get_y() + (dir.get_x() + d)*sin(pos_robot.get_cap()) + (dir.get_y())*cos(pos_robot.get_cap()),
            pos_robot.get_cap());

        Serial.print(" adversaire (COORD) : ");
        adv.write_serial();

        return adv.is_on_map();
    }
    return false;
}

void Sonar::turn_on(){
    on = true;
}

void Sonar::turn_off(){
    on = false;
}

void Sonar::write_debug(){
    Serial.print("\t[analog read] -> ");
    Serial.print(analogRead(pin));
    Serial.print("\t[distance] -> ");
    Serial.print(get_dist());
    Serial.print("\t[ADV] -> ");
    if (get_dist()<DISTANCE_DETECTION)
    {
        Serial.print("SOMETHING HERE < ");
        Serial.print(DISTANCE_DETECTION);
        Serial.println(" mm");
    }
    else
    {
        Serial.println("NOTHING...");
    }

    //adv_detected(Coord(0,0,0));
    // a modififier pour affichage de detection
    // is on map or not
    // coordonné du l'adv
}

void Sonar::write_adv_coord(){
    Serial.print("* ADVD ");
    adv.write_serial();
    Serial.println("# ADVD");
}

bool Sonar::mean_adv(Coord adv_){
   adv.barycentre(adv_, 0.5);
}

Coord Sonar::get_adv(){
    return adv;
}

