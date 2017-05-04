#include "Element_Robot.h"

Element_Robot::Element_Robot():
        stockage_CLAW()
{
    stockageModule[STOCK_L] = new StockageModule();
    stockageModule[STOCK_C] = new StockageModule();
    stockageModule[STOCK_R] = new StockageModule();
    cout <<"[ELEMENT ROBOT] -> [INIT]" << endl;
}


void Element_Robot::display()
{
    display_element();
}

void Element_Robot::display_element()
{
    cout <<"[ELEMENT ROBOT][DEBUG]" << endl;
    cout <<"-----------------ELEMENT ROBOT--------------------" << endl;

    cout << "[NB slot available] ->  #" << this->nb_slot_available()<<endl;
    cout << "[NB module present] ->  #" << this->nb_module_present()<<endl;

    cout << "[CLAW available] ->  #" << this->claw_available() <<endl;
    cout << "[STOCK available] ->  #" << this->stockage_available() <<endl;

    cout << "[can be stocked] ->  #" << this->can_be_stocked() <<endl;
    cout << "[where to stock] ->  #" << this->where_to_stock() <<endl;

    cout << "[CLAW] ->  #" << this->get_stockage_CLAW()->is_stockage_full();
    cout << " (P : " << this->get_stockage_CLAW()->is_color_polychrome() << " ; ";
    cout << "M : " << this->get_stockage_CLAW()->is_color_monochrome() << ")"<< endl;

    cout << "[STO_L] -> #" << this->get_stockage_L()->is_stockage_full();
    cout << " (P : " << this->get_stockage_L()->is_color_polychrome() << " ; ";
    cout << "M : " << this->get_stockage_L()->is_color_monochrome() << ")"<< endl;

    cout << "[STO_C] -> #" << this->get_stockage_C()->is_stockage_full();
    cout << " (P : " << this->get_stockage_C()->is_color_polychrome() << " ; ";
    cout << "M : " << this->get_stockage_C()->is_color_monochrome() << ")"<< endl;

    cout << "[STO_R] -> #" << this->get_stockage_R()->is_stockage_full();
    cout << " (P : " << this->get_stockage_R()->is_color_polychrome() << " ; ";
    cout << "M : " << this->get_stockage_R()->is_color_monochrome() << ")"<< endl;
    cout <<"---------------------------------------------------" << endl<< endl;
}


bool Element_Robot::is_presence_element()
{
    if( get_stockage_L()->is_stockage_full() || get_stockage_C()->is_stockage_full() || get_stockage_R()->is_stockage_full() || stockage_CLAW.is_stockage_full())
    {
        return true;
    }
    else {
        return false;
    }

}


StockageModule* Element_Robot::get_stockage_L()
{
    //return &stockage_L;
    return stockageModule[STOCK_L];
}

StockageModule* Element_Robot::get_stockage_C()
{
    //return &stockage_C;
    return stockageModule[STOCK_C];
}


StockageModule* Element_Robot::get_stockage_R()
{
    //return &stockage_R;
    return stockageModule[STOCK_R];
}

StockageModule* Element_Robot::get_stockage_CLAW()
{
    return &stockage_CLAW;
}


int Element_Robot::nb_module_present()
{
    return get_stockage_L()->is_stockage_full() + get_stockage_C()->is_stockage_full() +get_stockage_R()->is_stockage_full()+get_stockage_CLAW()->is_stockage_full();
}

int Element_Robot::nb_slot_available()
{
    return NB_MAX_MODULE_ROBOT-nb_module_present();
}

bool Element_Robot::claw_available()
{
    return get_stockage_CLAW()->is_stockage_empty();
}

bool Element_Robot::stockage_available()
{
    return (get_stockage_L()->is_stockage_empty() || get_stockage_C()->is_stockage_empty() ||get_stockage_R()->is_stockage_empty());
}




