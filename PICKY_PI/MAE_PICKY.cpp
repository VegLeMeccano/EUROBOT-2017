
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
  	serialPrintf(master->getPortSerie(),"S0 -600 1800 -90 \n");
  }
  if(master->is_yellow())
  {
  	serialPrintf(master->getPortSerie(),"S0 600 1800 0 \n");
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

bool MAE_PICKY::MAE_PICKY_State::INITIALISATION_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._preparation_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.PREPARATION");
#endif
      stm._mae_picky_state._preparation_state.create(stm);
      return (bool) 1;
    }
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
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::END_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state;
}

MAE_PICKY::MAE_PICKY_State::PREPARATION_State::~PREPARATION_State() {
}

bool MAE_PICKY::MAE_PICKY_State::PREPARATION_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU");
#endif
      stm._mae_picky_state._jeu_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::PREPARATION_State::create(MAE_PICKY & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void MAE_PICKY::MAE_PICKY_State::PREPARATION_State::_doentry(MAE_PICKY & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .MAE_PICKY.PREPARATION");
#endif
  cout<<"ETAT PREPARATION"<<endl;
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::PREPARATION_State::_upper(MAE_PICKY & stm) {
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
      stm._mae_picky_state._evitement_state._exit11(stm);
    }
}

// to manage the event assFini
void MAE_PICKY::MAE_PICKY_State::EVITEMENT_State::ACTION_TO_DO_State::assFini(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.EVITEMENT");
#endif
      stm._mae_picky_state._evitement_state._exit11(stm);
    }
}

// to manage the event time_out
void MAE_PICKY::MAE_PICKY_State::EVITEMENT_State::ACTION_TO_DO_State::time_out(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.EVITEMENT");
#endif
      stm._mae_picky_state._evitement_state._exit11(stm);
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
  master->set_time_out(200);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::EVITEMENT_State::ACTION_TO_DO_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._evitement_state;
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
void MAE_PICKY::MAE_PICKY_State::EVITEMENT_State::_exit11(MAE_PICKY & stm) {
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

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::~MISSION_DEPOT_BASE_VERTICALE_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::create(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_depot_base_verticale_state._exit10(stm);
    }
}

// to manage the exit point 'EXIT_MISSION_DEPOT_BASE_VERTICALE', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::_exit10(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._decision_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.DECISION_MISSION");
#endif
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::~MISSION_DEPOT_BASE_DIAGONALE_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::create(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_depot_base_diagonale_state._exit9(stm);
    }
}

// to manage the exit point 'EXIT_MISSION_DEPOT_BASE_DIAGONALE', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::_exit9(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._decision_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.DECISION_MISSION");
#endif
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::~MISSION_DROP_ZONE_DEPART_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::create(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_drop_zone_depart_state._exit8(stm);
    }
}

// to manage the exit point 'EXIT_MISSION_DROP_ZONE_DEPART', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::_exit8(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._decision_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.DECISION_MISSION");
#endif
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::~MISSION_PUSH_CRATERE_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::create(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_push_cratere_state._exit7(stm);
    }
}

// to manage the exit point 'EXIT_MISSION_PUSH_CRATERE', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::_exit7(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._decision_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.DECISION_MISSION");
#endif
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::~MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::create(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_push_distributeur_monochrome_state._exit6(stm);
    }
}

// to manage the exit point 'EXIT_MISSION_PUSH_DISTRIBUTEUR_MONOCHROME', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::_exit6(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._decision_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.DECISION_MISSION");
#endif
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::~MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::create(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_transfert_direct_distributeur_polychrome_state._exit5(stm);
    }
}

// to manage the exit point 'EXIT_MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::_exit5(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._decision_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.DECISION_MISSION");
#endif
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::~MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::create(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_distributeur_monochrome_state._exit4(stm);
    }
}

// to manage the exit point 'EXIT_MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::_exit4(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._decision_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.DECISION_MISSION");
#endif
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::~MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::create(MAE_PICKY & stm) {
    {
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_restant_state._exit3(stm);
    }
}

// to manage the exit point 'EXIT_MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::_exit3(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._decision_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.DECISION_MISSION");
#endif
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::~Collecte_Polychrome_1_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::_completion(MAE_PICKY & stm) {
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
            stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_3_state);
#ifdef VERBOSE_STATE_MACHINE
            puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 3");
#endif
            stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_3_state.create(stm);
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
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::create(MAE_PICKY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state;
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
  	_completion(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Etat_check_sortie_de_mission_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_3_State::~Collecte_Polychrome_3_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_3_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._etat_check_sortie_de_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Etat check sortie de mission");
#endif
      stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._etat_check_sortie_de_mission_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_3_State::create(MAE_PICKY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_3_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::~Collecte_Poychrome_2_State() {
}

bool MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::_completion(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE");
#endif
      if (master->get_element_robot()->nb_slot_available() >= 1) {
        if (master->get_plateau_jeu()->get_module_central_3()->is_present()) {
          stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_3_state);
#ifdef VERBOSE_STATE_MACHINE
          puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 3");
#endif
          stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_3_state.create(stm);
        }
        else if (!master->get_plateau_jeu()->get_module_central_3()->is_present()) {
          stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._etat_check_sortie_de_mission_state);
#ifdef VERBOSE_STATE_MACHINE
          puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Etat check sortie de mission");
#endif
          stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._etat_check_sortie_de_mission_state.create(stm);
        }
      }
      else if (master->get_element_robot()->nb_slot_available() == 0) {
        stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._etat_check_sortie_de_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Etat check sortie de mission");
#endif
        stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._etat_check_sortie_de_mission_state.create(stm);
      }
      return (bool) 1;
    }
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::create(MAE_PICKY & stm) {
  	_completion(stm);
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::~MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::create(MAE_PICKY & stm) {
    {
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
              stm._set_currentState(stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_3_state);
#ifdef VERBOSE_STATE_MACHINE
              puts("DEBUG : current state is now .MAE_PICKY.JEU.MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE.Collecte Polychrome 3");
#endif
              stm._mae_picky_state._jeu_state._mission_collecte_module_centraux_initiale_state._collecte_polychrome_3_state.create(stm);
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

// to manage the exit point 'EXIT_MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE', defined because probably shared
void MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::_exit2(MAE_PICKY & stm) {
    {
      stm._set_currentState(stm._mae_picky_state._jeu_state._decision_mission_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .MAE_PICKY.JEU.DECISION_MISSION");
#endif
    }
}

// returns the state containing the current
MAE_PICKY::AnyState * MAE_PICKY::MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::_upper(MAE_PICKY & stm) {
    return &stm._mae_picky_state._jeu_state;
}

MAE_PICKY::MAE_PICKY_State::JEU_State::~JEU_State() {
}

// to manage the event create
void MAE_PICKY::MAE_PICKY_State::JEU_State::create(MAE_PICKY & stm) {
    _doentry(stm);
    {
      {
        stm._set_currentState(stm._mae_picky_state._jeu_state._decision_mission_state);
#ifdef VERBOSE_STATE_MACHINE
        puts("DEBUG : current state is now .MAE_PICKY.JEU.DECISION_MISSION");
#endif
      }
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

