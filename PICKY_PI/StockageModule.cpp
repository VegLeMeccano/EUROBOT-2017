#include "StockageModule.h"

StockageModule::StockageModule():
        presence_module(false),
        color_monochrome(false),
        color_polychrome(false)
{
    //ctor
    release();
}

Module StockageModule::get_module()
{
    return Module(color_polychrome,presence_module);
}

void StockageModule::catch_polychrome()
{
    set_stockage_full();
    set_color_to_polychrome();
}


void StockageModule::catch_monochrome()
{
    set_stockage_full();
    set_color_to_monochrome();
}


void StockageModule::release()
{
    set_stockage_empty();
    color_monochrome = false;
    color_polychrome = false;
}



/****************************************
        PRESENCE
****************************************/
void StockageModule::set_stockage_empty()
{
    presence_module = false;
}

void StockageModule::set_stockage_full()
{
    presence_module = true;
}

bool StockageModule::is_stockage_empty()
{
    return !presence_module;
}

bool StockageModule::is_stockage_full()
{
    return presence_module;
}

/****************************************
        COLOR
****************************************/
void StockageModule::set_color_to_polychrome()
{
    color_polychrome = true;
    color_monochrome = false;
}

void StockageModule::set_color_to_monochrome()
{
    color_polychrome = false;
    color_monochrome = true;
}

bool StockageModule::is_color_polychrome()
{
    return color_polychrome;
}

bool StockageModule::is_color_monochrome()
{
    return color_monochrome;
}
