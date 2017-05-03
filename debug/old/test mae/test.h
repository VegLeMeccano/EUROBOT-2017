#ifndef _TEST_H
#define _TEST_H

#include <iostream>
using namespace std;


// implement the state machine test
class test {
  protected:
    // Mother class of all the classes representing states
    class AnyState {
      public:
        virtual ~AnyState();

        // return the upper state
        virtual AnyState * _upper(test &) = 0;

        // perform the 'do activity'
        virtual void _do(test &);

        virtual void create(test &);

        // the current state doesn't manage the event stratEnleve, give it to the upper state
        virtual void stratEnleve(test & stm);

        // the current state doesn't manage the event evitement, give it to the upper state
        virtual void evitement(test & stm);

        // the current state doesn't manage the event trans_etat, give it to the upper state
        virtual void trans_etat(test & stm);

    };
    
    // implement the state test
    class test_State : public AnyState {
      public:
        // implement the state Attente
        class Attente_State : public AnyState {
          public:
            virtual ~Attente_State();

            // to manage the event stratEnleve
            virtual void stratEnleve(test & stm);

            // to manage the event create
            virtual void create(test & stm);

            // perform the 'entry behavior'
            void _doentry(test & stm);

            // returns the state containing the current
            virtual AnyState * _upper(test & stm);

        };
        
        // implement the state Evitement
        class Evitement_State : public AnyState {
          public:
            // implement the state evite
            class evite_State : public AnyState {
              public:
                virtual ~evite_State();

                virtual bool _completion(test & stm);

                // to manage the event create
                virtual void create(test & stm);

                // perform the 'entry behavior'
                void _doentry(test & stm);

                // returns the state containing the current
                virtual AnyState * _upper(test & stm);

            };
            
            virtual ~Evitement_State();

            // memorize the instance of the state evite, internal
            evite_State _evite_state;

            // to manage the event create
            virtual void create(test & stm);

            // perform the 'entry behavior'
            void _doentry(test & stm);

            // returns the state containing the current
            virtual AnyState * _upper(test & stm);

            // to manage the exit point 'sortie evit', defined because probably shared
            void _exit2(test & stm);

        };
        
        // implement the state Jeu
        class Jeu_State : public AnyState {
          public:
            // implement the state etat 1
            class etat_1_State : public AnyState {
              public:
                // implement the state bitt
                class bitt_State : public AnyState {
                  public:
                    virtual ~bitt_State();

                    // to manage the event trans_etat
                    virtual void trans_etat(test & stm);

                    // to manage the event create
                    virtual void create(test & stm);

                    // perform the 'entry behavior'
                    void _doentry(test & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(test & stm);

                };
                
                // implement the state yop
                class yop_State : public AnyState {
                  public:
                    virtual ~yop_State();

                    virtual bool _completion(test & stm);

                    // to manage the event create
                    virtual void create(test & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(test & stm);

                };
                
                virtual ~etat_1_State();

                // to manage the event create
                virtual void create(test & stm);

                // perform the 'entry behavior'
                void _doentry(test & stm);

                // returns the state containing the current
                virtual AnyState * _upper(test & stm);

                // memorize the instance of the state bitt, internal
                bitt_State _bitt_state;

                // memorize the instance of the state yop, internal
                yop_State _yop_state;

                // to manage the exit point 'sortie', defined because probably shared
                void _exit1(test & stm);

            };
            
            // implement the state etat 2
            class etat_2_State : public AnyState {
              public:
                virtual ~etat_2_State();

                virtual bool _completion(test & stm);

                // to manage the event create
                virtual void create(test & stm);

                // perform the 'entry behavior'
                void _doentry(test & stm);

                // returns the state containing the current
                virtual AnyState * _upper(test & stm);

            };
            
            virtual ~Jeu_State();

            // memorize the instance of the state etat 1, internal
            etat_1_State _etat_1_state;

            // memorize the instance of the state etat 2, internal
            etat_2_State _etat_2_state;

            // to manage the event create
            virtual void create(test & stm);

            virtual bool _completion(test & stm);

            // to manage the event evitement
            virtual void evitement(test & stm);

            // perform the 'entry behavior'
            void _doentry(test & stm);

            // returns the state containing the current
            virtual AnyState * _upper(test & stm);

        };
        
        virtual ~test_State();

        // memorize the instance of the state Attente, internal
        Attente_State _attente_state;

        // memorize the instance of the state Jeu, internal
        Jeu_State _jeu_state;

        // memorize the instance of the state Evitement, internal
        Evitement_State _evitement_state;

        // to manage the event create
        virtual void create(test & stm);

        // returns the state containing the current
        virtual AnyState * _upper(test &);

    };
    
    // memorize the instance of the state test, internal
    test_State _test_state;


  public:
    test();

    virtual ~test();

    // the operation you call to signal the event create
    bool create();

    // the operation you call to signal the event stratEnleve
    bool stratEnleve();

  friend class test_State::Attente_State;
    // the operation you call to signal the event evitement
    bool evitement();

    // the operation you call to signal the event trans_etat
    bool trans_etat();

  friend class test_State::Jeu_State::etat_1_State;
  friend class test_State::Jeu_State::etat_2_State;
  friend class test_State::Jeu_State;
  friend class test_State::Evitement_State::evite_State;
  friend class test_State::Evitement_State;
  friend class test_State;
    // to execute the current state 'do activity'
    void doActivity();


  protected:
    // change the current state, internal
    inline void _set_currentState(AnyState & st);

    // execution done, internal
    void _final();

    // contains the current state, internal
    AnyState * _current_state;

  friend class test_State::Jeu_State::etat_1_State::bitt_State;
  friend class test_State::Jeu_State::etat_1_State::yop_State;
};
// change the current state, internal
inline void test::_set_currentState(test::AnyState & st) {
    _current_state = &st;
}

#endif
