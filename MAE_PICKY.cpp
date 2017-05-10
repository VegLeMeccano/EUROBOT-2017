
#include "MAE_PICKY.h"


#include "Master.h"
#include <wiringPi.h>
#include <wiringSerial.h>
#include <iostream>
#include <string>

using namespace std;


MAE_PICKY::AnyState::~AnyState() {
}

// perform the 'do activity'
void MAE_PICKY::AnyState::_do(MAE_PICKY &) {
}

void MAE_PICKY::AnyState::create(MAE_PICKY &) {
}

// the current state doesn't manage the event start_mis, give it to the upper state
void MAE_PICKY::AnyState::start_mis(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->start_mis(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition start_mis not expected");
#endif
}

// the current state doesn't manage the event blocage, give it to the upper state
void MAE_PICKY::AnyState::blocage(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->blocage(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition blocage not expected");
#endif
}

// the current state doesn't manage the event time_out, give it to the upper state
void MAE_PICKY::AnyState::time_out(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->time_out(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition time_out not expected");
#endif
}

// the current state doesn't manage the event assFini, give it to the upper state
void MAE_PICKY::AnyState::assFini(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->assFini(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition assFini not expected");
#endif
}

// the current state doesn't manage the event start_enleve, give it to the upper state
void MAE_PICKY::AnyState::start_enleve(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->start_enleve(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition start_enleve not expected");
#endif
}

// the current state doesn't manage the event mission_collecte_module_centraux_initiale, give it to the upper state
void MAE_PICKY::AnyState::mission_collecte_module_centraux_initiale(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->mission_collecte_module_centraux_initiale(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition mission_collecte_module_centraux_initiale not expected");
#endif
}

// the current state doesn't manage the event mission_collecte_module_centraux_restant, give it to the upper state
void MAE_PICKY::AnyState::mission_collecte_module_centraux_restant(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->mission_collecte_module_centraux_restant(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition mission_collecte_module_centraux_restant not expected");
#endif
}

// the current state doesn't manage the event mission_collecte_distributeur_monochrome, give it to the upper state
void MAE_PICKY::AnyState::mission_collecte_distributeur_monochrome(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->mission_collecte_distributeur_monochrome(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition mission_collecte_distributeur_monochrome not expected");
#endif
}

// the current state doesn't manage the event mission_transfert_direct_distributeur_polychrome, give it to the upper state
void MAE_PICKY::AnyState::mission_transfert_direct_distributeur_polychrome(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->mission_transfert_direct_distributeur_polychrome(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition mission_transfert_direct_distributeur_polychrome not expected");
#endif
}

// the current state doesn't manage the event mission_push_distributeur_monochrome, give it to the upper state
void MAE_PICKY::AnyState::mission_push_distributeur_monochrome(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->mission_push_distributeur_monochrome(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition mission_push_distributeur_monochrome not expected");
#endif
}

// the current state doesn't manage the event mission_push_cratere, give it to the upper state
void MAE_PICKY::AnyState::mission_push_cratere(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->mission_push_cratere(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition mission_push_cratere not expected");
#endif
}

// the current state doesn't manage the event mission_drop_zone_depart, give it to the upper state
void MAE_PICKY::AnyState::mission_drop_zone_depart(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->mission_drop_zone_depart(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition mission_drop_zone_depart not expected");
#endif
}

// the current state doesn't manage the event mission_depot_base_diagonale, give it to the upper state
void MAE_PICKY::AnyState::mission_depot_base_diagonale(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->mission_depot_base_diagonale(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition mission_depot_base_diagonale not expected");
#endif
}

// the current state doesn't manage the event mission_depot_base_verticale, give it to the upper state
void MAE_PICKY::AnyState::mission_depot_base_verticale(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->mission_depot_base_verticale(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition mission_depot_base_verticale not expected");
#endif
}

// the current state doesn't manage the event evitement, give it to the upper state
void MAE_PICKY::AnyState::evitement(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->evitement(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition evitement not expected");
#endif
}

// the current state doesn't manage the event end_game, give it to the upper state
void MAE_PICKY::AnyState::end_game(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->end_game(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition end_game not expected");
#endif
}

// the current state doesn't manage the event near, give it to the upper state
void MAE_PICKY::AnyState::near(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->near(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition near not expected");
#endif
}

// the current state doesn't manage the event clw_stocked, give it to the upper state
void MAE_PICKY::AnyState::clw_stocked(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->clw_stocked(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition clw_stocked not expected");
#endif
}

// the current state doesn't manage the event clw_fail_catch, give it to the upper state
void MAE_PICKY::AnyState::clw_fail_catch(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->clw_fail_catch(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition clw_fail_catch not expected");
#endif
}

// the current state doesn't manage the event sto_l_stocked, give it to the upper state
void MAE_PICKY::AnyState::sto_l_stocked(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->sto_l_stocked(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition sto_l_stocked not expected");
#endif
}

// the current state doesn't manage the event sto_l_fail, give it to the upper state
void MAE_PICKY::AnyState::sto_l_fail(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->sto_l_fail(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition sto_l_fail not expected");
#endif
}

// the current state doesn't manage the event sto_c_stocked, give it to the upper state
void MAE_PICKY::AnyState::sto_c_stocked(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->sto_c_stocked(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition sto_c_stocked not expected");
#endif
}

// the current state doesn't manage the event sto_c_fail, give it to the upper state
void MAE_PICKY::AnyState::sto_c_fail(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->sto_c_fail(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition sto_c_fail not expected");
#endif
}

// the current state doesn't manage the event sto_r_stocked, give it to the upper state
void MAE_PICKY::AnyState::sto_r_stocked(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->sto_r_stocked(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition sto_r_stocked not expected");
#endif
}

// the current state doesn't manage the event sto_r_fail, give it to the upper state
void MAE_PICKY::AnyState::sto_r_fail(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->sto_r_fail(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition sto_r_fail not expected");
#endif
}

// the current state doesn't manage the event recall, give it to the upper state
void MAE_PICKY::AnyState::recall(MAE_PICKY & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->recall(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition recall not expected");
#endif
}

MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::WAIT_START_IN_State::~WAIT_START_IN_State() {
}

// to manage the event start_mis
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::WAIT_START_IN_State::start_mis(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._initialisation_state._recalage_ar_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.INITIALISATION.RECALAGE AR");
#endif
      stm._mae_picky_state._initialisation_state._recalage_ar_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::WAIT_START_IN_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::WAIT_START_IN_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.INITIALISATION.WAIT START IN");
#endif
  cout<<"wait start, to be inserted"<<endl;
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::WAIT_START_IN_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._initialisation_state;
}

MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::WAIT_START_OUT_State::~WAIT_START_OUT_State() {
}

// to manage the event start_enleve
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::WAIT_START_OUT_State::start_enleve(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._initialisation_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.INITIALISATION");
#endif
      stm._mae_picky_state._initialisation_state._exit1(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::WAIT_START_OUT_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::WAIT_START_OUT_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.INITIALISATION.WAIT START OUT");
#endif
  cout<<"wait start, to be removed"<<endl;
  
  // hold on
  serialPrintf(master->getPortSerie(),"S8 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::WAIT_START_OUT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._initialisation_state;
}

MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::AVANCE_State::~AVANCE_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::AVANCE_State::assFini(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._initialisation_state._avance_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._initialisation_state._wait_start_out_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.INITIALISATION.WAIT START OUT");
#endif
      stm._mae_picky_state._initialisation_state._wait_start_out_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::AVANCE_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::AVANCE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.INITIALISATION.AVANCE");
#endif
  // avance de 100 mm
  serialPrintf(master->getPortSerie(),"S4 100 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::AVANCE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._initialisation_state;
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::AVANCE_State::blocage(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._initialisation_state._avance_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._initialisation_state._wait_start_out_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.INITIALISATION.WAIT START OUT");
#endif
      stm._mae_picky_state._initialisation_state._wait_start_out_state.create(stm);
    }
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::AVANCE_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.INITIALISATION.AVANCE");
#endif
  
  // evitement on
  serialPrintf(master->getPortSerie(),"E1 \n");
}

MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::CHECK_COTE_State::~CHECK_COTE_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::CHECK_COTE_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._initialisation_state._avance_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.INITIALISATION.AVANCE");
#endif
      stm._mae_picky_state._initialisation_state._avance_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::CHECK_COTE_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::CHECK_COTE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.INITIALISATION.CHECK COTE");
#endif
  if(master->is_blue())
  {
  	// enclenche le stocker Left (vers le centre de la table)
  	// re-ouverture auto
  	serialPrintf(master->getPortSerie(),"T2 \n");
  }
  if(master->is_yellow())
  {
  	// enclenche le stocker Right (vers le centre de la table)
  	// re-ouverture auto
  	serialPrintf(master->getPortSerie(),"T8 \n");
  }
  master->set_time_out(1500);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::CHECK_COTE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._initialisation_state;
}

MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::SET_X_Y_CAP_State::~SET_X_Y_CAP_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::SET_X_Y_CAP_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._initialisation_state._check_cote_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.INITIALISATION.CHECK COTE");
#endif
      stm._mae_picky_state._initialisation_state._check_cote_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::SET_X_Y_CAP_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::SET_X_Y_CAP_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.INITIALISATION.SET X Y CAP");
#endif
  if(master->is_blue())
  {
  	serialPrintf(master->getPortSerie(),"S0 -602 1915 -90 \n");
  }
  if(master->is_yellow())
  {
  	serialPrintf(master->getPortSerie(),"S0 602 1915 -90 \n");
  }
  master->set_time_out(300);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::SET_X_Y_CAP_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._initialisation_state;
}

MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::RECALAGE_AR_State::~RECALAGE_AR_State() {
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::RECALAGE_AR_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._initialisation_state._set_x_y_cap_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.INITIALISATION.SET X Y CAP");
#endif
      stm._mae_picky_state._initialisation_state._set_x_y_cap_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::RECALAGE_AR_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::RECALAGE_AR_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.INITIALISATION.RECALAGE AR");
#endif
  cout<<"recalage AR"<<endl;
  // desactivation de l'evitement
  serialPrintf(master->getPortSerie(),"E0 \n"); 
  serialPrintf(master->getPortSerie(),"S0 0 0 0 \n");
  // recalage
  serialPrintf(master->getPortSerie(),"S2 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::RECALAGE_AR_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._initialisation_state;
}

MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::~INITIALISATION_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::create(MAE_PICKY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_picky_state._initialisation_state._wait_start_in_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.INITIALISATION.WAIT START IN");
#endif
      stm._mae_picky_state._initialisation_state._wait_start_in_state.create(stm);
    }
}

// to manage the exit point 'EXIT_INITIALISATION', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::_exit1(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU");
#endif
      stm._mae_picky_state._jeu_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.INITIALISATION");
#endif
  cout<<"ETAT INITIALISATION"<<endl;
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state;
}

MAE_PICKY::MAE_PICKY_State::END_State::~END_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::END_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::END_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.END");
#endif
  cout<<"ETAT END"<<endl;
  // affiche les stats du jeux: element robot, plateau de jeux et mission
  serialPrintf(master->getPortSerie(),"S9 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::END_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state;
}

MAE_PICKY::MAE_PICKY_State::EVITEMENT_State::ACTION_TO_DO_State::~ACTION_TO_DO_State() {
}

// to manage the event near
void MAE_PICKY::MAE_PICKY_State::EVITEMENT_State::ACTION_TO_DO_State::near(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.EVITEMENT");
#endif
      stm._mae_picky_state._evitement_state._exit28(stm);
    }
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::EVITEMENT_State::ACTION_TO_DO_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.EVITEMENT");
#endif
      stm._mae_picky_state._evitement_state._exit28(stm);
    }
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::EVITEMENT_State::ACTION_TO_DO_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.EVITEMENT");
#endif
      stm._mae_picky_state._evitement_state._exit28(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::EVITEMENT_State::ACTION_TO_DO_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::EVITEMENT_State::ACTION_TO_DO_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.EVITEMENT.ACTION TO DO");
#endif
  serialPrintf(master->getPortSerie(),"S8 \n");
  
  serialPrintf(master->getPortSerie(),"F0 \n");
  serialPrintf(master->getPortSerie(),"L2 \n");
  serialPrintf(master->getPortSerie(),"Y0 \n");
  serialPrintf(master->getPortSerie(),"P0 \n");
  
  serialPrintf(master->getPortSerie(),"C5 \n");
  
  // vitesse faible
  serialPrintf(master->getPortSerie(),"S7 0 \n"); 
  
  // recule un peu
  serialPrintf(master->getPortSerie(),"S4 -50 \n");
  
  master->set_time_out(500);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::EVITEMENT_State::ACTION_TO_DO_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._evitement_state;
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::EVITEMENT_State::ACTION_TO_DO_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.EVITEMENT");
#endif
      stm._mae_picky_state._evitement_state._exit28(stm);
    }
}

MAE_PICKY::MAE_PICKY_State::EVITEMENT_State::~EVITEMENT_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::EVITEMENT_State::create(MAE_PICKY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_picky_state._evitement_state._action_to_do_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.EVITEMENT.ACTION TO DO");
#endif
      stm._mae_picky_state._evitement_state._action_to_do_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::EVITEMENT_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.EVITEMENT");
#endif
  cout<<"ETAT EVITEMENT"<<endl;
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::EVITEMENT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state;
}

// to manage the exit point 'SORTIE_EVITEMENT', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::EVITEMENT_State::_exit28(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU");
#endif
      stm._mae_picky_state._jeu_state.create(stm);
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::DECISION_MISSION_State::~DECISION_MISSION_State() {
}

// to manage the event mission_collecte_module_centraux_initiale
void MAE_PICKY::MAE_PICKY_State::JEU_State::DECISION_MISSION_State::mission_collecte_module_centraux_initiale(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state.create(stm);
    }
}

// to manage the event mission_collecte_module_centraux_restant
void MAE_PICKY::MAE_PICKY_State::JEU_State::DECISION_MISSION_State::mission_collecte_module_centraux_restant(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state.create(stm);
    }
}

// to manage the event mission_collecte_distributeur_monochrome
void MAE_PICKY::MAE_PICKY_State::JEU_State::DECISION_MISSION_State::mission_collecte_distributeur_monochrome(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state.create(stm);
    }
}

// to manage the event mission_transfert_direct_distributeur_polychrome
void MAE_PICKY::MAE_PICKY_State::JEU_State::DECISION_MISSION_State::mission_transfert_direct_distributeur_polychrome(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state.create(stm);
    }
}

// to manage the event mission_push_distributeur_monochrome
void MAE_PICKY::MAE_PICKY_State::JEU_State::DECISION_MISSION_State::mission_push_distributeur_monochrome(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME");
#endif
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state.create(stm);
    }
}

// to manage the event mission_push_cratere
void MAE_PICKY::MAE_PICKY_State::JEU_State::DECISION_MISSION_State::mission_push_cratere(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE");
#endif
      stm._mae_picky_state._jeu_state._mission_push_cratere_state.create(stm);
    }
}

// to manage the event mission_drop_zone_depart
void MAE_PICKY::MAE_PICKY_State::JEU_State::DECISION_MISSION_State::mission_drop_zone_depart(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART");
#endif
      stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state.create(stm);
    }
}

// to manage the event mission_depot_base_diagonale
void MAE_PICKY::MAE_PICKY_State::JEU_State::DECISION_MISSION_State::mission_depot_base_diagonale(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_DIAGONALE");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state.create(stm);
    }
}

// to manage the event mission_depot_base_verticale
void MAE_PICKY::MAE_PICKY_State::JEU_State::DECISION_MISSION_State::mission_depot_base_verticale(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_VERTICALE");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state.create(stm);
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::DECISION_MISSION_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state;
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::DECISION_MISSION_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::DECISION_MISSION_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.DECISION_MISSION");
#endif
  cout<<"[MAE][JEU] -> DECISION DE MISSION"<<endl;
  master->decision_nouvelle_mission();
}

// to manage the event recall
void MAE_PICKY::MAE_PICKY_State::JEU_State::DECISION_MISSION_State::recall(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._recall_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.recall");
#endif
      stm._mae_picky_state._jeu_state._recall_state.create(stm);
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::recall_State::~recall_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::recall_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._decision_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.DECISION_MISSION");
#endif
      stm._mae_picky_state._jeu_state._decision_mission_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::recall_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::recall_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.recall");
#endif
  master->set_time_out(300);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::recall_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::~CAP_TO_MISSION_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state._bf_droite_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_VERTICALE.WAYPOINT INIT.BF DROITE MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state._bf_droite_mission_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state._bf_droite_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_VERTICALE.WAYPOINT INIT.BF DROITE MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state._bf_droite_mission_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_DEPOT_BASE_VERTICALE.WAYPOINT INIT.CAP TO MISSION");
#endif
  cout<< "BFCAP VERS MISSION "<<endl;
  
  string ordre;
  ordre = "S3 " + master->get_gestionnaire()->get_cap_to_mission_str() + " \n";
  const char* ordre_c = ordre.c_str();
  
  // vitesse moyenne & BF CAP
  serialPrintf(master->getPortSerie(),"S7 1 \n"); 	
  serialPrintf(master->getPortSerie(),ordre_c);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::BF_DROITE_MISSION_State::~BF_DROITE_MISSION_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::BF_DROITE_MISSION_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_VERTICALE.WAYPOINT INIT.CAP MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state._cap_mission_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::BF_DROITE_MISSION_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_VERTICALE.WAYPOINT INIT.CAP MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state._cap_mission_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::BF_DROITE_MISSION_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::BF_DROITE_MISSION_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_DEPOT_BASE_VERTICALE.WAYPOINT INIT.BF DROITE MISSION");
#endif
  cout<< "BF droite to MISSION "<<endl;
  
  string ordre;
  ordre = "S5 "+ master->get_gestionnaire()->get_x_mission_str()  + " "  + master->get_gestionnaire()->get_y_mission_str()  + " "  + master->get_gestionnaire()->get_cap_to_mission_str()  + " \n";
  const char* ordre_c = ordre.c_str();
  
  // BF droite
  serialPrintf(master->getPortSerie(),ordre_c); 
  cout<<"BF droite vers MISSION : "<<ordre<<endl;
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::BF_DROITE_MISSION_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::CAP_MISSION_State::~CAP_MISSION_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::CAP_MISSION_State::assFini(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state._cap_mission_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_VERTICALE.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state._exit27(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::CAP_MISSION_State::blocage(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state._cap_mission_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_VERTICALE.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state._exit27(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::CAP_MISSION_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::CAP_MISSION_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_DEPOT_BASE_VERTICALE.WAYPOINT INIT.CAP MISSION");
#endif
  cout<< "BF CAP MISSION "<<endl;
  
  string ordre;
  ordre = "S3 " + master->get_gestionnaire()->get_cap_mission_str() + " \n";
  const char* ordre_c = ordre.c_str();
  
  serialPrintf(master->getPortSerie(),ordre_c); 
  cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::CAP_MISSION_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_DEPOT_BASE_VERTICALE.WAYPOINT INIT.CAP MISSION");
#endif
  
  // vitesse lente
  serialPrintf(master->getPortSerie(),"S7 0 \n"); 
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::CAP_MISSION_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::~WAYPOINT_INIT_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::create(MAE_PICKY & stm) {
    {
      if (master->get_gestionnaire_mission()->is_mission_far()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state._cap_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_VERTICALE.WAYPOINT INIT.CAP TO MISSION");
#endif
        stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state._cap_to_mission_state.create(stm);
      }
      else if (!master->get_gestionnaire_mission()->is_mission_far()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_VERTICALE.WAYPOINT INIT.CAP MISSION");
#endif
        stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state._cap_mission_state.create(stm);
      }
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state;
}

// to manage the exit point 'SORTIE_WAYPOINT_INIT', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::_exit27(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._placement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_VERTICALE.PLACEMENT");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._placement_state.create(stm);
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::DEGAGEMENT_State::~DEGAGEMENT_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::DEGAGEMENT_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_VERTICALE");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._exit26(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::DEGAGEMENT_State::create(MAE_PICKY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::DEGAGEMENT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::ROUTINE_DE_POSE_State::~ROUTINE_DE_POSE_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::ROUTINE_DE_POSE_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._degagement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_VERTICALE.DEGAGEMENT");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._degagement_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::ROUTINE_DE_POSE_State::create(MAE_PICKY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::ROUTINE_DE_POSE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::PLACEMENT_State::~PLACEMENT_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::PLACEMENT_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._routine_de_pose_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_VERTICALE.ROUTINE DE POSE");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._routine_de_pose_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::PLACEMENT_State::create(MAE_PICKY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::PLACEMENT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::~MISSION_DEPOT_BASE_VERTICALE_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::create(MAE_PICKY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_VERTICALE.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._waypoint_init_state.create(stm);
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state;
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_DEPOT_BASE_VERTICALE");
#endif
  cout<<"[MAE][JEU][MISSION DEPOT BASE VERTICALE]"<<endl;
}

// to manage the exit point 'EXIT_MISSION_DEPOT_BASE_VERTICALE', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::_exit26(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._decision_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.DECISION_MISSION");
#endif
      stm._mae_picky_state._jeu_state._decision_mission_state.create(stm);
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::~CAP_TO_MISSION_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state._bf_droite_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_DIAGONALE.WAYPOINT INIT.BF DROITE TO MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state._bf_droite_to_mission_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state._bf_droite_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_DIAGONALE.WAYPOINT INIT.BF DROITE TO MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state._bf_droite_to_mission_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_DEPOT_BASE_DIAGONALE.WAYPOINT INIT.CAP TO MISSION");
#endif
  cout<< "BFCAP VERS MISSION "<<endl;
  
  string ordre;
  ordre = "S3 " + master->get_gestionnaire()->get_cap_to_mission_str() + " \n";
  const char* ordre_c = ordre.c_str();
  
  // vitesse moyenne & BF CAP
  serialPrintf(master->getPortSerie(),"S7 1 \n"); 	
  serialPrintf(master->getPortSerie(),ordre_c);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::CAP_MISSION_State::~CAP_MISSION_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::CAP_MISSION_State::assFini(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state._cap_mission_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_DIAGONALE.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state._exit25(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::CAP_MISSION_State::blocage(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state._cap_mission_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_DIAGONALE.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state._exit25(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::CAP_MISSION_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::CAP_MISSION_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_DEPOT_BASE_DIAGONALE.WAYPOINT INIT.CAP MISSION");
#endif
  cout<< "BF CAP MISSION "<<endl;
  
  string ordre;
  ordre = "S3 " + master->get_gestionnaire()->get_cap_mission_str() + " \n";
  const char* ordre_c = ordre.c_str();
  
  serialPrintf(master->getPortSerie(),ordre_c); 
  cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::CAP_MISSION_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_DEPOT_BASE_DIAGONALE.WAYPOINT INIT.CAP MISSION");
#endif
  
  // vitesse lente
  serialPrintf(master->getPortSerie(),"S7 0 \n"); 
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::CAP_MISSION_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::~BF_DROITE_TO_MISSION_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_DIAGONALE.WAYPOINT INIT.CAP MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state._cap_mission_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_DIAGONALE.WAYPOINT INIT.CAP MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state._cap_mission_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_DEPOT_BASE_DIAGONALE.WAYPOINT INIT.BF DROITE TO MISSION");
#endif
  cout<< "BF droite to MISSION "<<endl;
  
  string ordre;
  ordre = "S5 "+ master->get_gestionnaire()->get_x_mission_str()  + " "  + master->get_gestionnaire()->get_y_mission_str()  + " "  + master->get_gestionnaire()->get_cap_to_mission_str()  + " \n";
  const char* ordre_c = ordre.c_str();
  
  // BF droite
  serialPrintf(master->getPortSerie(),ordre_c); 
  cout<<"BF droite vers MISSION : "<<ordre<<endl;
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::~WAYPOINT_INIT_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::create(MAE_PICKY & stm) {
    {
      if (master->get_gestionnaire_mission()->is_mission_far()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state._cap_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_DIAGONALE.WAYPOINT INIT.CAP TO MISSION");
#endif
        stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state._cap_to_mission_state.create(stm);
      }
      else if (!master->get_gestionnaire_mission()->is_mission_far()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_DIAGONALE.WAYPOINT INIT.CAP MISSION");
#endif
        stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state._cap_mission_state.create(stm);
      }
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state;
}

// to manage the exit point 'SORTIE_WAYPOINT_INIT', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::_exit25(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._placement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_DIAGONALE.PLACEMENT");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._placement_state.create(stm);
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::DEGAGEMENT_State::~DEGAGEMENT_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::DEGAGEMENT_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_DIAGONALE");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._exit24(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::DEGAGEMENT_State::create(MAE_PICKY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::DEGAGEMENT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::ROUTINE_DE_POSE_State::~ROUTINE_DE_POSE_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::ROUTINE_DE_POSE_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._degagement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_DIAGONALE.DEGAGEMENT");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._degagement_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::ROUTINE_DE_POSE_State::create(MAE_PICKY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::ROUTINE_DE_POSE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::PLACEMENT_State::~PLACEMENT_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::PLACEMENT_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._routine_de_pose_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_DIAGONALE.ROUTINE DE POSE");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._routine_de_pose_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::PLACEMENT_State::create(MAE_PICKY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::PLACEMENT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::~MISSION_DEPOT_BASE_DIAGONALE_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::create(MAE_PICKY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DEPOT_BASE_DIAGONALE.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._waypoint_init_state.create(stm);
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state;
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_DEPOT_BASE_DIAGONALE");
#endif
  cout<<"[MAE][JEU][MISSION DEPOT BASE DIAGONALE]"<<endl;
}

// to manage the exit point 'EXIT_MISSION_DEPOT_BASE_DIAGONALE', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::_exit24(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._decision_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.DECISION_MISSION");
#endif
      stm._mae_picky_state._jeu_state._decision_mission_state.create(stm);
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::Cap_to_mission_State::~Cap_to_mission_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::Cap_to_mission_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._waypoint_init_state._bf_droite_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.WAYPOINT INIT.BF droite to mission");
#endif
      stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._waypoint_init_state._bf_droite_to_mission_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::Cap_to_mission_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._waypoint_init_state._bf_droite_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.WAYPOINT INIT.BF droite to mission");
#endif
      stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._waypoint_init_state._bf_droite_to_mission_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::Cap_to_mission_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::Cap_to_mission_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.WAYPOINT INIT.Cap to mission");
#endif
  cout<< "BFCAP VERS MISSION "<<endl;
  string ordre;
  ordre = "S3 " + master->get_gestionnaire()->get_cap_to_mission_str() + " \n";
  const char* ordre_c = ordre.c_str();
  
  // vitesse moyenne & BF CAP
  serialPrintf(master->getPortSerie(),"S7 1 \n"); 	
  serialPrintf(master->getPortSerie(),ordre_c);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::Cap_to_mission_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::Cap_mission_State::~Cap_mission_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::Cap_mission_State::_completion(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._waypoint_init_state._cap_mission_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._waypoint_init_state._exit23(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::Cap_mission_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::Cap_mission_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.WAYPOINT INIT.Cap mission");
#endif
  cout<<"BF CAP MISSION "<<endl;
  
  string ordre;
  ordre = "S3 " + master->get_gestionnaire()->get_cap_mission_str() + " \n";
  const char* ordre_c = ordre.c_str();
  
  serialPrintf(master->getPortSerie(),ordre_c); 
  cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::Cap_mission_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.WAYPOINT INIT.Cap mission");
#endif
  // vitesse lente
  serialPrintf(master->getPortSerie(),"S7 0 \n"); 
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::Cap_mission_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::BF_droite_to_mission_State::~BF_droite_to_mission_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::BF_droite_to_mission_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.WAYPOINT INIT.Cap mission");
#endif
      stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._waypoint_init_state._cap_mission_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::BF_droite_to_mission_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.WAYPOINT INIT.Cap mission");
#endif
      stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._waypoint_init_state._cap_mission_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::BF_droite_to_mission_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::BF_droite_to_mission_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.WAYPOINT INIT.BF droite to mission");
#endif
  cout<< "BF droite to MISSION "<<endl;
  
  string ordre;
  ordre = "S5 "+ master->get_gestionnaire()->get_x_mission_str()  + " "  + master->get_gestionnaire()->get_y_mission_str()  + " "  + master->get_gestionnaire()->get_cap_to_mission_str()  + " \n";
  const char* ordre_c = ordre.c_str();
  
  // BF droite
  serialPrintf(master->getPortSerie(),ordre_c); 
  cout<<"BF droite vers MISSION : "<<ordre<<endl;
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::BF_droite_to_mission_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::~WAYPOINT_INIT_State() {
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state;
}

// implement a junction, through an operation because shared, internal
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::_junction2(MAE_PICKY & stm) {
    {
      if (!master->get_gestionnaire_mission()->is_mission_far()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.WAYPOINT INIT.Cap mission");
#endif
        stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._waypoint_init_state._cap_mission_state.create(stm);
      }
      else if (master->get_gestionnaire_mission()->is_mission_far()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._waypoint_init_state._cap_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.WAYPOINT INIT.Cap to mission");
#endif
        stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._waypoint_init_state._cap_to_mission_state.create(stm);
      }
    }
}

// to manage the exit point 'SORTIE_WAYPOINT_INIT', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::_exit23(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._bf_droite_zone_depart_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.BF droite zone depart");
#endif
      stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._bf_droite_zone_depart_state.create(stm);
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Range_Arm_State::~Range_Arm_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Range_Arm_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART");
#endif
      stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._exit22(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Range_Arm_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Range_Arm_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Range Arm");
#endif
  // fermeture pince
  serialPrintf(master->getPortSerie(),"C5 \n");
  
  // replis bras
  serialPrintf(master->getPortSerie(),"F0 \n");
  serialPrintf(master->getPortSerie(),"L2 \n");
  serialPrintf(master->getPortSerie(),"Y0 \n");
  serialPrintf(master->getPortSerie(),"P0 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Range_Arm_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Recule_State::~Recule_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Recule_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._range_arm_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Range Arm");
#endif
      stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._range_arm_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Recule_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._range_arm_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Range Arm");
#endif
      stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._range_arm_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Recule_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Recule_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Recule");
#endif
  serialPrintf(master->getPortSerie(),"S4 -300 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Recule_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Ouverture_pince_State::~Ouverture_pince_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Ouverture_pince_State::time_out(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._ouverture_pince_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._avance_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Avance");
#endif
      stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._avance_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Ouverture_pince_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Ouverture_pince_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Ouverture pince");
#endif
  serialPrintf(master->getPortSerie(),"C1 \n");
  //serialPrintf(master->getPortSerie(),"C2 \n");
  
  master->set_time_out(200);
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Ouverture_pince_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Ouverture pince");
#endif
  // ecriture du module dans la zone de depart
  master->get_plateau_jeu()->get_depose_module_zone_depart()->add_module(master->get_element_robot()->get_stockage_CLAW()->get_module());
  
  // enleve le module de la pince
  //master->get_element_robot()->vidange_claw();
  master->get_element_robot()->get_stockage_CLAW()->release();
  
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Ouverture_pince_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Preparation_Arm_State::~Preparation_Arm_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Preparation_Arm_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._ouverture_pince_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Ouverture pince");
#endif
      stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._ouverture_pince_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Preparation_Arm_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Preparation_Arm_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Preparation Arm");
#endif
  serialPrintf(master->getPortSerie(),"F0 \n");
  serialPrintf(master->getPortSerie(),"L1 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
  serialPrintf(master->getPortSerie(),"P3 \n");
  
  master->set_time_out(500);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Preparation_Arm_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Avance_State::~Avance_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Avance_State::assFini(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._avance_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART");
#endif
      if (master->get_element_robot()-> nb_module_present_stock() >0) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._vidange_stockage_haut_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Vidange Stockage Haut");
#endif
        stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._vidange_stockage_haut_state.create(stm);
      }
      else if (master->get_element_robot()-> nb_module_present_stock() == 0) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Recule");
#endif
        stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._recule_state.create(stm);
      }
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Avance_State::blocage(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._avance_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART");
#endif
      if (master->get_element_robot()-> nb_module_present_stock() >0) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._vidange_stockage_haut_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Vidange Stockage Haut");
#endif
        stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._vidange_stockage_haut_state.create(stm);
      }
      else if (master->get_element_robot()-> nb_module_present_stock() == 0) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Recule");
#endif
        stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._recule_state.create(stm);
      }
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Avance_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Avance_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Avance");
#endif
  serialPrintf(master->getPortSerie(),"S4 270 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Avance_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state;
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Avance_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Avance");
#endif
  // hold position
  serialPrintf(master->getPortSerie(),"S8 \n");
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Vidange_Stockage_Haut_State::~Vidange_Stockage_Haut_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Vidange_Stockage_Haut_State::time_out(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._vidange_stockage_haut_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Recule");
#endif
      stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._recule_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Vidange_Stockage_Haut_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Vidange_Stockage_Haut_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Vidange Stockage Haut");
#endif
  // release all Stock
  serialPrintf(master->getPortSerie(),"T3 \n");
  serialPrintf(master->getPortSerie(),"T6 \n");
  serialPrintf(master->getPortSerie(),"T9 \n");
  
  master->set_time_out(1000);
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Vidange_Stockage_Haut_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Vidange Stockage Haut");
#endif
  // ecriture du module dans la zone de depart
  if(master->get_element_robot()->get_stockage_L()->is_stockage_full()){
  master->get_plateau_jeu()->get_depose_module_zone_depart()->add_module(master->get_element_robot()->get_stockage_L()->get_module());
  }
  if(master->get_element_robot()->get_stockage_C()->is_stockage_full()){
  master->get_plateau_jeu()->get_depose_module_zone_depart()->add_module(master->get_element_robot()->get_stockage_C()->get_module());
  }
  if(master->get_element_robot()->get_stockage_R()->is_stockage_full()){
  master->get_plateau_jeu()->get_depose_module_zone_depart()->add_module(master->get_element_robot()->get_stockage_R()->get_module());
  }
  
  
  // enleve les module du stock
  master->get_element_robot()->vidange_stock();
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Vidange_Stockage_Haut_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::BF_droite_zone_depart_State::~BF_droite_zone_depart_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::BF_droite_zone_depart_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART");
#endif
      if (master->get_element_robot()-> claw_available()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._avance_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Avance");
#endif
        stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._avance_state.create(stm);
      }
      else if (!master->get_element_robot()-> claw_available()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._preparation_arm_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Preparation Arm");
#endif
        stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._preparation_arm_state.create(stm);
      }
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::BF_droite_zone_depart_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART");
#endif
      if (master->get_element_robot()-> claw_available()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._avance_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Avance");
#endif
        stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._avance_state.create(stm);
      }
      else if (!master->get_element_robot()-> claw_available()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._preparation_arm_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.Preparation Arm");
#endif
        stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._preparation_arm_state.create(stm);
      }
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::BF_droite_zone_depart_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::BF_droite_zone_depart_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.BF droite zone depart");
#endif
  if(master->is_blue()){
  	serialPrintf(master->getPortSerie(),"S5 -1158 1533 90 \n");
  }
  if(master->is_yellow()){
  	serialPrintf(master->getPortSerie(),"S5 1158 1533 90 \n");
  }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::BF_droite_zone_depart_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::~MISSION_DROP_ZONE_DEPART_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::create(MAE_PICKY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._waypoint_init_state.create(stm);
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state;
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_DROP_ZONE_DEPART");
#endif
  cout<<"[MAE][JEU][MISSION DROP ZONE DEPART]"<<endl;
}

// to manage the exit point 'EXIT_MISSION_DROP_ZONE_DEPART', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::_exit22(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._decision_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.DECISION_MISSION");
#endif
      stm._mae_picky_state._jeu_state._decision_mission_state.create(stm);
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::Cap_to_mission_State::~Cap_to_mission_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::Cap_to_mission_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state._bf_droite_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.WAYPOINT INIT.BF droite to mission");
#endif
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state._bf_droite_to_mission_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::Cap_to_mission_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state._bf_droite_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.WAYPOINT INIT.BF droite to mission");
#endif
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state._bf_droite_to_mission_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::Cap_to_mission_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::Cap_to_mission_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.WAYPOINT INIT.Cap to mission");
#endif
  cout<< "BFCAP VERS MISSION "<<endl;
  
  string ordre;
  ordre = "S3 " + master->get_gestionnaire()->get_cap_to_mission_str() + " \n";
  const char* ordre_c = ordre.c_str();
  
  // vitesse moyenne & BF CAP
  serialPrintf(master->getPortSerie(),"S7 1 \n"); 	
  serialPrintf(master->getPortSerie(),ordre_c);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::Cap_to_mission_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::BF_droite_to_mission_State::~BF_droite_to_mission_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::BF_droite_to_mission_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.WAYPOINT INIT.Cap mission");
#endif
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state._cap_mission_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::BF_droite_to_mission_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.WAYPOINT INIT.Cap mission");
#endif
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state._cap_mission_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::BF_droite_to_mission_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::BF_droite_to_mission_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.WAYPOINT INIT.BF droite to mission");
#endif
  cout<<"BF droite to MISSION "<<endl;
  
  string ordre;
  ordre = "S5 "+ master->get_gestionnaire()->get_x_mission_str()  + " "  + master->get_gestionnaire()->get_y_mission_str()  + " "  + master->get_gestionnaire()->get_cap_to_mission_str()  + " \n";
  const char* ordre_c = ordre.c_str();
  
  // BF droite
  serialPrintf(master->getPortSerie(),ordre_c); 
  cout<<"BF droite vers MISSION : "<<ordre<<endl;
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::BF_droite_to_mission_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::Cap_mission_State::~Cap_mission_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::Cap_mission_State::assFini(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state._cap_mission_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state._exit20(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::Cap_mission_State::blocage(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state._cap_mission_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state._exit20(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::Cap_mission_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::Cap_mission_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.WAYPOINT INIT.Cap mission");
#endif
  cout<< "BF CAP MISSION "<<endl;
  
  string ordre;
  ordre = "S3 " + master->get_gestionnaire()->get_cap_mission_str() + " \n";
  const char* ordre_c = ordre.c_str();
  
  serialPrintf(master->getPortSerie(),ordre_c); 
  cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
  
  	
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::Cap_mission_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.WAYPOINT INIT.Cap mission");
#endif
  // vitesse lente
  serialPrintf(master->getPortSerie(),"S7 0 \n"); 
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::Cap_mission_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::~WAYPOINT_INIT_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::create(MAE_PICKY & stm) {
    {
      if (master->get_gestionnaire_mission()->is_mission_far()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state._cap_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.WAYPOINT INIT.Cap to mission");
#endif
        stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state._cap_to_mission_state.create(stm);
      }
      else if (!master->get_gestionnaire_mission()->is_mission_far()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.WAYPOINT INIT.Cap mission");
#endif
        stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state._cap_mission_state.create(stm);
      }
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_cratere_state;
}

// to manage the exit point 'SORTIE_WAYPOINT_INIT', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::_exit20(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state._preparation_arm_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.PREPARATION ARM");
#endif
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._preparation_arm_state.create(stm);
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::RANGE_ARM_State::~RANGE_ARM_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::RANGE_ARM_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE");
#endif
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._exit19(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::RANGE_ARM_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::RANGE_ARM_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.RANGE ARM");
#endif
  // replis bras
  serialPrintf(master->getPortSerie(),"F0 \n");
  serialPrintf(master->getPortSerie(),"L2 \n");
  serialPrintf(master->getPortSerie(),"Y0 \n");
  serialPrintf(master->getPortSerie(),"P0 \n");
  
  master->set_time_out(500);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::RANGE_ARM_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_cratere_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::RECULE_State::~RECULE_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::RECULE_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state._range_arm_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.RANGE ARM");
#endif
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._range_arm_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::RECULE_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state._range_arm_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.RANGE ARM");
#endif
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._range_arm_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::RECULE_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::RECULE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.RECULE");
#endif
  serialPrintf(master->getPortSerie(),"S4 -300 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::RECULE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_cratere_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::GOLF_PLAYING_State::PREPARATION_DU_SWING_State::~PREPARATION_DU_SWING_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::GOLF_PLAYING_State::PREPARATION_DU_SWING_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state._golf_playing_state._shoot_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.GOLF PLAYING.SHOOT");
#endif
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._golf_playing_state._shoot_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::GOLF_PLAYING_State::PREPARATION_DU_SWING_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::GOLF_PLAYING_State::PREPARATION_DU_SWING_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.GOLF PLAYING.PREPARATION DU SWING");
#endif
  if(master->is_blue()){
  	// position diagonal left, slide left, pitch catch AV
  	serialPrintf(master->getPortSerie(),"F0 \n");
  	serialPrintf(master->getPortSerie(),"L0 \n");
  	serialPrintf(master->getPortSerie(),"Y1 \n");
  	serialPrintf(master->getPortSerie(),"P2 \n");
  }
  if(master->is_yellow()){
  	// position diagonal right, slide right, pitch catch AV
  	serialPrintf(master->getPortSerie(),"F0 \n");
  	serialPrintf(master->getPortSerie(),"L2 \n");
  	serialPrintf(master->getPortSerie(),"Y3 \n");
  	serialPrintf(master->getPortSerie(),"P2 \n");
  }
  master->set_time_out(500);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::GOLF_PLAYING_State::PREPARATION_DU_SWING_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_cratere_state._golf_playing_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::GOLF_PLAYING_State::SHOOT_State::~SHOOT_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::GOLF_PLAYING_State::SHOOT_State::time_out(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._golf_playing_state._shoot_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state._golf_playing_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.GOLF PLAYING");
#endif
      if (master->get_compteur()->get_compte() <2) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state._golf_playing_state._preparation_du_swing_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.GOLF PLAYING.PREPARATION DU SWING");
#endif
        stm._mae_picky_state._jeu_state._mission_push_cratere_state._golf_playing_state._preparation_du_swing_state.create(stm);
      }
      else if (master->get_compteur()->get_compte() >=2) {
        stm._mae_picky_state._jeu_state._mission_push_cratere_state._golf_playing_state._exit21(stm);
      }
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::GOLF_PLAYING_State::SHOOT_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::GOLF_PLAYING_State::SHOOT_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.GOLF PLAYING.SHOOT");
#endif
  if(master->is_blue()){
  	// position front, slide right, pitch catch AV
  	serialPrintf(master->getPortSerie(),"F0 \n");
  	serialPrintf(master->getPortSerie(),"L2 \n");
  	serialPrintf(master->getPortSerie(),"Y2 \n");
  	serialPrintf(master->getPortSerie(),"P2 \n");
  }
  if(master->is_yellow()){
  	// position front, slide left, pitch catch AV
  	serialPrintf(master->getPortSerie(),"F0 \n");
  	serialPrintf(master->getPortSerie(),"L0 \n");
  	serialPrintf(master->getPortSerie(),"Y2 \n");
  	serialPrintf(master->getPortSerie(),"P2 \n");
  }
  master->set_time_out(500);
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::GOLF_PLAYING_State::SHOOT_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.GOLF PLAYING.SHOOT");
#endif
  master->get_compteur()->incremente();
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::GOLF_PLAYING_State::SHOOT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_cratere_state._golf_playing_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::GOLF_PLAYING_State::~GOLF_PLAYING_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::GOLF_PLAYING_State::create(MAE_PICKY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state._golf_playing_state._preparation_du_swing_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.GOLF PLAYING.PREPARATION DU SWING");
#endif
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._golf_playing_state._preparation_du_swing_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::GOLF_PLAYING_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.GOLF PLAYING");
#endif
  // depend du cote:  a repeter 1 ou 2 fois
  master->get_compteur()->reset();
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::GOLF_PLAYING_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_cratere_state;
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::GOLF_PLAYING_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.GOLF PLAYING");
#endif
  master->get_plateau_jeu()->get_cratere_zone_depart()->vidange();
  master->get_gestionnaire_mission()->get_mission_push_cratere()->mission_remplie();
}

// to manage the exit point 'SORTIE_GOLF_PLAYING', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::GOLF_PLAYING_State::_exit21(MAE_PICKY & stm) {
    _doexit(stm);
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.RECULE");
#endif
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._recule_state.create(stm);
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::AVANCE_State::~AVANCE_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::AVANCE_State::assFini(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._avance_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state._golf_playing_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.GOLF PLAYING");
#endif
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._golf_playing_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::AVANCE_State::blocage(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._avance_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state._golf_playing_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.GOLF PLAYING");
#endif
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._golf_playing_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::AVANCE_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::AVANCE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.AVANCE");
#endif
  serialPrintf(master->getPortSerie(),"S4 260 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::AVANCE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_cratere_state;
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::AVANCE_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.AVANCE");
#endif
  // hold position
  serialPrintf(master->getPortSerie(),"S8 \n");
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::PREPARATION_ARM_State::~PREPARATION_ARM_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::PREPARATION_ARM_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state._avance_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.AVANCE");
#endif
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._avance_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::PREPARATION_ARM_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::PREPARATION_ARM_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.PREPARATION ARM");
#endif
  if(master->is_blue()){
  	// position diagonal left, slide left, pitch catch AV
  	serialPrintf(master->getPortSerie(),"F0 \n");
  	serialPrintf(master->getPortSerie(),"L0 \n");
  	serialPrintf(master->getPortSerie(),"Y1 \n");
  	serialPrintf(master->getPortSerie(),"P2 \n");
  }
  if(master->is_yellow()){
  	// position diagonal right, slide right, pitch catch AV
  	serialPrintf(master->getPortSerie(),"F0 \n");
  	serialPrintf(master->getPortSerie(),"L2 \n");
  	serialPrintf(master->getPortSerie(),"Y3 \n");
  	serialPrintf(master->getPortSerie(),"P2 \n");
  }
  master->set_time_out(500);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::PREPARATION_ARM_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_cratere_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::~MISSION_PUSH_CRATERE_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::create(MAE_PICKY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_CRATERE.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._waypoint_init_state.create(stm);
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state;
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_CRATERE");
#endif
  cout<<"[MAE][JEU][MISSION PUSH CRATERE]"<<endl;
}

// to manage the exit point 'EXIT_MISSION_PUSH_CRATERE', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::_exit19(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._decision_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.DECISION_MISSION");
#endif
      stm._mae_picky_state._jeu_state._decision_mission_state.create(stm);
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::PLACEMENT_State::~PLACEMENT_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::PLACEMENT_State::assFini(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._placement_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW");
#endif
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::PLACEMENT_State::blocage(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._placement_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW");
#endif
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::PLACEMENT_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::PLACEMENT_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.PLACEMENT");
#endif
  serialPrintf(master->getPortSerie(),"S7 0 \n");
  
  if(master->is_blue())
  {
  	serialPrintf(master->getPortSerie(),"S5 -349 1648 90 \n");
  }
  if(master->is_yellow())
  {
  	serialPrintf(master->getPortSerie(),"S5 349 1648 90 \n");
  }
  //
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::PLACEMENT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state;
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::PLACEMENT_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.PLACEMENT");
#endif
  //hold position
  serialPrintf(master->getPortSerie(),"S8 \n");
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::DEGAGEMENT_State::~DEGAGEMENT_State() {
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::DEGAGEMENT_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME");
#endif
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._exit16(stm);
    }
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::DEGAGEMENT_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME");
#endif
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._exit16(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::DEGAGEMENT_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::DEGAGEMENT_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.DEGAGEMENT");
#endif
  serialPrintf(master->getPortSerie(),"S4 -200 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::DEGAGEMENT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::Cap_to_mission_State::~Cap_to_mission_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::Cap_to_mission_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._waypoint_init_state._bf_droite_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT.BF droite to mission");
#endif
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._waypoint_init_state._bf_droite_to_mission_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::Cap_to_mission_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._waypoint_init_state._bf_droite_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT.BF droite to mission");
#endif
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._waypoint_init_state._bf_droite_to_mission_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::Cap_to_mission_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::Cap_to_mission_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT.Cap to mission");
#endif
  cout<< "BFCAP VERS MISSION "<<endl;
  
  string ordre;
  ordre = "S3 " + master->get_gestionnaire()->get_cap_to_mission_str() + " \n";
  const char* ordre_c = ordre.c_str();
  
  // vitesse moyenne & BF CAP
  serialPrintf(master->getPortSerie(),"S7 1 \n"); 	
  serialPrintf(master->getPortSerie(),ordre_c);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::Cap_to_mission_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::Cap_mission_State::~Cap_mission_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::Cap_mission_State::_completion(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._waypoint_init_state._cap_mission_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._waypoint_init_state._exit18(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::Cap_mission_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::Cap_mission_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT.Cap mission");
#endif
  cout<< "BF CAP MISSION "<<endl;
  
  string ordre;
  ordre = "S3 " + master->get_gestionnaire()->get_cap_mission_str() + " \n";
  const char* ordre_c = ordre.c_str();
  
  serialPrintf(master->getPortSerie(),ordre_c); 
  cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
  
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::Cap_mission_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT.Cap mission");
#endif
  // vitesse lente
  serialPrintf(master->getPortSerie(),"S7 0 \n"); 
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::Cap_mission_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::BF_droite_to_mission_State::~BF_droite_to_mission_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::BF_droite_to_mission_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT.Cap mission");
#endif
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._waypoint_init_state._cap_mission_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::BF_droite_to_mission_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT.Cap mission");
#endif
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._waypoint_init_state._cap_mission_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::BF_droite_to_mission_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::BF_droite_to_mission_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT.BF droite to mission");
#endif
  cout<< "BF droite to MISSION "<<endl;
  
  string ordre;
  ordre = "S5 "+ master->get_gestionnaire()->get_x_mission_str()  + " "  + master->get_gestionnaire()->get_y_mission_str()  + " "  + master->get_gestionnaire()->get_cap_to_mission_str()  + " \n";
  const char* ordre_c = ordre.c_str();
  
  // BF droite
  serialPrintf(master->getPortSerie(),ordre_c); 
  cout<<"BF droite vers MISSION : "<<ordre<<endl;
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::BF_droite_to_mission_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::~WAYPOINT_INIT_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::create(MAE_PICKY & stm) {
    {
      if (!master->get_gestionnaire_mission()->is_mission_far()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT.Cap mission");
#endif
        stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._waypoint_init_state._cap_mission_state.create(stm);
      }
      else if (master->get_gestionnaire_mission()->is_mission_far()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._waypoint_init_state._cap_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT.Cap to mission");
#endif
        stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._waypoint_init_state._cap_to_mission_state.create(stm);
      }
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state;
}

// to manage the exit point 'SORTIE_WAYPOINT_INIT', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::_exit18(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._placement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.PLACEMENT");
#endif
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._placement_state.create(stm);
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::ROTATION_AND_SLIDE_VERS_ZONE_DE_POSE_State::~ROTATION_AND_SLIDE_VERS_ZONE_DE_POSE_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::ROTATION_AND_SLIDE_VERS_ZONE_DE_POSE_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._pose_sur_zone_depart_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.POSE SUR ZONE DEPART");
#endif
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._pose_sur_zone_depart_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::ROTATION_AND_SLIDE_VERS_ZONE_DE_POSE_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::ROTATION_AND_SLIDE_VERS_ZONE_DE_POSE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.ROTATION AND SLIDE VERS ZONE DE POSE");
#endif
  // position front, slide centre, pitch folded
  serialPrintf(master->getPortSerie(),"F0 \n");
  if(master->is_blue()){
  	// slide left, diagonal left
  	serialPrintf(master->getPortSerie(),"L0 \n");
  	serialPrintf(master->getPortSerie(),"Y1 \n");
  }
  if(master->is_yellow()){
  	// slide left, diagonal left
  	serialPrintf(master->getPortSerie(),"L2 \n");
  	serialPrintf(master->getPortSerie(),"Y3 \n");
  }
  serialPrintf(master->getPortSerie(),"P0 \n");
  
  master->set_time_out(500);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::ROTATION_AND_SLIDE_VERS_ZONE_DE_POSE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::REPLIS_State::~REPLIS_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::REPLIS_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW");
#endif
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._exit17(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::REPLIS_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::REPLIS_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.REPLIS");
#endif
  // position front, slide centre, pitch folded
  serialPrintf(master->getPortSerie(),"F0 \n");
  serialPrintf(master->getPortSerie(),"L2 \n");
  serialPrintf(master->getPortSerie(),"Y0 \n");
  serialPrintf(master->getPortSerie(),"P0 \n");
  
  serialPrintf(master->getPortSerie(),"C5 \n");
  
  master->set_time_out(100);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::REPLIS_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::RECENTRAGE_State::~RECENTRAGE_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::RECENTRAGE_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW");
#endif
      if (!master->get_plateau_jeu()->get_distributeur_monochrome()->is_empty()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._prise_ar_face_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.PRISE AR FACE");
#endif
        stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._prise_ar_face_state.create(stm);
      }
      else if (master->get_plateau_jeu()->get_distributeur_monochrome()->is_empty()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._replis_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.REPLIS");
#endif
        stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._replis_state.create(stm);
      }
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::RECENTRAGE_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::RECENTRAGE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.RECENTRAGE");
#endif
  // position front, slide centre, pitch folded
  serialPrintf(master->getPortSerie(),"F0 \n");
  serialPrintf(master->getPortSerie(),"L1 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
  serialPrintf(master->getPortSerie(),"P0 \n");
  
  serialPrintf(master->getPortSerie(),"C5 \n");
  
  master->set_time_out(500);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::RECENTRAGE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::DEGAGEMENT_State::~DEGAGEMENT_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::DEGAGEMENT_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::DEGAGEMENT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state;
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::DEGAGEMENT_State::time_out(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._degagement_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._recentrage_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.RECENTRAGE");
#endif
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._recentrage_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::DEGAGEMENT_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.DEGAGEMENT");
#endif
  // replis et ouverture de pince
  serialPrintf(master->getPortSerie(),"P0 \n");
  
  master->set_time_out(500);
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::DEGAGEMENT_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.DEGAGEMENT");
#endif
  master->get_plateau_jeu()->get_depose_module_zone_depart()->add_module_monochrome();
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::POSE_SUR_ZONE_DEPART_State::~POSE_SUR_ZONE_DEPART_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::POSE_SUR_ZONE_DEPART_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::POSE_SUR_ZONE_DEPART_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state;
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::POSE_SUR_ZONE_DEPART_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._degagement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.DEGAGEMENT");
#endif
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._degagement_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::POSE_SUR_ZONE_DEPART_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.POSE SUR ZONE DEPART");
#endif
  // deplis et ouverture de pince
  serialPrintf(master->getPortSerie(),"P2 \n");
  serialPrintf(master->getPortSerie(),"C2 \n");
  
  master->set_time_out(500);
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::RECULE_PINCE_State::~RECULE_PINCE_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::RECULE_PINCE_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::RECULE_PINCE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state;
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::RECULE_PINCE_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._rotation_and_slide_vers_zone_de_pose_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.ROTATION AND SLIDE VERS ZONE DE POSE");
#endif
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._rotation_and_slide_vers_zone_de_pose_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::RECULE_PINCE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.RECULE PINCE");
#endif
  // position front, slide centre, pitch folded
  serialPrintf(master->getPortSerie(),"F0 \n");
  serialPrintf(master->getPortSerie(),"L1 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
  serialPrintf(master->getPortSerie(),"P0 \n");
  
  master->set_time_out(500);
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::PRISE_AV_FACE_State::~PRISE_AV_FACE_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::PRISE_AV_FACE_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::PRISE_AV_FACE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.PRISE AV FACE");
#endif
  // position front, slide centre, pitch folded
  serialPrintf(master->getPortSerie(),"F0 \n");
  serialPrintf(master->getPortSerie(),"L1 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
  serialPrintf(master->getPortSerie(),"P2 \n");
  
  master->set_time_out(3000);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::PRISE_AV_FACE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state;
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::PRISE_AV_FACE_State::time_out(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._prise_av_face_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW");
#endif
      if (!master->get_plateau_jeu()->get_distributeur_monochrome()->is_empty()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._prise_ar_face_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.PRISE AR FACE");
#endif
        stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._prise_ar_face_state.create(stm);
      }
      else if (master->get_plateau_jeu()->get_distributeur_monochrome()->is_empty()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._replis_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.REPLIS");
#endif
        stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._replis_state.create(stm);
      }
    }
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::PRISE_AV_FACE_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.PRISE AV FACE");
#endif
  master->get_plateau_jeu()->get_distributeur_monochrome()->remove_from_below();
}

// to manage the event clw_stocked
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::PRISE_AV_FACE_State::clw_stocked(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._prise_av_face_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._recule_pince_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.RECULE PINCE");
#endif
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._recule_pince_state.create(stm);
    }
}

// to manage the event clw_fail_catch
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::PRISE_AV_FACE_State::clw_fail_catch(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._prise_av_face_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW");
#endif
      if (!master->get_plateau_jeu()->get_distributeur_monochrome()->is_empty()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._prise_ar_face_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.PRISE AR FACE");
#endif
        stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._prise_ar_face_state.create(stm);
      }
      else if (master->get_plateau_jeu()->get_distributeur_monochrome()->is_empty()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._replis_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.REPLIS");
#endif
        stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._replis_state.create(stm);
      }
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::PRISE_AR_FACE_State::~PRISE_AR_FACE_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::PRISE_AR_FACE_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::PRISE_AR_FACE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state;
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::PRISE_AR_FACE_State::time_out(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._prise_ar_face_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._prise_av_face_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.PRISE AV FACE");
#endif
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._prise_av_face_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::PRISE_AR_FACE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.PRISE AR FACE");
#endif
  // position front, slide centre, pitch folded
  serialPrintf(master->getPortSerie(),"F0 \n");
  serialPrintf(master->getPortSerie(),"L1 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
  serialPrintf(master->getPortSerie(),"P0 \n");
  
  master->set_time_out(300);
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::PRISE_AR_FACE_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.PRISE AR FACE");
#endif
  // claw open wide
  serialPrintf(master->getPortSerie(),"C2 \n");
  
  // claw catch auto
  serialPrintf(master->getPortSerie(),"C4 \n");
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::~CATCH_AND_THROW_State() {
}

// implement a junction, through an operation because shared, internal
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::_junction1(MAE_PICKY & stm) {
    {
      if (!master->get_plateau_jeu()->get_distributeur_monochrome()->is_empty()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._prise_ar_face_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.PRISE AR FACE");
#endif
        stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._prise_ar_face_state.create(stm);
      }
      else if (master->get_plateau_jeu()->get_distributeur_monochrome()->is_empty()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._replis_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.CATCH AND THROW.REPLIS");
#endif
        stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._catch_and_throw_state._replis_state.create(stm);
      }
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state;
}

// to manage the exit point 'SORTIE CATCH AND THROW', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::_exit17(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._degagement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.DEGAGEMENT");
#endif
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._degagement_state.create(stm);
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::~MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::create(MAE_PICKY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._waypoint_init_state.create(stm);
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state;
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_PUSH_DISTRIBUTEUR_MONOCHROME");
#endif
  cout<<"[MAE][JEU][MISSION PUSH DISTRIBUTEUR MONOCHROME]"<<endl;
}

// to manage the exit point 'EXIT_MISSION_PUSH_DISTRIBUTEUR_MONOCHROME', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::_exit16(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._decision_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.DECISION_MISSION");
#endif
      stm._mae_picky_state._jeu_state._decision_mission_state.create(stm);
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::~CAP_TO_MISSION_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state._bf_droite_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.WAYPOINT INIT.BF DROITE TO MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state._bf_droite_to_mission_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state._bf_droite_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.WAYPOINT INIT.BF DROITE TO MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state._bf_droite_to_mission_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.WAYPOINT INIT.CAP TO MISSION");
#endif
  cout<< "BFCAP VERS MISSION "<<endl;
  
  string ordre;
  ordre = "S3 " + master->get_gestionnaire()->get_cap_to_mission_str() + " \n";
  const char* ordre_c = ordre.c_str();
  
  // vitesse moyenne & BF CAP
  serialPrintf(master->getPortSerie(),"S7 1 \n"); 	
  serialPrintf(master->getPortSerie(),ordre_c);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::CAP_MISSION_State::~CAP_MISSION_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::CAP_MISSION_State::assFini(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state._cap_mission_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state._exit14(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::CAP_MISSION_State::blocage(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state._cap_mission_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state._exit14(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::CAP_MISSION_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::CAP_MISSION_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.WAYPOINT INIT.CAP MISSION");
#endif
  cout<< "BF CAP MISSION "<<endl;
  
  string ordre;
  ordre = "S3 " + master->get_gestionnaire()->get_cap_mission_str() + " \n";
  const char* ordre_c = ordre.c_str();
  
  serialPrintf(master->getPortSerie(),ordre_c); 
  cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::CAP_MISSION_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.WAYPOINT INIT.CAP MISSION");
#endif
  
  // vitesse lente
  serialPrintf(master->getPortSerie(),"S7 0 \n"); 
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::CAP_MISSION_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::~BF_DROITE_TO_MISSION_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.WAYPOINT INIT.CAP MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state._cap_mission_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.WAYPOINT INIT.CAP MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state._cap_mission_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.WAYPOINT INIT.BF DROITE TO MISSION");
#endif
  cout<< "BF droite to MISSION "<<endl;
  
  string ordre;
  ordre = "S5 "+ master->get_gestionnaire()->get_x_mission_str()  + " "  + master->get_gestionnaire()->get_y_mission_str()  + " "  + master->get_gestionnaire()->get_cap_to_mission_str()  + " \n";
  const char* ordre_c = ordre.c_str();
  
  // BF droite
  serialPrintf(master->getPortSerie(),ordre_c); 
  cout<<"BF droite vers MISSION : "<<ordre<<endl;
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::~WAYPOINT_INIT_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::create(MAE_PICKY & stm) {
    {
      if (master->get_gestionnaire_mission()->is_mission_far()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state._cap_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.WAYPOINT INIT.CAP TO MISSION");
#endif
        stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state._cap_to_mission_state.create(stm);
      }
      else if (!master->get_gestionnaire_mission()->is_mission_far()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.WAYPOINT INIT.CAP MISSION");
#endif
        stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state._cap_mission_state.create(stm);
      }
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state;
}

// to manage the exit point 'SORTIE_WAYPOINT_INIT', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::_exit14(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._preparation_arm_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.PREPARATION ARM");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._preparation_arm_state.create(stm);
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::DEGAGEMENT_State::~DEGAGEMENT_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::DEGAGEMENT_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._replis_arm_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.REPLIS ARM");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._replis_arm_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::DEGAGEMENT_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._replis_arm_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.REPLIS ARM");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._replis_arm_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::DEGAGEMENT_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::DEGAGEMENT_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.DEGAGEMENT");
#endif
  serialPrintf(master->getPortSerie(),"S4 -200 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::DEGAGEMENT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::PREPARATION_ARM_State::~PREPARATION_ARM_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::PREPARATION_ARM_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._approche_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.APPROCHE");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._approche_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::PREPARATION_ARM_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::PREPARATION_ARM_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.PREPARATION ARM");
#endif
  // position front, slide centre, pitch folded
  serialPrintf(master->getPortSerie(),"F0 \n");
  
  if(master->is_blue()){
  	serialPrintf(master->getPortSerie(),"L0 \n");
  	serialPrintf(master->getPortSerie(),"Y1 \n");
  }
  if(master->is_yellow()){
  	serialPrintf(master->getPortSerie(),"L2 \n");
  	serialPrintf(master->getPortSerie(),"Y3 \n");
  }
  
  serialPrintf(master->getPortSerie(),"P0 \n");
  
  serialPrintf(master->getPortSerie(),"C5 \n");
  
  master->set_time_out(150);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::PREPARATION_ARM_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::REPLIS_ARM_State::~REPLIS_ARM_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::REPLIS_ARM_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._exit13(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::REPLIS_ARM_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::REPLIS_ARM_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.REPLIS ARM");
#endif
  // position front, slide centre, pitch folded
  serialPrintf(master->getPortSerie(),"F0 \n");
  serialPrintf(master->getPortSerie(),"L2 \n");
  serialPrintf(master->getPortSerie(),"Y0 \n");
  serialPrintf(master->getPortSerie(),"P0 \n");
  
  serialPrintf(master->getPortSerie(),"C5 \n");
  
  master->set_time_out(150);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::REPLIS_ARM_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::REPLIS_State::~REPLIS_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::REPLIS_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._exit15(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::REPLIS_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::REPLIS_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state;
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::REPLIS_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.REPLIS");
#endif
  // position front, slide centre, pitch folded
  serialPrintf(master->getPortSerie(),"F0 \n");
  
  if(master->is_blue()){
  	serialPrintf(master->getPortSerie(),"L0 \n");
  	serialPrintf(master->getPortSerie(),"Y1 \n");
  }
  if(master->is_yellow()){
  	serialPrintf(master->getPortSerie(),"L2 \n");
  	serialPrintf(master->getPortSerie(),"Y3 \n");
  }
  
  serialPrintf(master->getPortSerie(),"P0 \n");
  
  
  serialPrintf(master->getPortSerie(),"C5 \n");
  serialPrintf(master->getPortSerie(),"C8 \n");
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::DEGAGEMENT_DROP_State::~DEGAGEMENT_DROP_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::DEGAGEMENT_DROP_State::time_out(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._degagement_drop_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._retour_centre_folded_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.RETOUR CENTRE FOLDED");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._retour_centre_folded_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::DEGAGEMENT_DROP_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::DEGAGEMENT_DROP_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.DEGAGEMENT DROP");
#endif
  if(master->is_blue()){
  	serialPrintf(master->getPortSerie(),"Y1 \n");
  }
  if(master->is_yellow()){
  	serialPrintf(master->getPortSerie(),"Y3 \n");
  }
  master->set_time_out(200);
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::DEGAGEMENT_DROP_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.DEGAGEMENT DROP");
#endif
  serialPrintf(master->getPortSerie(),"F0 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::DEGAGEMENT_DROP_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::RETOUR_CENTRE_FOLDED_State::~RETOUR_CENTRE_FOLDED_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::RETOUR_CENTRE_FOLDED_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::RETOUR_CENTRE_FOLDED_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state;
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::RETOUR_CENTRE_FOLDED_State::time_out(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._retour_centre_folded_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE");
#endif
      if (!master->get_plateau_jeu()->get_distributeur_polychrome()->is_empty()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._prise_ar_diagonal_side_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.PRISE AR DIAGONAL SIDE");
#endif
        stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._prise_ar_diagonal_side_state.create(stm);
      }
      else if (master->get_plateau_jeu()->get_distributeur_polychrome()->is_empty()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._replis_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.REPLIS");
#endif
        stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._replis_state.create(stm);
      }
    }
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::RETOUR_CENTRE_FOLDED_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.RETOUR CENTRE FOLDED");
#endif
  serialPrintf(master->getPortSerie(),"P0 \n");
  master->set_time_out(200);
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::RETOUR_CENTRE_FOLDED_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.RETOUR CENTRE FOLDED");
#endif
  if(master->is_blue()){
  	serialPrintf(master->getPortSerie(),"L0 \n");
  }
  if(master->is_yellow()){
  	serialPrintf(master->getPortSerie(),"L2 \n");
  }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::DROP_State::~DROP_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::DROP_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::DROP_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.DROP");
#endif
  master->get_plateau_jeu()->get_depose_module_base_laterale()->add_module_polychrome();
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::DROP_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state;
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::DROP_State::time_out(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._drop_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._degagement_drop_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.DEGAGEMENT DROP");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._degagement_drop_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::DROP_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.DROP");
#endif
  serialPrintf(master->getPortSerie(),"C1 \n");
  master->set_time_out(200);
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::COUP_DE_PLACEMENT_State::~COUP_DE_PLACEMENT_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::COUP_DE_PLACEMENT_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::COUP_DE_PLACEMENT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state;
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::COUP_DE_PLACEMENT_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._drop_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.DROP");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._drop_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::COUP_DE_PLACEMENT_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.COUP DE PLACEMENT");
#endif
  serialPrintf(master->getPortSerie(),"Y2 \n");
  master->set_time_out(200);
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PITCH_UP_State::~PITCH_UP_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PITCH_UP_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PITCH_UP_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state;
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PITCH_UP_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._coup_de_placement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.COUP DE PLACEMENT");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._coup_de_placement_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PITCH_UP_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.PITCH UP");
#endif
  serialPrintf(master->getPortSerie(),"P3 \n");
  serialPrintf(master->getPortSerie(),"F1 \n");
  master->set_time_out(200);
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::ROTATION_DECALAGE_CENTRAL_State::~ROTATION_DECALAGE_CENTRAL_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::ROTATION_DECALAGE_CENTRAL_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::ROTATION_DECALAGE_CENTRAL_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state;
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::ROTATION_DECALAGE_CENTRAL_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._pitch_up_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.PITCH UP");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._pitch_up_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::ROTATION_DECALAGE_CENTRAL_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.ROTATION DECALAGE CENTRAL");
#endif
  serialPrintf(master->getPortSerie(),"L1 \n");
  // possibilité de decaller plus si besoin, voir aller retour
  master->set_time_out(100);
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::DEGAGEMENT_PRISE_State::~DEGAGEMENT_PRISE_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::DEGAGEMENT_PRISE_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::DEGAGEMENT_PRISE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state;
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::DEGAGEMENT_PRISE_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._rotation_decalage_central_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.ROTATION DECALAGE CENTRAL");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._rotation_decalage_central_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::DEGAGEMENT_PRISE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.DEGAGEMENT PRISE");
#endif
  serialPrintf(master->getPortSerie(),"P0 \n");
  master->set_time_out(100);
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PRISE_AV_DIAGONAL_SIDE_State::~PRISE_AV_DIAGONAL_SIDE_State() {
}

// to manage the event clw_stocked
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PRISE_AV_DIAGONAL_SIDE_State::clw_stocked(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._prise_av_diagonal_side_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._degagement_prise_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.DEGAGEMENT PRISE");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._degagement_prise_state.create(stm);
    }
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PRISE_AV_DIAGONAL_SIDE_State::time_out(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._prise_av_diagonal_side_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE");
#endif
      if (!master->get_plateau_jeu()->get_distributeur_polychrome()->is_empty()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._prise_ar_diagonal_side_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.PRISE AR DIAGONAL SIDE");
#endif
        stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._prise_ar_diagonal_side_state.create(stm);
      }
      else if (master->get_plateau_jeu()->get_distributeur_polychrome()->is_empty()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._replis_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.REPLIS");
#endif
        stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._replis_state.create(stm);
      }
    }
}

// to manage the event clw_fail_catch
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PRISE_AV_DIAGONAL_SIDE_State::clw_fail_catch(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._prise_av_diagonal_side_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE");
#endif
      if (!master->get_plateau_jeu()->get_distributeur_polychrome()->is_empty()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._prise_ar_diagonal_side_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.PRISE AR DIAGONAL SIDE");
#endif
        stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._prise_ar_diagonal_side_state.create(stm);
      }
      else if (master->get_plateau_jeu()->get_distributeur_polychrome()->is_empty()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._replis_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.REPLIS");
#endif
        stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._replis_state.create(stm);
      }
    }
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PRISE_AV_DIAGONAL_SIDE_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.PRISE AV DIAGONAL SIDE");
#endif
  master->get_plateau_jeu()->get_distributeur_polychrome()->remove_from_below();
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PRISE_AV_DIAGONAL_SIDE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state;
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PRISE_AV_DIAGONAL_SIDE_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PRISE_AV_DIAGONAL_SIDE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.PRISE AV DIAGONAL SIDE");
#endif
  serialPrintf(master->getPortSerie(),"P2 \n");
  master->set_time_out(3000);
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PRISE_AR_DIAGONAL_SIDE_State::~PRISE_AR_DIAGONAL_SIDE_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PRISE_AR_DIAGONAL_SIDE_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PRISE_AR_DIAGONAL_SIDE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state;
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PRISE_AR_DIAGONAL_SIDE_State::time_out(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._prise_ar_diagonal_side_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._prise_av_diagonal_side_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.PRISE AV DIAGONAL SIDE");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._prise_av_diagonal_side_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PRISE_AR_DIAGONAL_SIDE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.PRISE AR DIAGONAL SIDE");
#endif
  serialPrintf(master->getPortSerie(),"F0 \n");
  
  if(master->is_blue()){
  	serialPrintf(master->getPortSerie(),"L0 \n");
  	serialPrintf(master->getPortSerie(),"Y1 \n");
  }
  if(master->is_yellow()){
  	serialPrintf(master->getPortSerie(),"L2 \n");
  	serialPrintf(master->getPortSerie(),"Y3 \n");
  }
  
  serialPrintf(master->getPortSerie(),"P0 \n");
  
  //master->set_time_out(200);
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PRISE_AR_DIAGONAL_SIDE_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.PRISE AR DIAGONAL SIDE");
#endif
  serialPrintf(master->getPortSerie(),"C2 \n");
  serialPrintf(master->getPortSerie(),"C4 \n");
  serialPrintf(master->getPortSerie(),"C7 \n");
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::~CATCH_AND_PLACE_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::create(MAE_PICKY & stm) {
    {
      if (!master->get_plateau_jeu()->get_distributeur_polychrome()->is_empty()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._prise_ar_diagonal_side_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.PRISE AR DIAGONAL SIDE");
#endif
        stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._prise_ar_diagonal_side_state.create(stm);
      }
      else if (master->get_plateau_jeu()->get_distributeur_polychrome()->is_empty()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._replis_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE.REPLIS");
#endif
        stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state._replis_state.create(stm);
      }
    }
}

// to manage the exit point 'Sortie_catch_and_place', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::_exit15(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._degagement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.DEGAGEMENT");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._degagement_state.create(stm);
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::APPROCHE_State::~APPROCHE_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::APPROCHE_State::assFini(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._approche_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::APPROCHE_State::blocage(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._approche_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.CATCH AND PLACE");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._catch_and_place_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::APPROCHE_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::APPROCHE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.APPROCHE");
#endif
  if(master->is_blue()){
  	serialPrintf(master->getPortSerie(),"S5 -1214 900 180 \n");
  }
  if(master->is_yellow()){
  	serialPrintf(master->getPortSerie(),"S5 1214 900 0 \n");
  }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::APPROCHE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state;
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::APPROCHE_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.APPROCHE");
#endif
  // hold position
  serialPrintf(master->getPortSerie(),"S8 \n");
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::~MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::create(MAE_PICKY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._waypoint_init_state.create(stm);
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state;
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME");
#endif
  cout<<"[MAE][JEU][MISSION TRANSFERT DIRECT DISTRIBUTEUR POLYCHROME]"<<endl;
}

// to manage the exit point 'EXIT_MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::_exit13(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._decision_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.DECISION_MISSION");
#endif
      stm._mae_picky_state._jeu_state._decision_mission_state.create(stm);
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::~CAP_TO_MISSION_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state._bf_droite_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT.BF DROITE TO MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state._bf_droite_to_mission_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state._bf_droite_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT.BF DROITE TO MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state._bf_droite_to_mission_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT.CAP TO MISSION");
#endif
  cout<< "BFCAP VERS MISSION "<<endl;
  
  string ordre;
  ordre = "S3 " + master->get_gestionnaire()->get_cap_to_mission_str() + " \n";
  const char* ordre_c = ordre.c_str();
  
  // vitesse moyenne & BF CAP
  serialPrintf(master->getPortSerie(),"S7 1 \n"); 	
  serialPrintf(master->getPortSerie(),ordre_c);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::CAP_MISSION_State::~CAP_MISSION_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::CAP_MISSION_State::assFini(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state._cap_mission_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state._exit12(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::CAP_MISSION_State::blocage(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state._cap_mission_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state._exit12(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::CAP_MISSION_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::CAP_MISSION_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT.CAP MISSION");
#endif
  cout<< "BF CAP MISSION "<<endl;
  
  string ordre;
  ordre = "S3 " + master->get_gestionnaire()->get_cap_mission_str() + " \n";
  const char* ordre_c = ordre.c_str();
  
  serialPrintf(master->getPortSerie(),ordre_c); 
  cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::CAP_MISSION_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT.CAP MISSION");
#endif
  
  // vitesse lente
  serialPrintf(master->getPortSerie(),"S7 0 \n"); 
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::CAP_MISSION_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::~BF_DROITE_TO_MISSION_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT.CAP MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state._cap_mission_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT.CAP MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state._cap_mission_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT.BF DROITE TO MISSION");
#endif
  cout<< "BF droite to MISSION "<<endl;
  
  string ordre;
  ordre = "S5 "+ master->get_gestionnaire()->get_x_mission_str()  + " "   + master->get_gestionnaire()->get_y_mission_str()  + " "   + master->get_gestionnaire()->get_cap_to_mission_str()  + " \n";
  const char* ordre_c = ordre.c_str();
  
  // BF droite
  serialPrintf(master->getPortSerie(),ordre_c); 
  cout<<"BF droite vers MISSION : "<<ordre<<endl;
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::~WAYPOINT_INIT_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::create(MAE_PICKY & stm) {
    {
      if (!master->get_gestionnaire_mission()->is_mission_far()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT.CAP MISSION");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state._cap_mission_state.create(stm);
      }
      else if (master->get_gestionnaire_mission()->is_mission_far()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state._cap_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT.CAP TO MISSION");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state._cap_to_mission_state.create(stm);
      }
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state;
}

// to manage the exit point 'SORTIE_WAYPOINT_INIT', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::_exit12(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._placement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME.PLACEMENT");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._placement_state.create(stm);
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::SORTIE_DE_ZONE_State::~SORTIE_DE_ZONE_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::SORTIE_DE_ZONE_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._exit11(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::SORTIE_DE_ZONE_State::create(MAE_PICKY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::SORTIE_DE_ZONE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::DEBOIT_LE_DISTRIB_State::~DEBOIT_LE_DISTRIB_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::DEBOIT_LE_DISTRIB_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._sortie_de_zone_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME.SORTIE DE ZONE");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._sortie_de_zone_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::DEBOIT_LE_DISTRIB_State::create(MAE_PICKY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::DEBOIT_LE_DISTRIB_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::PLACEMENT_State::~PLACEMENT_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::PLACEMENT_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._deboit_le_distrib_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME.DEBOIT LE DISTRIB");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._deboit_le_distrib_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::PLACEMENT_State::create(MAE_PICKY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::PLACEMENT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::~MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::create(MAE_PICKY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._waypoint_init_state.create(stm);
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state;
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME");
#endif
  cout<<"[MAE][JEU][MISSION COLLECTE DISTRIBUTEUR MONOCHROME]"<<endl;
}

// to manage the exit point 'EXIT_MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::_exit11(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._decision_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.DECISION_MISSION");
#endif
      stm._mae_picky_state._jeu_state._decision_mission_state.create(stm);
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::Collecte_Monochrome_4_State::~Collecte_Monochrome_4_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::Collecte_Monochrome_4_State::_completion(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._collecte_monochrome_4_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT");
#endif
      if (master->get_element_robot()->nb_slot_available() >= 1) {
        if (master->get_plateau_jeu()->get_module_central_5()->is_present()) {
          stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._collecte_monochrome_5_state);
#ifdef VERBOSE_STATE_MACHINE
          puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.Collecte Monochrome 5");
#endif
          stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._collecte_monochrome_5_state.create(stm);
        }
        else if (!master->get_plateau_jeu()->get_module_central_5()->is_present()) {
          stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._sortie_de_zone_state);
#ifdef VERBOSE_STATE_MACHINE
          puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.Sortie de Zone");
#endif
          stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._sortie_de_zone_state.create(stm);
        }
      }
      else if (master->get_element_robot()->nb_slot_available() == 0) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._sortie_de_zone_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.Sortie de Zone");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._sortie_de_zone_state.create(stm);
      }
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::Collecte_Monochrome_4_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::Collecte_Monochrome_4_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.Collecte Monochrome 4");
#endif
  cout<< "[MAE] -> [COLLECTE MONOCHROME #4]" <<endl;
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::Collecte_Monochrome_4_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state;
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::Collecte_Monochrome_4_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.Collecte Monochrome 4");
#endif
  master->get_plateau_jeu()->get_module_central_4()->remove();
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::~CAP_TO_MISSION_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state._bf_droite_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.WAYPOINT INIT.BF DROITE TO MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state._bf_droite_to_mission_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state._bf_droite_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.WAYPOINT INIT.BF DROITE TO MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state._bf_droite_to_mission_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.WAYPOINT INIT.CAP TO MISSION");
#endif
  cout<< "BFCAP VERS MISSION "<<endl;
  
  string ordre;
  ordre = "S3 " + master->get_gestionnaire()->get_cap_to_mission_str() + " \n";
  const char* ordre_c = ordre.c_str();
  
  // vitesse moyenne & BF CAP
  serialPrintf(master->getPortSerie(),"S7 1 \n"); 	
  serialPrintf(master->getPortSerie(),ordre_c);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::CAP_MISSION_State::~CAP_MISSION_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::CAP_MISSION_State::assFini(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state._cap_mission_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state._exit10(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::CAP_MISSION_State::blocage(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state._cap_mission_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state._exit10(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::CAP_MISSION_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::CAP_MISSION_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.WAYPOINT INIT.CAP MISSION");
#endif
  cout<< "BF CAP MISSION "<<endl;
  
  string ordre;
  ordre = "S3 " + master->get_gestionnaire()->get_cap_mission_str() + " \n";
  const char* ordre_c = ordre.c_str();
  
  serialPrintf(master->getPortSerie(),ordre_c); 
  cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
  
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::CAP_MISSION_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.WAYPOINT INIT.CAP MISSION");
#endif
  // vitesse lente
  serialPrintf(master->getPortSerie(),"S7 0 \n"); 	
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::CAP_MISSION_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::~BF_DROITE_TO_MISSION_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.WAYPOINT INIT.CAP MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state._cap_mission_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.WAYPOINT INIT.CAP MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state._cap_mission_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.WAYPOINT INIT.BF DROITE TO MISSION");
#endif
  cout<< "BF droite to MISSION "<<endl;
  
  string ordre;
  ordre = "S5 "+ master->get_gestionnaire()->get_x_mission_str()  + " "  + master->get_gestionnaire()->get_y_mission_str()  + " "  + master->get_gestionnaire()->get_cap_to_mission_str()  + " \n";
  const char* ordre_c = ordre.c_str();
  
  // BF droite
  serialPrintf(master->getPortSerie(),ordre_c); 
  cout<<"BF droite vers MISSION : "<<ordre<<endl;
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::~WAYPOINT_INIT_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::create(MAE_PICKY & stm) {
    {
      if (master->get_gestionnaire_mission()->is_mission_far()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state._cap_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.WAYPOINT INIT.CAP TO MISSION");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state._cap_to_mission_state.create(stm);
      }
      else if (!master->get_gestionnaire_mission()->is_mission_far()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.WAYPOINT INIT.CAP MISSION");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state._cap_mission_state.create(stm);
      }
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state;
}

// to manage the exit point 'SORTIE_WAYPOINT_INIT', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::_exit10(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT");
#endif
      if (master->get_element_robot()->nb_slot_available() == 0) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._sortie_de_zone_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.Sortie de Zone");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._sortie_de_zone_state.create(stm);
      }
      else if (master->get_element_robot()->nb_slot_available() >= 1) {
        if (master->get_plateau_jeu()->get_module_central_4()->is_present()) {
          stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._collecte_monochrome_4_state);
#ifdef VERBOSE_STATE_MACHINE
          puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.Collecte Monochrome 4");
#endif
          stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._collecte_monochrome_4_state.create(stm);
        }
        else if (!master->get_plateau_jeu()->get_module_central_4()->is_present()) {
          if (master->get_plateau_jeu()->get_module_central_5()->is_present()) {
            stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._collecte_monochrome_5_state);
#ifdef VERBOSE_STATE_MACHINE
            puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.Collecte Monochrome 5");
#endif
            stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._collecte_monochrome_5_state.create(stm);
          }
          else if (!master->get_plateau_jeu()->get_module_central_5()->is_present()) {
            stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._sortie_de_zone_state);
#ifdef VERBOSE_STATE_MACHINE
            puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.Sortie de Zone");
#endif
            stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._sortie_de_zone_state.create(stm);
          }
        }
      }
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::Sortie_de_Zone_State::~Sortie_de_Zone_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::Sortie_de_Zone_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._exit9(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::Sortie_de_Zone_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::Sortie_de_Zone_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.Sortie de Zone");
#endif
  cout<< "[MAE] -> [SORTIE ZONE COLLECTE CENTRAUX RESTANT]" <<endl;
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::Sortie_de_Zone_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::Collecte_Monochrome_5_State::~Collecte_Monochrome_5_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::Collecte_Monochrome_5_State::_completion(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._collecte_monochrome_5_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._sortie_de_zone_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.Sortie de Zone");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._sortie_de_zone_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::Collecte_Monochrome_5_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::Collecte_Monochrome_5_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.Collecte Monochrome 5");
#endif
  cout<< "[MAE] -> [COLLECTE MONOCHROME #5]" <<endl;
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::Collecte_Monochrome_5_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state;
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::Collecte_Monochrome_5_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.Collecte Monochrome 5");
#endif
  master->get_plateau_jeu()->get_module_central_5()->remove();
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::~MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::create(MAE_PICKY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._waypoint_init_state.create(stm);
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state;
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT");
#endif
  cout<<"[MAE][JEU][MISSION COLLECTE MODULE CENTRAUX RESTANT]"<<endl;
}

// to manage the exit point 'EXIT_MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::_exit9(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._decision_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.DECISION_MISSION");
#endif
      stm._mae_picky_state._jeu_state._decision_mission_state.create(stm);
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Preparation_Pince_State::~Preparation_Pince_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Preparation_Pince_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._bf_droite_sur_le_module_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.BF droite sur le module");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._bf_droite_sur_le_module_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Preparation_Pince_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Preparation_Pince_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Preparation Pince");
#endif
  serialPrintf(master->getPortSerie(),"F0 \n");
  serialPrintf(master->getPortSerie(),"L1 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
  serialPrintf(master->getPortSerie(),"P1 \n");
  
  serialPrintf(master->getPortSerie(),"C2 \n");
  
  master->set_time_out(200);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Preparation_Pince_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::garde_pince_State::~garde_pince_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::garde_pince_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._exit3(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::garde_pince_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::garde_pince_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.garde pince");
#endif
  serialPrintf(master->getPortSerie(),"F0 \n");
  serialPrintf(master->getPortSerie(),"L1 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
  serialPrintf(master->getPortSerie(),"P1 \n");
  
  master->get_element_robot()->get_stockage_CLAW()->catch_polychrome();
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::garde_pince_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::replacement_Pince_State::~replacement_Pince_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::replacement_Pince_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._exit3(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::replacement_Pince_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::replacement_Pince_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.replacement Pince");
#endif
  serialPrintf(master->getPortSerie(),"F0 \n");
  serialPrintf(master->getPortSerie(),"L1 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
  serialPrintf(master->getPortSerie(),"P1 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::replacement_Pince_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_L_Yaw_Slide_State::~Stock_L_Yaw_Slide_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_L_Yaw_Slide_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_l_pitch_up_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock L Pitch up");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_l_pitch_up_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_L_Yaw_Slide_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_L_Yaw_Slide_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock L Yaw Slide");
#endif
  serialPrintf(master->getPortSerie(),"L0 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
  
  master->set_time_out(200);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_L_Yaw_Slide_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::pipo_R_State::~pipo_R_State() {
}

// to manage the event sto_r_stocked
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::pipo_R_State::sto_r_stocked(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_r_stocked_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock R stocked");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_r_stocked_state.create(stm);
    }
}

// to manage the event sto_r_fail
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::pipo_R_State::sto_r_fail(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_pitch_down_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock Pitch down");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_pitch_down_state.create(stm);
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::pipo_R_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::pipo_C_State::~pipo_C_State() {
}

// to manage the event sto_c_stocked
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::pipo_C_State::sto_c_stocked(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_c_stocked_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock C stocked");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_c_stocked_state.create(stm);
    }
}

// to manage the event sto_c_fail
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::pipo_C_State::sto_c_fail(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_pitch_down_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock Pitch down");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_pitch_down_state.create(stm);
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::pipo_C_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::pipo_L_State::~pipo_L_State() {
}

// to manage the event sto_l_stocked
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::pipo_L_State::sto_l_stocked(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_l_stocked_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock L stocked");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_l_stocked_state.create(stm);
    }
}

// to manage the event sto_l_fail
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::pipo_L_State::sto_l_fail(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_pitch_down_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock Pitch down");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_pitch_down_state.create(stm);
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::pipo_L_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_R_stocked_State::~Stock_R_stocked_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_R_stocked_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_pitch_down_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock Pitch down");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_pitch_down_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_R_stocked_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_R_stocked_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock R stocked");
#endif
  master->get_element_robot()->get_stockage_R()->catch_polychrome();
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_R_stocked_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_C_stocked_State::~Stock_C_stocked_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_C_stocked_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_pitch_down_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock Pitch down");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_pitch_down_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_C_stocked_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_C_stocked_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock C stocked");
#endif
  master->get_element_robot()->get_stockage_C()->catch_polychrome();
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_C_stocked_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_R_Pitch_up_State::~Stock_R_Pitch_up_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_R_Pitch_up_State::time_out(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_r_pitch_up_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._pipo_r_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.pipo R");
#endif
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_R_Pitch_up_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_R_Pitch_up_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock R Pitch up");
#endif
  serialPrintf(master->getPortSerie(),"P5 \n");
  
  serialPrintf(master->getPortSerie(),"T7 \n");
  
  //master->set_time_out(300);
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_R_Pitch_up_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock R Pitch up");
#endif
  serialPrintf(master->getPortSerie(),"C2 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_R_Pitch_up_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_C_Pitch_up_State::~Stock_C_Pitch_up_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_C_Pitch_up_State::time_out(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_c_pitch_up_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._pipo_c_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.pipo C");
#endif
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_C_Pitch_up_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_C_Pitch_up_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock C Pitch up");
#endif
  serialPrintf(master->getPortSerie(),"P5 \n");
  
  serialPrintf(master->getPortSerie(),"T4 \n");
  
  //master->set_time_out(300);
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_C_Pitch_up_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock C Pitch up");
#endif
  serialPrintf(master->getPortSerie(),"C2 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_C_Pitch_up_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Recentrage_State::~Recentrage_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Recentrage_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._exit4(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Recentrage_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Recentrage_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Recentrage");
#endif
  serialPrintf(master->getPortSerie(),"L1 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Recentrage_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_L_stocked_State::~Stock_L_stocked_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_L_stocked_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_pitch_down_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock Pitch down");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_pitch_down_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_L_stocked_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_L_stocked_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock L stocked");
#endif
  master->get_element_robot()->get_stockage_L()->catch_polychrome();
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_L_stocked_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_Pitch_down_State::~Stock_Pitch_down_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_Pitch_down_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._recentrage_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Recentrage");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._recentrage_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_Pitch_down_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_Pitch_down_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock Pitch down");
#endif
  serialPrintf(master->getPortSerie(),"P1 \n");
  
  //master->set_time_out(200);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_Pitch_down_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_L_Pitch_up_State::~Stock_L_Pitch_up_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_L_Pitch_up_State::time_out(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_l_pitch_up_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._pipo_l_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.pipo L");
#endif
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_L_Pitch_up_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_L_Pitch_up_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock L Pitch up");
#endif
  serialPrintf(master->getPortSerie(),"P5 \n");
  
  serialPrintf(master->getPortSerie(),"T1 \n");
  
  //master->set_time_out(300);
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_L_Pitch_up_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock L Pitch up");
#endif
  serialPrintf(master->getPortSerie(),"C2 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_L_Pitch_up_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_R_Yaw_Slide_State::~Stock_R_Yaw_Slide_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_R_Yaw_Slide_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_r_pitch_up_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock R Pitch up");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_r_pitch_up_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_R_Yaw_Slide_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_R_Yaw_Slide_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock R Yaw Slide");
#endif
  serialPrintf(master->getPortSerie(),"L2 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
  
  master->set_time_out(200);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_R_Yaw_Slide_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_C_Yaw_Slide_State::~Stock_C_Yaw_Slide_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_C_Yaw_Slide_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_c_pitch_up_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock C Pitch up");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_c_pitch_up_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_C_Yaw_Slide_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_C_Yaw_Slide_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock C Yaw Slide");
#endif
  serialPrintf(master->getPortSerie(),"L1 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
  
  master->set_time_out(200);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_C_Yaw_Slide_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::~Stockage_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::create(MAE_PICKY & stm) {
    {
      if (master->get_element_robot()->where_to_stock() == -1) {
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._exit4(stm);
      }
      else if (master->get_element_robot()->where_to_stock() == 0) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_l_yaw_slide_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock L Yaw Slide");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_l_yaw_slide_state.create(stm);
      }
      else if (master->get_element_robot()->where_to_stock() == 1) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_c_yaw_slide_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock C Yaw Slide");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_c_yaw_slide_state.create(stm);
      }
      else if (master->get_element_robot()->where_to_stock() == 2) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_r_yaw_slide_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage.Stock R Yaw Slide");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state._stock_r_yaw_slide_state.create(stm);
      }
    }
}

// to manage the exit point 'Sortie_stockage', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::_exit4(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._exit3(stm);
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::BF_droite_sur_le_module_State::~BF_droite_sur_le_module_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::BF_droite_sur_le_module_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::BF_droite_sur_le_module_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.BF droite sur le module");
#endif
  if(master->is_blue())
  {
  	serialPrintf(master->getPortSerie(),"S5 -560 1620 285 \n");
  }
  if(master->is_yellow())
  {
  	serialPrintf(master->getPortSerie(),"S5 560 1620 255 \n");
  }
  
  serialPrintf(master->getPortSerie(),"C4 \n");
  master->set_time_out(3000);
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::BF_droite_sur_le_module_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.BF droite sur le module");
#endif
  master->get_plateau_jeu()->get_module_central_1()->remove();
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::BF_droite_sur_le_module_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state;
}

// to manage the event clw_fail_catch
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::BF_droite_sur_le_module_State::clw_fail_catch(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._bf_droite_sur_le_module_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._replacement_pince_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.replacement Pince");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._replacement_pince_state.create(stm);
    }
}

// to manage the event clw_stocked
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::BF_droite_sur_le_module_State::clw_stocked(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._bf_droite_sur_le_module_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1");
#endif
      if (master->get_element_robot()->stockage_available()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Stockage");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._stockage_state.create(stm);
      }
      else if (!master->get_element_robot()->stockage_available()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._garde_pince_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.garde pince");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._garde_pince_state.create(stm);
      }
    }
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::BF_droite_sur_le_module_State::time_out(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._bf_droite_sur_le_module_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._replacement_pince_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.replacement Pince");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._replacement_pince_state.create(stm);
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::~Collecte_Polychrome_1_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::create(MAE_PICKY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._preparation_pince_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1.Preparation Pince");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state._preparation_pince_state.create(stm);
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state;
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1");
#endif
  cout<< "[MAE] -> [COLLECTE POLYCHROME #1]" <<endl;
  master->get_plateau_jeu()->get_module_central_1()->remove();
}

// to manage the exit point 'SORTIE_COLLECTE_POLYCHROME_1', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::_exit3(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE");
#endif
      if (master->get_element_robot()->nb_slot_available() >= 1) {
        if (master->get_plateau_jeu()->get_module_central_2()->is_present()) {
          stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state);
#ifdef VERBOSE_STATE_MACHINE
          puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Poychrome 2");
#endif
          stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state.create(stm);
        }
        else if (!master->get_plateau_jeu()->get_module_central_2()->is_present()) {
          if (master->get_plateau_jeu()->get_module_central_3()->is_present()) {
            stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state);
#ifdef VERBOSE_STATE_MACHINE
            puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3");
#endif
            stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state.create(stm);
          }
          else if (!master->get_plateau_jeu()->get_module_central_3()->is_present()) {
            stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._etat_check_sortie_de_mission_state);
#ifdef VERBOSE_STATE_MACHINE
            puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Etat check sortie de mission");
#endif
            stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._etat_check_sortie_de_mission_state.create(stm);
          }
        }
      }
      else if (master->get_element_robot()->nb_slot_available() == 0) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._etat_check_sortie_de_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Etat check sortie de mission");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._etat_check_sortie_de_mission_state.create(stm);
      }
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::~CAP_TO_MISSION_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state._bf_droite_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.WAYPOINT INIT.BF DROITE TO MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state._bf_droite_to_mission_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state._bf_droite_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.WAYPOINT INIT.BF DROITE TO MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state._bf_droite_to_mission_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.WAYPOINT INIT.CAP TO MISSION");
#endif
  cout<< "BFCAP VERS MISSION "<<endl;
  
  string ordre;
  ordre = "S3 " + master->get_gestionnaire()->get_cap_to_mission_str() + " \n";
  const char* ordre_c = ordre.c_str();
  
  // vitesse moyenne & BF CAP
  serialPrintf(master->getPortSerie(),"S7 1 \n"); 	
  serialPrintf(master->getPortSerie(),ordre_c);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::CAP_MISSION_State::~CAP_MISSION_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::CAP_MISSION_State::assFini(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state._cap_mission_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state._exit8(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::CAP_MISSION_State::blocage(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state._cap_mission_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state._exit8(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::CAP_MISSION_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::CAP_MISSION_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.WAYPOINT INIT.CAP MISSION");
#endif
  cout<< "BF CAP MISSION "<<endl;
  
  string ordre;
  ordre = "S3 " + master->get_gestionnaire()->get_cap_mission_str() + " \n";
  const char* ordre_c = ordre.c_str();
  
  serialPrintf(master->getPortSerie(),ordre_c); 
  cout<<"ORIENTATION VERS MISSION : "<<ordre<<endl;
  
  
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::CAP_MISSION_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.WAYPOINT INIT.CAP MISSION");
#endif
  // vitesse lente
  serialPrintf(master->getPortSerie(),"S7 0 \n"); 	
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::CAP_MISSION_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::~BF_DROITE_TO_MISSION_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.WAYPOINT INIT.CAP MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state._cap_mission_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.WAYPOINT INIT.CAP MISSION");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state._cap_mission_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.WAYPOINT INIT.BF DROITE TO MISSION");
#endif
  cout<< "BF droite to MISSION "<<endl;
  
  string ordre;
  ordre = "S5 "+ master->get_gestionnaire()->get_x_mission_str()  + " "  + master->get_gestionnaire()->get_y_mission_str()  + " "  + master->get_gestionnaire()->get_cap_to_mission_str()  + " \n";
  const char* ordre_c = ordre.c_str();
  
  // BF droite
  serialPrintf(master->getPortSerie(),ordre_c); 
  cout<<"BF droite vers MISSION : "<<ordre<<endl;
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::~WAYPOINT_INIT_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::create(MAE_PICKY & stm) {
    {
      if (!master->get_gestionnaire_mission()->is_mission_far()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state._cap_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.WAYPOINT INIT.CAP MISSION");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state._cap_mission_state.create(stm);
      }
      else if (master->get_gestionnaire_mission()->is_mission_far()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state._cap_to_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.WAYPOINT INIT.CAP TO MISSION");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state._cap_to_mission_state.create(stm);
      }
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state;
}

// to manage the exit point 'SORTIE_WAYPOINT_INIT', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::_exit8(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE");
#endif
      if (master->get_element_robot()->nb_slot_available() == 0) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._etat_check_sortie_de_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Etat check sortie de mission");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._etat_check_sortie_de_mission_state.create(stm);
      }
      else if (master->get_element_robot()->nb_slot_available() >= 1) {
        if (master->get_plateau_jeu()->get_module_central_1()->is_present()) {
          stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state);
#ifdef VERBOSE_STATE_MACHINE
          puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 1");
#endif
          stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_1_state.create(stm);
        }
        else if (!master->get_plateau_jeu()->get_module_central_1()->is_present()) {
          if (master->get_plateau_jeu()->get_module_central_2()->is_present()) {
            stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state);
#ifdef VERBOSE_STATE_MACHINE
            puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Poychrome 2");
#endif
            stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state.create(stm);
          }
          else if (!master->get_plateau_jeu()->get_module_central_2()->is_present()) {
            if (master->get_plateau_jeu()->get_module_central_3()->is_present()) {
              stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state);
#ifdef VERBOSE_STATE_MACHINE
              puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3");
#endif
              stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state.create(stm);
            }
            else if (!master->get_plateau_jeu()->get_module_central_3()->is_present()) {
              stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._etat_check_sortie_de_mission_state);
#ifdef VERBOSE_STATE_MACHINE
              puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Etat check sortie de mission");
#endif
              stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._etat_check_sortie_de_mission_state.create(stm);
            }
          }
        }
      }
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Etat_check_sortie_de_mission_State::~Etat_check_sortie_de_mission_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Etat_check_sortie_de_mission_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._exit2(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Etat_check_sortie_de_mission_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Etat_check_sortie_de_mission_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state;
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Etat_check_sortie_de_mission_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Etat check sortie de mission");
#endif
  serialPrintf(master->getPortSerie(),"F0 \n");
  serialPrintf(master->getPortSerie(),"L2 \n");
  serialPrintf(master->getPortSerie(),"Y0 \n");
  serialPrintf(master->getPortSerie(),"P0 \n");
  
  serialPrintf(master->getPortSerie(),"C5 \n");
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::BF_droite_placement_State::~BF_droite_placement_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::BF_droite_placement_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._bf_droite_charge_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.BF droite Charge");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._bf_droite_charge_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::BF_droite_placement_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._bf_droite_charge_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.BF droite Charge");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._bf_droite_charge_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::BF_droite_placement_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::BF_droite_placement_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.BF droite placement");
#endif
  if(master->is_blue())
  {
  	serialPrintf(master->getPortSerie(),"S5 -913 920 314 \n");
  }
  if(master->is_yellow())
  {
  	serialPrintf(master->getPortSerie(),"S5 913 920 -134 \n");
  }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::BF_droite_placement_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Drop_State::~Drop_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Drop_State::time_out(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._drop_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._recul_chargement_pince_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Recul chargement pince");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._recul_chargement_pince_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Drop_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Drop_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Drop");
#endif
  serialPrintf(master->getPortSerie(),"C1 \n");
  master->set_time_out(200);
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Drop_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Drop");
#endif
  master->get_plateau_jeu()->get_depose_module_base_centrale_diagonale()->add_module(master->get_element_robot()->get_stockage_CLAW()->get_module());
  master->get_element_robot()->get_stockage_CLAW()->release();
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Drop_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Avance_pour_pose_State::~Avance_pour_pose_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Avance_pour_pose_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._drop_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Drop");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._drop_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Avance_pour_pose_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._drop_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Drop");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._drop_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Avance_pour_pose_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Avance_pour_pose_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Avance pour pose");
#endif
  if(master->is_blue())
  {
  	serialPrintf(master->getPortSerie(),"S5 -701 706 314 \n");
  }
  if(master->is_yellow())
  {
  	serialPrintf(master->getPortSerie(),"S5 701 706 -134 \n");
  }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Avance_pour_pose_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Positionnement_pince_pour_pose_State::~Positionnement_pince_pour_pose_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Positionnement_pince_pour_pose_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._avance_pour_pose_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Avance pour pose");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._avance_pour_pose_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Positionnement_pince_pour_pose_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Positionnement_pince_pour_pose_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Positionnement pince pour pose");
#endif
  serialPrintf(master->getPortSerie(),"F0 \n");
  serialPrintf(master->getPortSerie(),"L1 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
  serialPrintf(master->getPortSerie(),"P4 \n");
  
  master->set_time_out(200);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Positionnement_pince_pour_pose_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Recul_chargement_pince_State::~Recul_chargement_pince_State() {
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Recul_chargement_pince_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3");
#endif
      if (master->get_element_robot()->nb_module_present() == 0) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._replis_pince_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.replis pince");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._replis_pince_state.create(stm);
      }
      else {
        if (!master->get_plateau_jeu()->get_depose_module_base_centrale_diagonale()->is_full()) {
          if (!master->get_element_robot()-> claw_available()) {
            stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._positionnement_pince_pour_pose_state);
#ifdef VERBOSE_STATE_MACHINE
            puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Positionnement pince pour pose");
#endif
            stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._positionnement_pince_pour_pose_state.create(stm);
          }
          else if (master->get_element_robot()-> claw_available()) {
            stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state);
#ifdef VERBOSE_STATE_MACHINE
            puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock");
#endif
            stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state.create(stm);
          }
        }
        else if (master->get_plateau_jeu()->get_depose_module_base_centrale_diagonale()->is_full()) {
          stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._replis_pince_state);
#ifdef VERBOSE_STATE_MACHINE
          puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.replis pince");
#endif
          stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._replis_pince_state.create(stm);
        }
      }
    }
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Recul_chargement_pince_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3");
#endif
      if (master->get_element_robot()->nb_module_present() == 0) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._replis_pince_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.replis pince");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._replis_pince_state.create(stm);
      }
      else {
        if (!master->get_plateau_jeu()->get_depose_module_base_centrale_diagonale()->is_full()) {
          if (!master->get_element_robot()-> claw_available()) {
            stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._positionnement_pince_pour_pose_state);
#ifdef VERBOSE_STATE_MACHINE
            puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Positionnement pince pour pose");
#endif
            stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._positionnement_pince_pour_pose_state.create(stm);
          }
          else if (master->get_element_robot()-> claw_available()) {
            stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state);
#ifdef VERBOSE_STATE_MACHINE
            puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock");
#endif
            stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state.create(stm);
          }
        }
        else if (master->get_plateau_jeu()->get_depose_module_base_centrale_diagonale()->is_full()) {
          stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._replis_pince_state);
#ifdef VERBOSE_STATE_MACHINE
          puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.replis pince");
#endif
          stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._replis_pince_state.create(stm);
        }
      }
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Recul_chargement_pince_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Recul_chargement_pince_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Recul chargement pince");
#endif
  if(master->is_blue())
  {
  	serialPrintf(master->getPortSerie(),"S5 -913 920 314 \n");
  }
  if(master->is_yellow())
  {
  	serialPrintf(master->getPortSerie(),"S5 913 920 -134 \n");
  }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Recul_chargement_pince_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_YAW_SLIDE_State::~STO_L_YAW_SLIDE_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_YAW_SLIDE_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_l_pitch_up_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO L PITCH UP");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_l_pitch_up_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_YAW_SLIDE_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_YAW_SLIDE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO L YAW SLIDE");
#endif
  serialPrintf(master->getPortSerie(),"L0 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
  serialPrintf(master->getPortSerie(),"C1 \n");
  
  master->set_time_out(200);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_YAW_SLIDE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::pipo_R_State::~pipo_R_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::pipo_R_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_r_pitch_pose_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO R PITCH POSE");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_r_pitch_pose_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::pipo_R_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::pipo_R_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.pipo R");
#endif
  if(master->get_element_robot()->get_stockage_R()->is_color_polychrome()){
  	master->get_element_robot()->get_stockage_CLAW()->catch_polychrome();
  }
  else{
  	master->get_element_robot()->get_stockage_CLAW()->catch_monochrome();
  }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::pipo_R_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::pipo_C_State::~pipo_C_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::pipo_C_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_c_pitch_pose_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO C PITCH POSE");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_c_pitch_pose_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::pipo_C_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::pipo_C_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.pipo C");
#endif
  if(master->get_element_robot()->get_stockage_C()->is_color_polychrome()){
  	master->get_element_robot()->get_stockage_CLAW()->catch_polychrome();
  }
  else{
  	master->get_element_robot()->get_stockage_CLAW()->catch_monochrome();
  }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::pipo_C_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::pipo_L_State::~pipo_L_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::pipo_L_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_l_pitch_pose_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO L PITCH POSE");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_l_pitch_pose_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::pipo_L_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::pipo_L_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.pipo L");
#endif
  if(master->get_element_robot()->get_stockage_L()->is_color_polychrome()){
  	master->get_element_robot()->get_stockage_CLAW()->catch_polychrome();
  }
  else{
  	master->get_element_robot()->get_stockage_CLAW()->catch_monochrome();
  }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::pipo_L_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::RECENTRAGE_State::~RECENTRAGE_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::RECENTRAGE_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._exit7(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::RECENTRAGE_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::RECENTRAGE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.RECENTRAGE");
#endif
  serialPrintf(master->getPortSerie(),"L1 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::RECENTRAGE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_PITCH_POSE_State::~STO_R_PITCH_POSE_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_PITCH_POSE_State::_completion(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_r_pitch_pose_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._recentrage_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.RECENTRAGE");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._recentrage_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_PITCH_POSE_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_PITCH_POSE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO R PITCH POSE");
#endif
  serialPrintf(master->getPortSerie(),"P3 \n");
  
  master->set_time_out(200);
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_PITCH_POSE_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO R PITCH POSE");
#endif
  master->get_element_robot()->get_stockage_R()->release();
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_PITCH_POSE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_PITCH_POSE_State::~STO_C_PITCH_POSE_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_PITCH_POSE_State::_completion(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_c_pitch_pose_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._recentrage_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.RECENTRAGE");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._recentrage_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_PITCH_POSE_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_PITCH_POSE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO C PITCH POSE");
#endif
  serialPrintf(master->getPortSerie(),"P3 \n");
  
  master->set_time_out(200);
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_PITCH_POSE_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO C PITCH POSE");
#endif
  master->get_element_robot()->get_stockage_C()->release();
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_PITCH_POSE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_YAW_SLIDE_State::~STO_R_YAW_SLIDE_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_YAW_SLIDE_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_r_pitch_up_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO R PITCH UP");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_r_pitch_up_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_YAW_SLIDE_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_YAW_SLIDE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO R YAW SLIDE");
#endif
  serialPrintf(master->getPortSerie(),"L2 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
  serialPrintf(master->getPortSerie(),"C1 \n");
  
  master->set_time_out(200);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_YAW_SLIDE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_YAW_SLIDE_State::~STO_C_YAW_SLIDE_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_YAW_SLIDE_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_c_pitch_up_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO C PITCH UP");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_c_pitch_up_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_YAW_SLIDE_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_YAW_SLIDE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO C YAW SLIDE");
#endif
  serialPrintf(master->getPortSerie(),"L1 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
  serialPrintf(master->getPortSerie(),"C1 \n");
  
  master->set_time_out(200);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_YAW_SLIDE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_PITCH_UP_State::~STO_R_PITCH_UP_State() {
}

// to manage the event clw_fail_catch
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_PITCH_UP_State::clw_fail_catch(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_r_pitch_up_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_r_pitch_pose_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO R PITCH POSE");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_r_pitch_pose_state.create(stm);
    }
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_PITCH_UP_State::time_out(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_r_pitch_up_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_r_pitch_pose_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO R PITCH POSE");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_r_pitch_pose_state.create(stm);
    }
}

// to manage the event clw_stocked
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_PITCH_UP_State::clw_stocked(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_r_pitch_up_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._pipo_r_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.pipo R");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._pipo_r_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_PITCH_UP_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_PITCH_UP_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO R PITCH UP");
#endif
  serialPrintf(master->getPortSerie(),"P5 \n");
  serialPrintf(master->getPortSerie(),"C4 \n");
  
  master->set_time_out(3000);
  
  if(master->get_element_robot()->get_stockage_R()->is_color_polychrome()){
  	serialPrintf(master->getPortSerie(),"C7 \n");
  }
  else{
  	serialPrintf(master->getPortSerie(),"C8 \n");
  }
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_PITCH_UP_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO R PITCH UP");
#endif
  serialPrintf(master->getPortSerie(),"T9 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_PITCH_UP_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_PITCH_UP_State::~STO_C_PITCH_UP_State() {
}

// to manage the event clw_fail_catch
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_PITCH_UP_State::clw_fail_catch(MAE_PICKY & stm) {
    if (_completion(stm)) return;
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_c_pitch_up_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_c_pitch_pose_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO C PITCH POSE");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_c_pitch_pose_state.create(stm);
    }
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_PITCH_UP_State::_completion(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_c_pitch_up_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_c_pitch_pose_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO C PITCH POSE");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_c_pitch_pose_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event clw_stocked
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_PITCH_UP_State::clw_stocked(MAE_PICKY & stm) {
    if (_completion(stm)) return;
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_c_pitch_up_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._pipo_c_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.pipo C");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._pipo_c_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_PITCH_UP_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_PITCH_UP_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO C PITCH UP");
#endif
  serialPrintf(master->getPortSerie(),"P5 \n");
  serialPrintf(master->getPortSerie(),"C4 \n");
  
  master->set_time_out(3000);
  
  if(master->get_element_robot()->get_stockage_C()->is_color_polychrome()){
  	serialPrintf(master->getPortSerie(),"C7 \n");
  }
  else{
  	serialPrintf(master->getPortSerie(),"C8 \n");
  }
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_PITCH_UP_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO C PITCH UP");
#endif
  serialPrintf(master->getPortSerie(),"T6 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_PITCH_UP_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_PITCH_POSE_State::~STO_L_PITCH_POSE_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_PITCH_POSE_State::time_out(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_l_pitch_pose_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._recentrage_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.RECENTRAGE");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._recentrage_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_PITCH_POSE_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_PITCH_POSE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO L PITCH POSE");
#endif
  serialPrintf(master->getPortSerie(),"P3 \n");
  
  master->set_time_out(200);
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_PITCH_POSE_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO L PITCH POSE");
#endif
  master->get_element_robot()->get_stockage_L()->release();
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_PITCH_POSE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_PITCH_UP_State::~STO_L_PITCH_UP_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_PITCH_UP_State::time_out(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_l_pitch_up_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_l_pitch_pose_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO L PITCH POSE");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_l_pitch_pose_state.create(stm);
    }
}

// to manage the event clw_stocked
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_PITCH_UP_State::clw_stocked(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_l_pitch_up_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._pipo_l_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.pipo L");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._pipo_l_state.create(stm);
    }
}

// to manage the event clw_fail_catch
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_PITCH_UP_State::clw_fail_catch(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_l_pitch_up_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_l_pitch_pose_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO L PITCH POSE");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_l_pitch_pose_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_PITCH_UP_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_PITCH_UP_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO L PITCH UP");
#endif
  serialPrintf(master->getPortSerie(),"P5 \n");
  serialPrintf(master->getPortSerie(),"C4 \n");
  
  master->set_time_out(3000);
  
  if(master->get_element_robot()->get_stockage_L()->is_color_polychrome()){
  	serialPrintf(master->getPortSerie(),"C7 \n");
  }
  else{
  	serialPrintf(master->getPortSerie(),"C8 \n");
  }
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_PITCH_UP_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO L PITCH UP");
#endif
  serialPrintf(master->getPortSerie(),"T3 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_PITCH_UP_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::~Prise_de_stock_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::create(MAE_PICKY & stm) {
    {
      if (master->get_element_robot()->where_to_pick_up() == -1) {
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._exit7(stm);
      }
      else if (master->get_element_robot()->where_to_pick_up() == 0) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_l_yaw_slide_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO L YAW SLIDE");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_l_yaw_slide_state.create(stm);
      }
      else if (master->get_element_robot()->where_to_pick_up() == 1) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_c_yaw_slide_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO C YAW SLIDE");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_c_yaw_slide_state.create(stm);
      }
      else if (master->get_element_robot()->where_to_pick_up() == 2) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_r_yaw_slide_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock.STO R YAW SLIDE");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state._sto_r_yaw_slide_state.create(stm);
      }
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state;
}

// to manage the exit point 'Sortie_Prise_de_stock', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::_exit7(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3");
#endif
      if (!master->get_element_robot()-> claw_available()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._positionnement_pince_pour_pose_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Positionnement pince pour pose");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._positionnement_pince_pour_pose_state.create(stm);
      }
      else if (master->get_element_robot()-> claw_available()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state.create(stm);
      }
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Recule_State::~Recule_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Recule_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3");
#endif
      if (master->get_element_robot()->nb_module_present() == 0) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._replis_pince_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.replis pince");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._replis_pince_state.create(stm);
      }
      else {
        if (!master->get_plateau_jeu()->get_depose_module_base_centrale_diagonale()->is_full()) {
          if (!master->get_element_robot()-> claw_available()) {
            stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._positionnement_pince_pour_pose_state);
#ifdef VERBOSE_STATE_MACHINE
            puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Positionnement pince pour pose");
#endif
            stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._positionnement_pince_pour_pose_state.create(stm);
          }
          else if (master->get_element_robot()-> claw_available()) {
            stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state);
#ifdef VERBOSE_STATE_MACHINE
            puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock");
#endif
            stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state.create(stm);
          }
        }
        else if (master->get_plateau_jeu()->get_depose_module_base_centrale_diagonale()->is_full()) {
          stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._replis_pince_state);
#ifdef VERBOSE_STATE_MACHINE
          puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.replis pince");
#endif
          stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._replis_pince_state.create(stm);
        }
      }
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Recule_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3");
#endif
      if (master->get_element_robot()->nb_module_present() == 0) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._replis_pince_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.replis pince");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._replis_pince_state.create(stm);
      }
      else {
        if (!master->get_plateau_jeu()->get_depose_module_base_centrale_diagonale()->is_full()) {
          if (!master->get_element_robot()-> claw_available()) {
            stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._positionnement_pince_pour_pose_state);
#ifdef VERBOSE_STATE_MACHINE
            puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Positionnement pince pour pose");
#endif
            stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._positionnement_pince_pour_pose_state.create(stm);
          }
          else if (master->get_element_robot()-> claw_available()) {
            stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state);
#ifdef VERBOSE_STATE_MACHINE
            puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Prise de stock");
#endif
            stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._prise_de_stock_state.create(stm);
          }
        }
        else if (master->get_plateau_jeu()->get_depose_module_base_centrale_diagonale()->is_full()) {
          stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._replis_pince_state);
#ifdef VERBOSE_STATE_MACHINE
          puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.replis pince");
#endif
          stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._replis_pince_state.create(stm);
        }
      }
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Recule_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Recule_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Recule");
#endif
  if(master->is_blue())
  {
  	serialPrintf(master->getPortSerie(),"S5 -913 920 314 \n");
  }
  if(master->is_yellow())
  {
  	serialPrintf(master->getPortSerie(),"S5 913 920 -134 \n");
  }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Recule_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::replis_pince_State::~replis_pince_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::replis_pince_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._exit6(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::replis_pince_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::replis_pince_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.replis pince");
#endif
  serialPrintf(master->getPortSerie(),"F0 \n");
  serialPrintf(master->getPortSerie(),"L1 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
  serialPrintf(master->getPortSerie(),"P0 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::replis_pince_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::BF_droite_Charge_State::~BF_droite_Charge_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::BF_droite_Charge_State::assFini(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._bf_droite_charge_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Recule");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._recule_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::BF_droite_Charge_State::blocage(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._bf_droite_charge_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Recule");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._recule_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::BF_droite_Charge_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::BF_droite_Charge_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.BF droite Charge");
#endif
  if(master->is_blue())
  {
  	serialPrintf(master->getPortSerie(),"S5 -701 706 314 \n");
  }
  if(master->is_yellow())
  {
  	serialPrintf(master->getPortSerie(),"S5 701 706 -134 \n");
  }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::BF_droite_Charge_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state;
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::BF_droite_Charge_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.BF droite Charge");
#endif
  
  master->get_plateau_jeu()->get_module_central_3()->remove();
  master->get_plateau_jeu()->get_depose_module_base_centrale_diagonale()->add_module_polychrome();
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Preparation_du_belier_State::~Preparation_du_belier_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Preparation_du_belier_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._bf_droite_placement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.BF droite placement");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._bf_droite_placement_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Preparation_du_belier_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Preparation_du_belier_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Preparation du belier");
#endif
  serialPrintf(master->getPortSerie(),"F0 \n");
  serialPrintf(master->getPortSerie(),"L1 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
  serialPrintf(master->getPortSerie(),"P3 \n");
  
  master->set_time_out(50);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Preparation_du_belier_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::~Push_Polychrome_3_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::_completion(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._etat_check_sortie_de_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Etat check sortie de mission");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._etat_check_sortie_de_mission_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::create(MAE_PICKY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._preparation_du_belier_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3.Preparation du belier");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state._preparation_du_belier_state.create(stm);
    }
}

// to manage the exit point 'Sortie_Push_Polychrome_3', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::_exit6(MAE_PICKY & stm) {
    _doexit(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3");
#endif
  cout<< "[MAE] -> [PUSH POLYCHROME #3]" <<endl;
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3");
#endif
  master->get_plateau_jeu()->get_module_central_3()->remove();
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::Preparation_Pince_State::~Preparation_Pince_State() {
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::Preparation_Pince_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._bf_droite_de_preparation_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Poychrome 2.BF droite de preparation");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._bf_droite_de_preparation_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::Preparation_Pince_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::Preparation_Pince_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Poychrome 2.Preparation Pince");
#endif
  serialPrintf(master->getPortSerie(),"F0 \n");
  serialPrintf(master->getPortSerie(),"L1 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
  serialPrintf(master->getPortSerie(),"P1 \n");
  
  serialPrintf(master->getPortSerie(),"C2 \n");
  
  master->set_time_out(50);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::Preparation_Pince_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::recule_State::~recule_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::recule_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Poychrome 2");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._exit5(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::recule_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Poychrome 2");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._exit5(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::recule_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::recule_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Poychrome 2.recule");
#endif
  serialPrintf(master->getPortSerie(),"S4 -190 \n");
  serialPrintf(master->getPortSerie(),"C8 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::recule_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::garde_pince_State::~garde_pince_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::garde_pince_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Poychrome 2.recule");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._recule_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::garde_pince_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::garde_pince_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Poychrome 2.garde pince");
#endif
  serialPrintf(master->getPortSerie(),"F0 \n");
  serialPrintf(master->getPortSerie(),"L1 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
  serialPrintf(master->getPortSerie(),"P1 \n");
  
  master->get_element_robot()->get_stockage_CLAW()->catch_polychrome();
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::garde_pince_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::replacement_de_pince_State::~replacement_de_pince_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::replacement_de_pince_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._recule_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Poychrome 2.recule");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._recule_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::replacement_de_pince_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::replacement_de_pince_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Poychrome 2.replacement de pince");
#endif
  serialPrintf(master->getPortSerie(),"F0 \n");
  serialPrintf(master->getPortSerie(),"L1 \n");
  serialPrintf(master->getPortSerie(),"Y2 \n");
  serialPrintf(master->getPortSerie(),"P1 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::replacement_de_pince_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::BF_droite_sur_le_module_State::~BF_droite_sur_le_module_State() {
}

// to manage the event clw_fail_catch
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::BF_droite_sur_le_module_State::clw_fail_catch(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._bf_droite_sur_le_module_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._replacement_de_pince_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Poychrome 2.replacement de pince");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._replacement_de_pince_state.create(stm);
    }
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::BF_droite_sur_le_module_State::time_out(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._bf_droite_sur_le_module_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._replacement_de_pince_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Poychrome 2.replacement de pince");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._replacement_de_pince_state.create(stm);
    }
}

// to manage the event clw_stocked
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::BF_droite_sur_le_module_State::clw_stocked(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._bf_droite_sur_le_module_state._doexit(stm);
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._garde_pince_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Poychrome 2.garde pince");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._garde_pince_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::BF_droite_sur_le_module_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::BF_droite_sur_le_module_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Poychrome 2.BF droite sur le module");
#endif
  if(master->is_blue())
  {
  	serialPrintf(master->getPortSerie(),"S5 -836 1054 222 \n");
  }
  if(master->is_yellow())
  {
  	serialPrintf(master->getPortSerie(),"S5 836 1054 -42 \n");
  }
  
  master->set_time_out(3000);
}

// perform the 'exit behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::BF_droite_sur_le_module_State::_doexit(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute exit behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Poychrome 2.BF droite sur le module");
#endif
  master->get_plateau_jeu()->get_module_central_2()->remove();
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::BF_droite_sur_le_module_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::BF_droite_de_preparation_State::~BF_droite_de_preparation_State() {
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::BF_droite_de_preparation_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._bf_droite_sur_le_module_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Poychrome 2.BF droite sur le module");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._bf_droite_sur_le_module_state.create(stm);
    }
}

// to manage the event blocage
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::BF_droite_de_preparation_State::blocage(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._bf_droite_sur_le_module_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Poychrome 2.BF droite sur le module");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._bf_droite_sur_le_module_state.create(stm);
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::BF_droite_de_preparation_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::BF_droite_de_preparation_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Poychrome 2.BF droite de preparation");
#endif
  if(master->is_blue())
  {
  	serialPrintf(master->getPortSerie(),"S5 -698 1180 222 \n");
  }
  if(master->is_yellow())
  {
  	serialPrintf(master->getPortSerie(),"S5 698 1180 -42 \n");
  }
  
  serialPrintf(master->getPortSerie(),"C4 \n");
  serialPrintf(master->getPortSerie(),"C7 \n");
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::BF_droite_de_preparation_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::~Collecte_Poychrome_2_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::create(MAE_PICKY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._preparation_pince_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Poychrome 2.Preparation Pince");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_poychrome_2_state._preparation_pince_state.create(stm);
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state;
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Poychrome 2");
#endif
  cout<< "[MAE] -> [COLLECTE POLYCHROME #2]" <<endl;
  master->get_plateau_jeu()->get_module_central_2()->remove();
}

// to manage the exit point 'Sortie_collecte_polychrome_2', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::_exit5(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE");
#endif
      if (master->get_plateau_jeu()->get_module_central_3()->is_present()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Push Polychrome 3");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._push_polychrome_3_state.create(stm);
      }
      else if (!master->get_plateau_jeu()->get_module_central_3()->is_present()) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._etat_check_sortie_de_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Etat check sortie de mission");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._etat_check_sortie_de_mission_state.create(stm);
      }
    }
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::~MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::create(MAE_PICKY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.WAYPOINT INIT");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._waypoint_init_state.create(stm);
    }
}

// to manage the exit point 'EXIT_MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::_exit2(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._decision_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.DECISION_MISSION");
#endif
      stm._mae_picky_state._jeu_state._decision_mission_state.create(stm);
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state;
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE");
#endif
  cout<<"[MAE][JEU][MISSION COLLECTE MODULE CENTRAUX INITIALE]"<<endl;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::~JEU_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::create(MAE_PICKY & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._decision_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.DECISION_MISSION");
#endif
      stm._mae_picky_state._jeu_state._decision_mission_state.create(stm);
    }
}

// to manage the event evitement
void MAE_PICKY::MAE_PICKY_State::JEU_State::evitement(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.EVITEMENT");
#endif
      stm._mae_picky_state._evitement_state.create(stm);
    }
}

// to manage the event end_game
void MAE_PICKY::MAE_PICKY_State::JEU_State::end_game(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._end_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.END");
#endif
      stm._mae_picky_state._end_state.create(stm);
    }
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::JEU_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.JEU");
#endif
  cout<<"ETAT JEU"<<endl;
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state;
}

MAE_PICKY::MAE_PICKY_State::~MAE_PICKY_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::create(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._initialisation_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.INITIALISATION");
#endif
      stm._mae_picky_state._initialisation_state.create(stm);
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::_upper(MAE_PICKY &) {
    return 0;
}

MAE_PICKY::MAE_PICKY() {
    _current_state = 0;
}

MAE_PICKY::~MAE_PICKY() {
}

// the operation you call to signal the event create
bool MAE_PICKY::create() {
  if (_current_state == 0)
  (_current_state = &(*this)._mae_picky_state)->create(*this);
  return (_current_state != 0);
}

// the operation you call to signal the event start_mis
bool MAE_PICKY::start_mis() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger start_mis");
#endif
      _current_state->start_mis(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event blocage
bool MAE_PICKY::blocage() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger blocage");
#endif
      _current_state->blocage(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event time_out
bool MAE_PICKY::time_out() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger time_out");
#endif
      _current_state->time_out(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event assFini
bool MAE_PICKY::assFini() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger assFini");
#endif
      _current_state->assFini(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event start_enleve
bool MAE_PICKY::start_enleve() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger start_enleve");
#endif
      _current_state->start_enleve(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event mission_collecte_module_centraux_initiale
bool MAE_PICKY::mission_collecte_module_centraux_initiale() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger mission_collecte_module_centraux_initiale");
#endif
      _current_state->mission_collecte_module_centraux_initiale(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event mission_collecte_module_centraux_restant
bool MAE_PICKY::mission_collecte_module_centraux_restant() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger mission_collecte_module_centraux_restant");
#endif
      _current_state->mission_collecte_module_centraux_restant(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event mission_collecte_distributeur_monochrome
bool MAE_PICKY::mission_collecte_distributeur_monochrome() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger mission_collecte_distributeur_monochrome");
#endif
      _current_state->mission_collecte_distributeur_monochrome(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event mission_transfert_direct_distributeur_polychrome
bool MAE_PICKY::mission_transfert_direct_distributeur_polychrome() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger mission_transfert_direct_distributeur_polychrome");
#endif
      _current_state->mission_transfert_direct_distributeur_polychrome(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event mission_push_distributeur_monochrome
bool MAE_PICKY::mission_push_distributeur_monochrome() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger mission_push_distributeur_monochrome");
#endif
      _current_state->mission_push_distributeur_monochrome(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event mission_push_cratere
bool MAE_PICKY::mission_push_cratere() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger mission_push_cratere");
#endif
      _current_state->mission_push_cratere(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event mission_drop_zone_depart
bool MAE_PICKY::mission_drop_zone_depart() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger mission_drop_zone_depart");
#endif
      _current_state->mission_drop_zone_depart(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event mission_depot_base_diagonale
bool MAE_PICKY::mission_depot_base_diagonale() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger mission_depot_base_diagonale");
#endif
      _current_state->mission_depot_base_diagonale(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event mission_depot_base_verticale
bool MAE_PICKY::mission_depot_base_verticale() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger mission_depot_base_verticale");
#endif
      _current_state->mission_depot_base_verticale(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event evitement
bool MAE_PICKY::evitement() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger evitement");
#endif
      _current_state->evitement(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event end_game
bool MAE_PICKY::end_game() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger end_game");
#endif
      _current_state->end_game(*this);
    }
    return (_current_state != 0);
}

// to execute the current state 'do activity'
void MAE_PICKY::doActivity() {
    _current_state->_do(*this);
}

// execution done, internal
void MAE_PICKY::_final() {
    _current_state = 0;
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : final state reached");
#endif
}

// the operation you call to signal the event near
bool MAE_PICKY::near() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger near");
#endif
      _current_state->near(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event clw_stocked
bool MAE_PICKY::clw_stocked() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger clw_stocked");
#endif
      _current_state->clw_stocked(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event clw_fail_catch
bool MAE_PICKY::clw_fail_catch() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger clw_fail_catch");
#endif
      _current_state->clw_fail_catch(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event sto_l_stocked
bool MAE_PICKY::sto_l_stocked() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger sto_l_stocked");
#endif
      _current_state->sto_l_stocked(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event sto_l_fail
bool MAE_PICKY::sto_l_fail() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger sto_l_fail");
#endif
      _current_state->sto_l_fail(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event sto_c_stocked
bool MAE_PICKY::sto_c_stocked() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger sto_c_stocked");
#endif
      _current_state->sto_c_stocked(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event sto_c_fail
bool MAE_PICKY::sto_c_fail() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger sto_c_fail");
#endif
      _current_state->sto_c_fail(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event sto_r_stocked
bool MAE_PICKY::sto_r_stocked() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger sto_r_stocked");
#endif
      _current_state->sto_r_stocked(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event sto_r_fail
bool MAE_PICKY::sto_r_fail() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger sto_r_fail");
#endif
      _current_state->sto_r_fail(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event recall
bool MAE_PICKY::recall() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger recall");
#endif
      _current_state->recall(*this);
    }
    return (_current_state != 0);
}

