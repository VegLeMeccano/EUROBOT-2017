#include "Zone_depose_module.h"

Zone_depose_module::Zone_depose_module(int locate_, int nb_max_):
    nb_slot_max(nb_max_),
    locate(locate_)
{
    //ctor
    for(int i=0; i<MAXIMAX;i++)
    {
        module_in_stock[i] = new Module();
        module_in_stock[i]->remove();
    }

}



int Zone_depose_module::nb_module_in_stock()
{
    int cpt = 0;
    for(int i=0 ; i<nb_slot_max ; i++)
    {
        if(module_in_stock[i]->is_present())
        {
            cpt++;
        }
    }
    return cpt;
}

int Zone_depose_module::nb_slot_available()
{
    return ( nb_slot_max - nb_module_in_stock() );
}

int Zone_depose_module::point_marked()
{
    switch(locate)
    {
        case BASE_LUNAIRE:
            return PTS_PER_MODULE_BASE_LUNAIRE*nb_module_in_stock();
            break;
        case ZONE_DEPART:
            return PTS_PER_MODULE_ZONE_DEPART*nb_module_in_stock();
            break;
    }
}


void Zone_depose_module::add_module_polychrome()
{
	add_module(Module(POLYCHROME));
}



void Zone_depose_module::add_module_monochrome()
{
	add_module(Module(MONOCHROME));
}


void Zone_depose_module::add_module(Module module_to_add)
{
    if(!is_full())
    {
        int indice = 0;
        while((module_in_stock[indice]->is_present()) && indice <nb_slot_max)
        {
            indice++;
        }
        // once slot is found
        module_in_stock[indice]->add();
        if(module_to_add.is_monochrome())
        {
            module_in_stock[indice]->set_monochrome();
        }
        else{
            module_in_stock[indice]->set_polychrome();
        }


    }
    // sinon rien... on est pas censé
}

bool Zone_depose_module::is_full()
{
    return (nb_slot_available()==0);
}
