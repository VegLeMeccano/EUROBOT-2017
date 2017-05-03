
#include "test.h"


test::AnyState::~AnyState() {
}

// perform the 'do activity'
void test::AnyState::_do(test &) {
}

void test::AnyState::create(test &) {
}

// the current state doesn't manage the event stratEnleve, give it to the upper state
void test::AnyState::stratEnleve(test & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->stratEnleve(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition stratEnleve not expected");
#endif
}

// the current state doesn't manage the event evitement, give it to the upper state
void test::AnyState::evitement(test & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->evitement(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition evitement not expected");
#endif
}

// the current state doesn't manage the event trans_etat, give it to the upper state
void test::AnyState::trans_etat(test & stm) {
    AnyState * st = _upper(stm);
  
    if (st != 0)
      st->trans_etat(stm);
#ifdef VERBOSE_STATE_MACHINE
    else
      puts("DEBUG : transition trans_etat not expected");
#endif
}

test::test_State::Attente_State::~Attente_State() {
}

// to manage the event stratEnleve
void test::test_State::Attente_State::stratEnleve(test & stm) {
    {
      stm._set_currentState(stm._test_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .test.Jeu");
#endif
      stm._test_state._jeu_state.create(stm);
    }
}

// to manage the event create
void test::test_State::Attente_State::create(test & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void test::test_State::Attente_State::_doentry(test & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .test.Attente");
#endif
  cout<<"[BOUML] etat attente"<<endl;
}

// returns the state containing the current
test::AnyState * test::test_State::Attente_State::_upper(test & stm) {
    return &stm._test_state;
}

test::test_State::Evitement_State::evite_State::~evite_State() {
}

bool test::test_State::Evitement_State::evite_State::_completion(test & stm) {
    {
      stm._set_currentState(stm._test_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .test.Evitement");
#endif
      stm._test_state._evitement_state._exit2(stm);
      return (bool) 1;
    }
}

// to manage the event create
void test::test_State::Evitement_State::evite_State::create(test & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void test::test_State::Evitement_State::evite_State::_doentry(test & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .test.Evitement.evite");
#endif
  cout<<"evite!"<<endl;
}

// returns the state containing the current
test::AnyState * test::test_State::Evitement_State::evite_State::_upper(test & stm) {
    return &stm._test_state._evitement_state;
}

test::test_State::Evitement_State::~Evitement_State() {
}

// to manage the event create
void test::test_State::Evitement_State::create(test & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._test_state._evitement_state._evite_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .test.Evitement.evite");
#endif
      stm._test_state._evitement_state._evite_state.create(stm);
    }
}

// perform the 'entry behavior'
void test::test_State::Evitement_State::_doentry(test & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .test.Evitement");
#endif
  cout<<"[BOUML] etat evitement"<<endl;
}

// returns the state containing the current
test::AnyState * test::test_State::Evitement_State::_upper(test & stm) {
    return &stm._test_state;
}

// to manage the exit point 'sortie evit', defined because probably shared
void test::test_State::Evitement_State::_exit2(test & stm) {
    {
      stm._set_currentState(stm._test_state._jeu_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .test.Jeu");
#endif
      stm._test_state._jeu_state.create(stm);
    }
}

test::test_State::Jeu_State::etat_1_State::bitt_State::~bitt_State() {
}

// to manage the event trans_etat
void test::test_State::Jeu_State::etat_1_State::bitt_State::trans_etat(test & stm) {
    {
      stm._set_currentState(stm._test_state._jeu_state._etat_1_state._yop_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .test.Jeu.etat 1.yop");
#endif
      stm._test_state._jeu_state._etat_1_state._yop_state.create(stm);
    }
}

// to manage the event create
void test::test_State::Jeu_State::etat_1_State::bitt_State::create(test & stm) {
  	_doentry(stm);
}

// perform the 'entry behavior'
void test::test_State::Jeu_State::etat_1_State::bitt_State::_doentry(test & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .test.Jeu.etat 1.bitt");
#endif
  cout<<"bitz"<<endl;
}

// returns the state containing the current
test::AnyState * test::test_State::Jeu_State::etat_1_State::bitt_State::_upper(test & stm) {
    return &stm._test_state._jeu_state._etat_1_state;
}

test::test_State::Jeu_State::etat_1_State::yop_State::~yop_State() {
}

bool test::test_State::Jeu_State::etat_1_State::yop_State::_completion(test & stm) {
    {
      stm._set_currentState(stm._test_state._jeu_state._etat_1_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .test.Jeu.etat 1");
#endif
      stm._test_state._jeu_state._etat_1_state._exit1(stm);
      return (bool) 1;
    }
}

// to manage the event create
void test::test_State::Jeu_State::etat_1_State::yop_State::create(test & stm) {
  	_completion(stm);
}

// returns the state containing the current
test::AnyState * test::test_State::Jeu_State::etat_1_State::yop_State::_upper(test & stm) {
    return &stm._test_state._jeu_state._etat_1_state;
}

test::test_State::Jeu_State::etat_1_State::~etat_1_State() {
}

// to manage the event create
void test::test_State::Jeu_State::etat_1_State::create(test & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._test_state._jeu_state._etat_1_state._bitt_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .test.Jeu.etat 1.bitt");
#endif
      stm._test_state._jeu_state._etat_1_state._bitt_state.create(stm);
    }
}

// perform the 'entry behavior'
void test::test_State::Jeu_State::etat_1_State::_doentry(test & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .test.Jeu.etat 1");
#endif
  cout<<"etat 1"<<endl;
}

// returns the state containing the current
test::AnyState * test::test_State::Jeu_State::etat_1_State::_upper(test & stm) {
    return &stm._test_state._jeu_state;
}

// to manage the exit point 'sortie', defined because probably shared
void test::test_State::Jeu_State::etat_1_State::_exit1(test & stm) {
    {
      stm._set_currentState(stm._test_state._jeu_state._etat_2_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .test.Jeu.etat 2");
#endif
      stm._test_state._jeu_state._etat_2_state.create(stm);
    }
}

test::test_State::Jeu_State::etat_2_State::~etat_2_State() {
}

bool test::test_State::Jeu_State::etat_2_State::_completion(test & stm) {
    {
      stm._set_currentState(stm._test_state._jeu_state._etat_1_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .test.Jeu.etat 1");
#endif
      stm._test_state._jeu_state._etat_1_state.create(stm);
      return (bool) 1;
    }
}

// to manage the event create
void test::test_State::Jeu_State::etat_2_State::create(test & stm) {
  	_doentry(stm);
  	_completion(stm);
}

// perform the 'entry behavior'
void test::test_State::Jeu_State::etat_2_State::_doentry(test & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .test.Jeu.etat 2");
#endif
  cout<<"etat 2"<<endl;
}

// returns the state containing the current
test::AnyState * test::test_State::Jeu_State::etat_2_State::_upper(test & stm) {
    return &stm._test_state._jeu_state;
}

test::test_State::Jeu_State::~Jeu_State() {
}

// to manage the event create
void test::test_State::Jeu_State::create(test & stm) {
    _doentry(stm);
    {
      stm._set_currentState(stm._test_state._jeu_state._etat_1_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .test.Jeu.etat 1");
#endif
      stm._test_state._jeu_state._etat_1_state.create(stm);
    }
}

bool test::test_State::Jeu_State::_completion(test & stm) {
    {
      return (bool) 1;
    }
}

// to manage the event evitement
void test::test_State::Jeu_State::evitement(test & stm) {
    {
      stm._set_currentState(stm._test_state._evitement_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .test.Evitement");
#endif
      stm._test_state._evitement_state.create(stm);
    }
}

// perform the 'entry behavior'
void test::test_State::Jeu_State::_doentry(test & stm) {
#ifdef VERBOSE_STATE_MACHINE
  	puts("DEBUG : execute entry behavior of .test.Jeu");
#endif
  cout<<"[BOUML] etat Jeu"<<endl;
}

// returns the state containing the current
test::AnyState * test::test_State::Jeu_State::_upper(test & stm) {
    return &stm._test_state;
}

test::test_State::~test_State() {
}

// to manage the event create
void test::test_State::create(test & stm) {
    {
      stm._set_currentState(stm._test_state._attente_state);
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : current state is now .test.Attente");
#endif
      stm._test_state._attente_state.create(stm);
    }
}

// returns the state containing the current
test::AnyState * test::test_State::_upper(test &) {
    return 0;
}

test::test() {
    _current_state = 0;
}

test::~test() {
}

// the operation you call to signal the event create
bool test::create() {
  if (_current_state == 0)
  (_current_state = &(*this)._test_state)->create(*this);
  return (_current_state != 0);
}

// the operation you call to signal the event stratEnleve
bool test::stratEnleve() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger stratEnleve");
#endif
      _current_state->stratEnleve(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event evitement
bool test::evitement() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger evitement");
#endif
      _current_state->evitement(*this);
    }
    return (_current_state != 0);
}

// the operation you call to signal the event trans_etat
bool test::trans_etat() {
    if (_current_state != 0) {
#ifdef VERBOSE_STATE_MACHINE
      puts("DEBUG : fire trigger trans_etat");
#endif
      _current_state->trans_etat(*this);
    }
    return (_current_state != 0);
}

// to execute the current state 'do activity'
void test::doActivity() {
    _current_state->_do(*this);
}

// execution done, internal
void test::_final() {
    _current_state = 0;
#ifdef VERBOSE_STATE_MACHINE
    puts("DEBUG : final state reached");
#endif
}

