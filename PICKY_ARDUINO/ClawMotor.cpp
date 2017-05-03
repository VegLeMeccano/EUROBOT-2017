#include "ClawMotor.h"


/**************************************************************************
                CONSTRUCTOR
**************************************************************************/
ClawMotor::ClawMotor():
    period_run(CMO_PERIOD),
    angular_target(0.0),
    angular_current(0.0),
    state_asserv(0),
    tic_last(0),
    tic_new(0),
    asserv_ON(false),
    tic_total(0),
    cmd_motor(0),
    cpt_near(0),
    cpt_near_max(0)
{
    servo_saber.attach(PIN_CLW_MOT_ROLLER_ENA);
    /*
    pinMode(PIN_CLW_MOT_ROLLER_ENA,OUTPUT);
    pinMode(PIN_CLW_MOT_ROLLER_IN1,OUTPUT);
    pinMode(PIN_CLW_MOT_ROLLER_IN2,OUTPUT);
    */
    Serial.println("[ClawMotor][init]");
    motor_stop();
}

/**************************************************************************
                CMD simple
**************************************************************************/
void ClawMotor::motor_stop()
{
    servo_saber.writeMicroseconds(CMO_CMD_SABER_STOP);
    /*
    analogWrite(PIN_CLW_MOT_ROLLER_ENA, 0);
    digitalWrite(PIN_CLW_MOT_ROLLER_IN1, LOW);
    digitalWrite(PIN_CLW_MOT_ROLLER_IN2, LOW);
    //Serial.println("[ClawMotor][ARRET MOTEUR]");
    */
}

void ClawMotor::motor_rotation_Trigo(int cmd)
{

    servo_saber.writeMicroseconds(CMO_CMD_SABER_STOP + cmd);
    /*
    analogWrite(PIN_CLW_MOT_ROLLER_ENA, CMO_CMD_MAX);
    //analogWrite(PIN_CLW_MOT_ROLLER_ENA, cmd);
    digitalWrite(PIN_CLW_MOT_ROLLER_IN1, LOW);
    digitalWrite(PIN_CLW_MOT_ROLLER_IN2, HIGH);
    */
    //Serial.println("[ClawMotor][rotation trigo]");
}

void ClawMotor::motor_rotation_Horaire(int cmd)
{
    servo_saber.writeMicroseconds(CMO_CMD_SABER_STOP - cmd);
    /*
    analogWrite(PIN_CLW_MOT_ROLLER_ENA, CMO_CMD_MAX);
    //analogWrite(PIN_CLW_MOT_ROLLER_ENA, cmd);
    digitalWrite(PIN_CLW_MOT_ROLLER_IN1, HIGH);
    digitalWrite(PIN_CLW_MOT_ROLLER_IN2, LOW);
    //Serial.println("[ClawMotor][rotation horaire]");
    */
}





void ClawMotor::motor_cmd(int cmd_)
{
    if(abs(cmd_) == 0)
    {
        motor_stop();
    }
    else{
        // rotation trigo
        if(cmd_ > 0 ){

            //limitation
            if(cmd_ > CMO_CMD_SABER_MAX){
                cmd_motor = CMO_CMD_SABER_MAX;
            }
            else{
                cmd_motor = cmd_;
            }

            motor_rotation_Trigo(cmd_motor);
        }
        // anti trigo
        else{

            //limtation
            if(abs(cmd_) > CMO_CMD_SABER_MAX){
                cmd_motor = CMO_CMD_SABER_MAX;
            }
            else{
                cmd_motor = abs(cmd_);
            }

            motor_rotation_Horaire(cmd_motor);
        }
    }
}


void ClawMotor::reset_tic_odo()
{
    tic_roulette = 0;
}

void ClawMotor::angular_update()
{
    //tic_last = tic_new;
    tic_new = tic_roulette;
    tic_total = tic_roulette;
    //reset_tic_odo();
    angular_current = double(((int)(((double)tic_total)*360.0/CMO_TIC_360_deg))%360);

}

void ClawMotor::angular_reset()
{
    angular_current = 0;
}


void ClawMotor::angular_set(double angle_)
{
    angular_current = angle_;
}


void ClawMotor::set_asserv(double angular_target_)
{
    asserv_ON = true;
    angular_target = double(((int)angular_target_)%360);
    Serial.print("[ClawMotor][Set asserv] -> ");
    Serial.println(angular_target);
}


void ClawMotor::set_asserv_propre(double angular_target_)
{
    asserv_ON = true;
    cpt_near_max = 2;
    angular_target = double(((int)angular_target_)%360);
    Serial.print("[ClawMotor][Set asserv] -> ");
    Serial.println(angular_target);
}



bool ClawMotor::is_error_near()
{
    return abs(get_error())<CMO_ERROR_MIN_DEG;
}

double ClawMotor::get_error()
{
    float diff = angular_target - angular_current;
    if (diff > 180)
    {
        return diff - 360;
    }
    else if (diff < -180)
    {
        return diff + 360;
    }
    else
    {
        return diff;
    }


    //return double( (  (int)(angular_target - angular_current) )%360);
}


void ClawMotor::new_prise()
{
    reset_tic_odo();
}

/**************************************************************************
                CHECK
**************************************************************************/
bool ClawMotor::get_assFini()
{
    return !asserv_ON;
}


/***********************************************************************
               DEBUG
***********************************************************************/
void ClawMotor::debug(){
    Serial.print("[CLAW MOTOR][DEBUG]");

    Serial.print("\t[tic total] -> ");
    Serial.println(tic_roulette);

    Serial.print("\t[angular current] -> ");
    Serial.println(angular_current);

    Serial.print("\t[angular target] -> ");
    Serial.println(angular_target);

    Serial.print("\t[angular offset] -> ");
    Serial.println(get_error());

    Serial.print("\t[asserv ON] -> ");
    Serial.println(asserv_ON);

    Serial.print("\t[asserv near] -> ");
    Serial.println(is_error_near());
}




/***********************************************************************
                RUN
***********************************************************************/
void ClawMotor::run(){


    if (period_run.is_over())
    {
        period_run.reset();
        angular_update();
        //motor_cmd(CMO_CMD_SABER_KP*get_error());

        //motor_cmd(get_error());

        // asserv en cours
        if (asserv_ON)
        {
            if(is_error_near())
            {

                if(cpt_near < cpt_near_max)
                {
                    cpt_near++;
                }
                else
                {
                    asserv_ON = false;
                    //cpt_near = 0;
                    cpt_near_max = 0;
                    Serial.println("# CLAW_MOTOR_AFINI");
                    motor_stop();
                }

            }
            else
            {
                motor_cmd(CMO_CMD_SABER_KP*get_error());
                cpt_near = 0;
            }
        }
        // no asserv
        else
        {
            motor_stop();
        }

    }
}

