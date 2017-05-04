#ifndef Const_H
#define Const_H


/*
DEFINITION DES CONSTANTES IO PICKY
*/

#define STR_COLOR_BLUE 0
#define STR_COLOR_YELLOW 1



/** SHU: SPACE SHUTTLE
*/
#define SHU_PWM_SER_LOCK 1048   // servo en position fermé
#define SHU_PWM_SER_LAUNCH 1300 // servo en position ouverte


/** STO: STOCKER
*/
#define STO_PWM_SER_L_LOCK 760   // servo en position fermé
#define STO_PWM_SER_L_OPEN 1726 // servo en position ouverte

#define STO_PWM_SER_C_LOCK 1820   // servo en position fermé
#define STO_PWM_SER_C_OPEN 863 // servo en position ouverte

#define STO_PWM_SER_R_LOCK 1530   // servo en position fermé
#define STO_PWM_SER_R_OPEN 627 // servo en position ouverte

#define STO_SEUIL_IR_L 250 // seuil de detection IR
#define STO_SEUIL_IR_C 250 // seuil de detection IR
#define STO_SEUIL_IR_R 250 // seuil de detection IR



// sens des ODOS

/** CLW: CLAW
*/
#define CLW_PWM_SER_SQUEEZE_FOLDED 1982 // servo en position rangée
#define CLW_PWM_SER_SQUEEZE_CATCH 1800 // servo en position de serrage
#define CLW_PWM_SER_SQUEEZE_OPEN_MEDIUM 1650 // servo en position overture pour saisie delicate (en stock, prise dessus)
#define CLW_PWM_SER_SQUEEZE_OPEN_WIDE 1500 // servo en position grande ouverte pour prise généreuse... bang!

#define CLW_SEUIL_IR 250 // seuil de detection IR
#define CLW_SEUIL_IR_LIMIT_LOW 250 // seuil de detection IR
#define CLW_SEUIL_IR_LIMIT_UP 360 // seuil de detection IR


#define CLW_COLOR_UNKNOWN 0
#define CLW_COLOR_WHITE 1
#define CLW_COLOR_BLUE 2
#define CLW_COLOR_YELLOW 3


/** ARM: CLAW
*/
#define ARM_PWM_SER_FLIPPER_VERTICAL 876//788
#define ARM_PWM_SER_FLIPPER_HORIZONTAL 1824//1786


#define ARM_PWM_SER_SLIDER_LEFT 1071
#define ARM_PWM_SER_SLIDER_CENTRE 1418
#define ARM_PWM_SER_SLIDER_RIGHT 1792

#define ARM_PWM_SER_YAW_LEFT_TOTAL 790
#define ARM_PWM_SER_YAW_LEFT_DIAGONAL 1188
#define ARM_PWM_SER_YAW_FRONT 1541
#define ARM_PWM_SER_YAW_RIGHT_DIAGONAL 1864
#define ARM_PWM_SER_YAW_RIGHT_TOTAL 2302


#define ARM_PWM_SER_PITCH_1_FOLDED 544
#define ARM_PWM_SER_PITCH_2_FOLDED 2240

#define ARM_PWM_SER_PITCH_1_FRONTAL_CATCH_AR 832
#define ARM_PWM_SER_PITCH_2_FRONTAL_CATCH_AR 2067

#define ARM_PWM_SER_PITCH_1_FRONTAL_CATCH_AV 1132
#define ARM_PWM_SER_PITCH_2_FRONTAL_CATCH_AV 1792

#define ARM_PWM_SER_PITCH_1_UPPER_CATCH_TOP 2400
#define ARM_PWM_SER_PITCH_2_UPPER_CATCH_TOP 600

#define ARM_PWM_SER_PITCH_1_UPPER_CATCH_DOWN 2000
#define ARM_PWM_SER_PITCH_2_UPPER_CATCH_DOWN 600

#define ARM_PWM_SER_PITCH_1_UPPER_STOCK 2400
#define ARM_PWM_SER_PITCH_2_UPPER_STOCK 2240

#endif