void Element_Robot::claw_to_stock_L()
{
    if(get_stockage_CLAW()->is_stockage_empty() || get_stockage_L()->is_stockage_full())
    {

    }
    else{
        if(get_stockage_CLAW()->is_color_monochrome())
        {
            get_stockage_CLAW()->release();
            get_stockage_L()->catch_monochrome();
        }
        else
        {
            get_stockage_CLAW()->release();
            get_stockage_L()->catch_polychrome();
        }

    }
}
void Element_Robot::claw_to_stock_C()
{
    if(get_stockage_CLAW()->is_stockage_empty() || get_stockage_C()->is_stockage_full())
    {

    }
    else{
        if(get_stockage_CLAW()->is_color_monochrome())
        {
            get_stockage_CLAW()->release();
            get_stockage_C()->catch_monochrome();
        }
        else
        {
            get_stockage_CLAW()->release();
            get_stockage_C()->catch_polychrome();
        }

    }
}
void Element_Robot::claw_to_stock_R()
{
    if(get_stockage_CLAW()->is_stockage_empty() || get_stockage_R()->is_stockage_full())
    {

    }
    else{
        if(get_stockage_CLAW()->is_color_monochrome())
        {
            get_stockage_CLAW()->release();
            get_stockage_R()->catch_monochrome();
        }
        else
        {
            get_stockage_CLAW()->release();
            get_stockage_R()->catch_polychrome();
        }

    }
}
void Element_Robot::stock_L_to_claw()
{
    if(get_stockage_L()->is_stockage_empty() || get_stockage_CLAW()->is_stockage_full())
    {

    }
    else{
        if(get_stockage_L()->is_color_monochrome())
        {
            get_stockage_L()->release();
            get_stockage_CLAW()->catch_monochrome();
        }
        else
        {
            get_stockage_L()->release();
            get_stockage_CLAW()->catch_polychrome();
        }

    }
}

void Element_Robot::stock_C_to_claw()
{
    if(get_stockage_C()->is_stockage_empty() || get_stockage_CLAW()->is_stockage_full())
    {

    }
    else{
        if(get_stockage_C()->is_color_monochrome())
        {
            get_stockage_C()->release();
            get_stockage_CLAW()->catch_monochrome();
        }
        else
        {
            get_stockage_C()->release();
            get_stockage_CLAW()->catch_polychrome();
        }

    }
}
void Element_Robot::stock_R_to_claw()
{
    if(get_stockage_R()->is_stockage_empty() || get_stockage_CLAW()->is_stockage_full())
    {

    }
    // TBD verif la destination avant utilisation sur cible?
    else{
        if(get_stockage_R()->is_color_monochrome())
        {
            get_stockage_R()->release();
            get_stockage_CLAW()->catch_monochrome();
        }
        else
        {
            get_stockage_R()->release();
            get_stockage_CLAW()->catch_polychrome();
        }

    }
}
void Element_Robot::vidange_stock()
{
    get_stockage_L()->release();
    get_stockage_C()->release();
    get_stockage_R()->release();
}
void Element_Robot::vidange_claw()
{
    get_stockage_CLAW()->release();
}

void Element_Robot::vidange_totale()
{
    vidange_claw();
    vidange_stock();
}


bool Element_Robot::can_be_stocked()
{
    return stockage_available();
}

int Element_Robot::where_to_stock()
{
    if(!can_be_stocked())
    {
        return -1;
    }
    else{
        int indice = 0;
        while(stockageModule[indice]->is_stockage_full())
        {
            indice++;
        }
        return indice;
    }
}

bool Element_Robot::can_be_picked_up()
{
    return (get_stockage_L()->is_stockage_full() || get_stockage_C()->is_stockage_full() || get_stockage_R()->is_stockage_full());
}

int Element_Robot::where_to_pick_up()
{
    if(!can_be_picked_up())
    {
        return -1;
    }
    else{
        int indice = 0;
        while(!stockageModule[indice]->is_stockage_full())
        {
            indice++;
        }
        return indice;
    }
}

void Element_Robot::stock_to_claw(int indice_)
{
    switch(indice_)
    {
        case -1:
            // do nothing
        break;

        case STOCK_L:
            stock_L_to_claw();
        break;

        case STOCK_C:
            stock_C_to_claw();
        break;

        case STOCK_R:
            stock_R_to_claw();
        break;
    }
}

void Element_Robot::claw_to_stock(int indice_)
{
    switch(indice_)
    {
        case -1:
            // do nothing
        break;

        case STOCK_L:
            claw_to_stock_L();
        break;

        case STOCK_C:
            claw_to_stock_C();
        break;

        case STOCK_R:
            claw_to_stock_R();
        break;
    }
}


int Element_Robot::where_to_pick_up_monochrome()
{
    for(int i =0 ; i<3 ; i++)
    {
        if(stockageModule[i]->is_stockage_full() && stockageModule[i]->is_color_monochrome())
        {
            return i;
        }
    }
    // pas trouvé
    return -1;
}


int Element_Robot::where_to_pick_up_polychrome()
{
    for(int i =0 ; i<3 ; i++)
    {
        if(stockageModule[i]->is_stockage_full() && stockageModule[i]->is_color_polychrome())
        {
            return i;
        }
    }
    // pas trouvé
    return -1;
}
