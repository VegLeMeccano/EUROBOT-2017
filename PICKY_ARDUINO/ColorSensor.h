#ifndef COLOR_H
#define COLOR_H

#include "Utils/Period.h"
#include "Arduino.h"
//#include <Servo.h>
#include "interrupts.h"
#include "pins.h"

#include "Const.h"

#define SEUIL_ROUGE 3000//sup a
#define SEUIL_JAUNE 1300//inf a

#define PERIODE_COLOR_SENSOR 100

#define STATE_R 0
#define STATE_G 1
#define STATE_B 2

class ColorSensor
{
    private:
        Period period_reset;
        float last_count;
        long last_time;

        int state;
//        int frequency;
        int R;
        int G;
        int B;


    public:
        ColorSensor();

        bool is_bleue();
        bool is_yellow();
        bool is_white();

        int return_color();

        void run();
        void debug();

};

#endif

