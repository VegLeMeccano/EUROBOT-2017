
#include "MaeMaster.h"

Master::AnyState::~AnyState() {
}

// perform the 'do activity'
void Master::AnyState::_do(Master &) {
}

void Master::AnyState::create(Master &) {
}

// the current state doesn't manage the event stratEnleve, give it to the upper state
void Master::AnyState::stratEnleve(Master & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->stratEnleve(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition stratEnleve not expected");
#endif
}

// the current state doesn't manage the event evitement, give it to the upper state
void Master::AnyState::evitement(Master & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->evitement(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition evitement not expected");
#endif
}

Master::Master_State::Attente_State::~Attente_State() {
}

// to manage the event stratEnleve
void Master::Master_State::Attente_State::stratEnleve(Master & stm) {
    _do(stm);
    {
      stm._set_currentState(stm._master_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .Master.Jeu");
#endif
    }
}

// perform the 'do activity'
void Master::Master_State::Attente_State::_do(Master & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute do behavior of .Master.Attente");
#endif
  cout<<"etat attente"<<endl;
}

// returns the state containing the current
Master::AnyState * Master::Master_State::Attente_State::_upper(Master & stm) {
    return &stm._master_state;
}

Master::Master_State::Evitement_State::~Evitement_State() {
}

bool Master::Master_State::Evitement_State::_completion(Master & stm) {
    _do(stm);
    {
      stm._set_currentState(stm._master_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .Master.Jeu");
#endif
      return (bool) 1;
    }
}

// to manage the event create
void Master::Master_State::Evitement_State::create(Master & stm) {
  	_completion(stm);
}

// perform the 'do activity'
void Master::Master_State::Evitement_State::_do(Master & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute do behavior of .Master.Evitement");
#endif
  cout<<"etat évitement"<<endl;
}

// returns the state containing the current
Master::AnyState * Master::Master_State::Evitement_State::_upper(Master & stm) {
    return &stm._master_state;
}

Master::Master_State::Jeu_State::~Jeu_State() {
}

// to manage the event evitement
void Master::Master_State::Jeu_State::evitement(Master & stm) {
    _do(stm);
    {
      stm._set_currentState(stm._master_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .Master.Evitement");
#endif
      stm._master_state._evitement_state.create(stm);
    }
}

// perform the 'do activity'
void Master::Master_State::Jeu_State::_do(Master & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute do behavior of .Master.Jeu");
#endif
  cout<<"etat game"<<endl;
}

// returns the state containing the current
Master::AnyState * Master::Master_State::Jeu_State::_upper(Master & stm) {
    return &stm._master_state;
}

Master::Master_State::~Master_State() {
}

// to manage the event create
void Master::Master_State::create(Master & stm) {
    {
      stm._set_currentState(stm._master_state._attente_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .Master.Attente");
#endif
    }
}

// returns the state containing the current
Master::AnyState * Master::Master_State::_upper(Master &) {
    return 0;
}

Master::Master() {
    _current_state = 0;
}

Master::~Master() {
}

// the operation you call to signal the event create
bool Master::create() {
  if (_current_state == 0)
  (_current_state = &(*this)._master_state)->create(*this);
  return (_current_state != 0);
}

// the operation you call to signal the event stratEnleve
bool Master::stratEnleve() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger stratEnleve");
#endif
      _current_state->stratEnleve(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event evitement
bool Master::evitement() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger evitement");
#endif
      _current_state->evitement(*this);
    }
    return (_current_state != 0);
}

// to execute the current state 'do activity'
void Master::doActivity() {
    _current_state->_do(*this);
}

// execution done, internal
void Master::_final() {
    _current_state = 0;
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : final state reached");
#endif
}

