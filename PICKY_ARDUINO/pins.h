#ifndef PINS_H
#define PINS_H

/*************************************
DEFINITION DES PINS ARDUINO (IO PICKY)
			PICKY
************************************* /


/*************************************
			STRATEGIE
*************************************/
// bumper, switch
#define PIN_STR_SWI_START 23
#define PIN_STR_SWI_COULEUR 25
#define PIN_STR_SWI_STRAT_1 27


/*************************************
			SLAVE
*************************************/
// MOTEUR via Sabertooth (PWM mode)
#define PIN_SLA_MOT_L 39
#define PIN_SLA_MOT_R 41

// SONAR
#define PIN_SLA_US A6

// ODOS
#define PIN_SLA_ODO_L_CHA 0 // == pin 2 (interrupt 0)
#define PIN_SLA_ODO_L_CHB 4
#define PIN_SLA_ODO_R_CHA 1 // == pin 3 (interrupt 1)
#define PIN_SLA_ODO_R_CHB 5



/*************************************
			STOCKAGE
*************************************/
// DETECTION
#define PIN_STO_IR_L A0
#define PIN_STO_IR_C A1
#define PIN_STO_IR_R A2

// SERVOS
#define PIN_STO_SER_L 38
#define PIN_STO_SER_C 40
#define PIN_STO_SER_R 42


/*************************************
			WATCH TOWER
*************************************/
// SERVOS
#define PIN_WAT_SER_PITCH 22
#define PIN_WAT_SER_YAW 24


/*************************************
			SPACE SHUTTLE
*************************************/
// SERVOS
#define PIN_SHU_SER 49

// Switch
#define PIN_SHU_SWI_LOCK 29
#define PIN_SHU_SWI_L 31
#define PIN_SHU_SWI_R 33


/*************************************
			CLAW
*************************************/

// DETECTION
#define PIN_CLW_IR A3

// COLOR
#define PIN_CLW_COL_OUT 3 // == pin 20 (interrupt 3)
#define PIN_CLW_COL_S0 11
#define PIN_CLW_COL_S1 10
#define PIN_CLW_COL_S2 9
#define PIN_CLW_COL_S3 8

// ODO
#define PIN_CLW_ODO_CHA 2 // == pin 21 (interrupt 2)
#define PIN_CLW_ODO_CHB 6

// MOTOR via L298N
#define PIN_CLW_MOT_ROLLER_IN2 48//44
#define PIN_CLW_MOT_ROLLER_IN1 46
#define PIN_CLW_MOT_ROLLER_ENA 44//48

// SERVOS
#define PIN_CLW_SER_SQUEEZE 26
#define PIN_CLW_SER_FLIPPER 28
#define PIN_CLW_SER_PITCH2 30
#define PIN_CLW_SER_PITCH1 32
#define PIN_CLW_SER_YAW 34
#define PIN_CLW_SER_SLIDER 36



#endif
