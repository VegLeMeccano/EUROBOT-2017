#ifndef INTERRUPTS_H
#define INTERRUPTS_H
// coucou on change rien
#include "Arduino.h"
#include "pins.h"

//variables globales

// ODO SLAVE
extern long ticG;
extern long ticD;
extern long ticG2;
extern long ticD2;

extern void inc_ticG();
extern void inc_ticD();


// ODO ROULETTE
extern long tic_roulette;
extern void inc_tic_roulette();

// COLOR SENSOR
extern long pulse_color;
extern void inc_pulse_color();




#endif
