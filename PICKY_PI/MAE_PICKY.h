#ifndef _MAE_PICKY_H
#define _MAE_PICKY_H

#include <iostream>
using namespace std;


// implement the state machine MAE_PICKY
class MAE_PICKY {
  protected:
    // Mother class of all the classes representing states
    class AnyState {
      public:
        virtual ~AnyState();

        // return the upper state
        virtual AnyState * _upper(MAE_PICKY &) = 0;

        // perform the 'do activity'
        virtual void _do(MAE_PICKY &);

        virtual void create(MAE_PICKY &);

        // the current state doesn't manage the event start_mis, give it to the upper state
        virtual void start_mis(MAE_PICKY & stm);

        // the current state doesn't manage the event blocage, give it to the upper state
        virtual void blocage(MAE_PICKY & stm);

        // the current state doesn't manage the event time_out, give it to the upper state
        virtual void time_out(MAE_PICKY & stm);

        // the current state doesn't manage the event assFini, give it to the upper state
        virtual void assFini(MAE_PICKY & stm);

        // the current state doesn't manage the event start_enleve, give it to the upper state
        virtual void start_enleve(MAE_PICKY & stm);

        // the current state doesn't manage the event mission_collecte_module_centraux_initiale, give it to the upper state
        virtual void mission_collecte_module_centraux_initiale(MAE_PICKY & stm);

        // the current state doesn't manage the event mission_collecte_module_centraux_restant, give it to the upper state
        virtual void mission_collecte_module_centraux_restant(MAE_PICKY & stm);

        // the current state doesn't manage the event mission_collecte_distributeur_monochrome, give it to the upper state
        virtual void mission_collecte_distributeur_monochrome(MAE_PICKY & stm);

        // the current state doesn't manage the event mission_transfert_direct_distributeur_polychrome, give it to the upper state
        virtual void mission_transfert_direct_distributeur_polychrome(MAE_PICKY & stm);

        // the current state doesn't manage the event mission_push_distributeur_monochrome, give it to the upper state
        virtual void mission_push_distributeur_monochrome(MAE_PICKY & stm);

        // the current state doesn't manage the event mission_push_cratere, give it to the upper state
        virtual void mission_push_cratere(MAE_PICKY & stm);

        // the current state doesn't manage the event mission_drop_zone_depart, give it to the upper state
        virtual void mission_drop_zone_depart(MAE_PICKY & stm);

        // the current state doesn't manage the event mission_depot_base_diagonale, give it to the upper state
        virtual void mission_depot_base_diagonale(MAE_PICKY & stm);

        // the current state doesn't manage the event mission_depot_base_verticale, give it to the upper state
        virtual void mission_depot_base_verticale(MAE_PICKY & stm);

        // the current state doesn't manage the event evitement, give it to the upper state
        virtual void evitement(MAE_PICKY & stm);

        // the current state doesn't manage the event end_game, give it to the upper state
        virtual void end_game(MAE_PICKY & stm);

        // the current state doesn't manage the event near, give it to the upper state
        virtual void near(MAE_PICKY & stm);

    };
    
    // implement the state MAE_PICKY
    class MAE_PICKY_State : public AnyState {
      public:
        // implement the state INITIALISATION
        class INITIALISATION_State : public AnyState {
          public:
            // implement the state WAIT START IN
            class WAIT_START_IN_State : public AnyState {
              public:
                virtual ~WAIT_START_IN_State();

                // to manage the event start_mis
                virtual void start_mis(MAE_PICKY & stm);

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

            };
            
            // implement the state WAIT START OUT
            class WAIT_START_OUT_State : public AnyState {
              public:
                virtual ~WAIT_START_OUT_State();

                // to manage the event start_enleve
                virtual void start_enleve(MAE_PICKY & stm);

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

            };
            
            // implement the state AVANCE
            class AVANCE_State : public AnyState {
              public:
                virtual ~AVANCE_State();

                // to manage the event assFini
                virtual void assFini(MAE_PICKY & stm);

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

            };
            
            // implement the state CHECK COTE
            class CHECK_COTE_State : public AnyState {
              public:
                virtual ~CHECK_COTE_State();

                // to manage the event time_out
                virtual void time_out(MAE_PICKY & stm);

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

            };
            
            // implement the state SET X Y CAP
            class SET_X_Y_CAP_State : public AnyState {
              public:
                virtual ~SET_X_Y_CAP_State();

                // to manage the event time_out
                virtual void time_out(MAE_PICKY & stm);

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

            };
            
            // implement the state RECALAGE AR
            class RECALAGE_AR_State : public AnyState {
              public:
                virtual ~RECALAGE_AR_State();

                // to manage the event blocage
                virtual void blocage(MAE_PICKY & stm);

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

            };
            
            virtual ~INITIALISATION_State();

            // memorize the instance of the state WAIT START IN, internal
            WAIT_START_IN_State _wait_start_in_state;

            // memorize the instance of the state RECALAGE AR, internal
            RECALAGE_AR_State _recalage_ar_state;

            // memorize the instance of the state SET X Y CAP, internal
            SET_X_Y_CAP_State _set_x_y_cap_state;

            // memorize the instance of the state CHECK COTE, internal
            CHECK_COTE_State _check_cote_state;

            // memorize the instance of the state AVANCE, internal
            AVANCE_State _avance_state;

            // memorize the instance of the state WAIT START OUT, internal
            WAIT_START_OUT_State _wait_start_out_state;

            virtual bool _completion(MAE_PICKY & stm);

            // to manage the event create
            virtual void create(MAE_PICKY & stm);

            // to manage the exit point 'EXIT_INITIALISATION', defined because probably shared
            void _exit1(MAE_PICKY & stm);

            // perform the 'entry behavior'
            void _doentry(MAE_PICKY & stm);

            // returns the state containing the current
            virtual AnyState * _upper(MAE_PICKY & stm);

        };
        
        // implement the state END
        class END_State : public AnyState {
          public:
            virtual ~END_State();

            // to manage the event create
            virtual void create(MAE_PICKY & stm);

            // perform the 'entry behavior'
            void _doentry(MAE_PICKY & stm);

            // returns the state containing the current
            virtual AnyState * _upper(MAE_PICKY & stm);

        };
        
        // implement the state PREPARATION
        class PREPARATION_State : public AnyState {
          public:
            virtual ~PREPARATION_State();

            virtual bool _completion(MAE_PICKY & stm);

            // to manage the event create
            virtual void create(MAE_PICKY & stm);

            // perform the 'entry behavior'
            void _doentry(MAE_PICKY & stm);

            // returns the state containing the current
            virtual AnyState * _upper(MAE_PICKY & stm);

        };
        
        // implement the state EVITEMENT
        class EVITEMENT_State : public AnyState {
          public:
            // implement the state ACTION TO DO
            class ACTION_TO_DO_State : public AnyState {
              public:
                virtual ~ACTION_TO_DO_State();

                // to manage the event near
                virtual void near(MAE_PICKY & stm);

                // to manage the event assFini
                virtual void assFini(MAE_PICKY & stm);

                // to manage the event time_out
                virtual void time_out(MAE_PICKY & stm);

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

            };
            
            virtual ~EVITEMENT_State();

            // to manage the event create
            virtual void create(MAE_PICKY & stm);

            // perform the 'entry behavior'
            void _doentry(MAE_PICKY & stm);

            // returns the state containing the current
            virtual AnyState * _upper(MAE_PICKY & stm);

            // memorize the instance of the state ACTION TO DO, internal
            ACTION_TO_DO_State _action_to_do_state;

            // to manage the exit point 'SORTIE_EVITEMENT', defined because probably shared
            void _exit11(MAE_PICKY & stm);

        };
        
        // implement the state JEU
        class JEU_State : public AnyState {
          public:
            // implement the state DECISION_MISSION
            class DECISION_MISSION_State : public AnyState {
              public:
                virtual ~DECISION_MISSION_State();

                // to manage the event mission_collecte_module_centraux_initiale
                virtual void mission_collecte_module_centraux_initiale(MAE_PICKY & stm);

                // to manage the event mission_collecte_module_centraux_restant
                virtual void mission_collecte_module_centraux_restant(MAE_PICKY & stm);

                // to manage the event mission_collecte_distributeur_monochrome
                virtual void mission_collecte_distributeur_monochrome(MAE_PICKY & stm);

                // to manage the event mission_transfert_direct_distributeur_polychrome
                virtual void mission_transfert_direct_distributeur_polychrome(MAE_PICKY & stm);

                // to manage the event mission_push_distributeur_monochrome
                virtual void mission_push_distributeur_monochrome(MAE_PICKY & stm);

                // to manage the event mission_push_cratere
                virtual void mission_push_cratere(MAE_PICKY & stm);

                // to manage the event mission_drop_zone_depart
                virtual void mission_drop_zone_depart(MAE_PICKY & stm);

                // to manage the event mission_depot_base_diagonale
                virtual void mission_depot_base_diagonale(MAE_PICKY & stm);

                // to manage the event mission_depot_base_verticale
                virtual void mission_depot_base_verticale(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

            };
            
            // implement the state MISSION_DEPOT_BASE_VERTICALE
            class MISSION_DEPOT_BASE_VERTICALE_State : public AnyState {
              public:
                virtual ~MISSION_DEPOT_BASE_VERTICALE_State();

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // to manage the exit point 'EXIT_MISSION_DEPOT_BASE_VERTICALE', defined because probably shared
                void _exit10(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

            };
            
            // implement the state MISSION_DEPOT_BASE_DIAGONALE
            class MISSION_DEPOT_BASE_DIAGONALE_State : public AnyState {
              public:
                virtual ~MISSION_DEPOT_BASE_DIAGONALE_State();

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // to manage the exit point 'EXIT_MISSION_DEPOT_BASE_DIAGONALE', defined because probably shared
                void _exit9(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

            };
            
            // implement the state MISSION_DROP_ZONE_DEPART
            class MISSION_DROP_ZONE_DEPART_State : public AnyState {
              public:
                virtual ~MISSION_DROP_ZONE_DEPART_State();

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // to manage the exit point 'EXIT_MISSION_DROP_ZONE_DEPART', defined because probably shared
                void _exit8(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

            };
            
            // implement the state MISSION_PUSH_CRATERE
            class MISSION_PUSH_CRATERE_State : public AnyState {
              public:
                virtual ~MISSION_PUSH_CRATERE_State();

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // to manage the exit point 'EXIT_MISSION_PUSH_CRATERE', defined because probably shared
                void _exit7(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

            };
            
            // implement the state MISSION_PUSH_DISTRIBUTEUR_MONOCHROME
            class MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State : public AnyState {
              public:
                virtual ~MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State();

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // to manage the exit point 'EXIT_MISSION_PUSH_DISTRIBUTEUR_MONOCHROME', defined because probably shared
                void _exit6(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

            };
            
            // implement the state MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME
            class MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State : public AnyState {
              public:
                virtual ~MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State();

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // to manage the exit point 'EXIT_MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME', defined because probably shared
                void _exit5(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

            };
            
            // implement the state MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME
            class MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State : public AnyState {
              public:
                virtual ~MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State();

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // to manage the exit point 'EXIT_MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME', defined because probably shared
                void _exit4(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

            };
            
            // implement the state MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT
            class MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State : public AnyState {
              public:
                virtual ~MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State();

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // to manage the exit point 'EXIT_MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT', defined because probably shared
                void _exit3(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

            };
            
            // implement the state MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE
            class MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State : public AnyState {
              public:
                // implement the state Collecte Polychrome 1
                class Collecte_Polychrome_1_State : public AnyState {
                  public:
                    virtual ~Collecte_Polychrome_1_State();

                    virtual bool _completion(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state Etat check sortie de mission
                class Etat_check_sortie_de_mission_State : public AnyState {
                  public:
                    virtual ~Etat_check_sortie_de_mission_State();

                    virtual bool _completion(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state Collecte Polychrome 3
                class Collecte_Polychrome_3_State : public AnyState {
                  public:
                    virtual ~Collecte_Polychrome_3_State();

                    virtual bool _completion(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state Collecte Poychrome 2
                class Collecte_Poychrome_2_State : public AnyState {
                  public:
                    virtual ~Collecte_Poychrome_2_State();

                    virtual bool _completion(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                virtual ~MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State();

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // to manage the exit point 'EXIT_MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE', defined because probably shared
                void _exit2(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

                // memorize the instance of the state Collecte Polychrome 1, internal
                Collecte_Polychrome_1_State _collecte_polychrome_1_state;

                // memorize the instance of the state Collecte Poychrome 2, internal
                Collecte_Poychrome_2_State _collecte_poychrome_2_state;

                // memorize the instance of the state Collecte Polychrome 3, internal
                Collecte_Polychrome_3_State _collecte_polychrome_3_state;

                // memorize the instance of the state Etat check sortie de mission, internal
                Etat_check_sortie_de_mission_State _etat_check_sortie_de_mission_state;

            };
            
            virtual ~JEU_State();

            // memorize the instance of the state DECISION_MISSION, internal
            DECISION_MISSION_State _decision_mission_state;

            // memorize the instance of the state MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE, internal
            MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State _mission_collecte_module_centraux_initiale_state;

            // memorize the instance of the state MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT, internal
            MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State _mission_collecte_module_centraux_restant_state;

            // memorize the instance of the state MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME, internal
            MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State _mission_collecte_distributeur_monochrome_state;

            // memorize the instance of the state MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME, internal
            MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State _mission_transfert_direct_distributeur_polychrome_state;

            // memorize the instance of the state MISSION_PUSH_DISTRIBUTEUR_MONOCHROME, internal
            MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State _mission_push_distributeur_monochrome_state;

            // memorize the instance of the state MISSION_PUSH_CRATERE, internal
            MISSION_PUSH_CRATERE_State _mission_push_cratere_state;

            // memorize the instance of the state MISSION_DROP_ZONE_DEPART, internal
            MISSION_DROP_ZONE_DEPART_State _mission_drop_zone_depart_state;

            // memorize the instance of the state MISSION_DEPOT_BASE_DIAGONALE, internal
            MISSION_DEPOT_BASE_DIAGONALE_State _mission_depot_base_diagonale_state;

            // memorize the instance of the state MISSION_DEPOT_BASE_VERTICALE, internal
            MISSION_DEPOT_BASE_VERTICALE_State _mission_depot_base_verticale_state;

            // to manage the event create
            virtual void create(MAE_PICKY & stm);

            // to manage the event evitement
            virtual void evitement(MAE_PICKY & stm);

            // to manage the event end_game
            virtual void end_game(MAE_PICKY & stm);

            // perform the 'entry behavior'
            void _doentry(MAE_PICKY & stm);

            // returns the state containing the current
            virtual AnyState * _upper(MAE_PICKY & stm);

        };
        
        virtual ~MAE_PICKY_State();

        // memorize the instance of the state INITIALISATION, internal
        INITIALISATION_State _initialisation_state;

        // memorize the instance of the state JEU, internal
        JEU_State _jeu_state;

        // memorize the instance of the state EVITEMENT, internal
        EVITEMENT_State _evitement_state;

        // memorize the instance of the state PREPARATION, internal
        PREPARATION_State _preparation_state;

        // memorize the instance of the state END, internal
        END_State _end_state;

        // to manage the event create
        virtual void create(MAE_PICKY & stm);

        // returns the state containing the current
        virtual AnyState * _upper(MAE_PICKY &);

    };
    
    // memorize the instance of the state MAE_PICKY, internal
    MAE_PICKY_State _mae_picky_state;


  public:
    MAE_PICKY();

    virtual ~MAE_PICKY();

    // the operation you call to signal the event create
    bool create();

    // the operation you call to signal the event start_mis
    bool start_mis();

  friend class MAE_PICKY_State::INITIALISATION_State::WAIT_START_IN_State;
    // the operation you call to signal the event blocage
    bool blocage();

  friend class MAE_PICKY_State::INITIALISATION_State::RECALAGE_AR_State;
    // the operation you call to signal the event time_out
    bool time_out();

  friend class MAE_PICKY_State::INITIALISATION_State::SET_X_Y_CAP_State;
  friend class MAE_PICKY_State::INITIALISATION_State::CHECK_COTE_State;
    // the operation you call to signal the event assFini
    bool assFini();

  friend class MAE_PICKY_State::INITIALISATION_State::AVANCE_State;
    // the operation you call to signal the event start_enleve
    bool start_enleve();

  friend class MAE_PICKY_State::INITIALISATION_State::WAIT_START_OUT_State;
  friend class MAE_PICKY_State::INITIALISATION_State;
    // the operation you call to signal the event mission_collecte_module_centraux_initiale
    bool mission_collecte_module_centraux_initiale();

    // the operation you call to signal the event mission_collecte_module_centraux_restant
    bool mission_collecte_module_centraux_restant();

    // the operation you call to signal the event mission_collecte_distributeur_monochrome
    bool mission_collecte_distributeur_monochrome();

    // the operation you call to signal the event mission_transfert_direct_distributeur_polychrome
    bool mission_transfert_direct_distributeur_polychrome();

    // the operation you call to signal the event mission_push_distributeur_monochrome
    bool mission_push_distributeur_monochrome();

    // the operation you call to signal the event mission_push_cratere
    bool mission_push_cratere();

    // the operation you call to signal the event mission_drop_zone_depart
    bool mission_drop_zone_depart();

    // the operation you call to signal the event mission_depot_base_diagonale
    bool mission_depot_base_diagonale();

    // the operation you call to signal the event mission_depot_base_verticale
    bool mission_depot_base_verticale();

  friend class MAE_PICKY_State::JEU_State::DECISION_MISSION_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State;
    // the operation you call to signal the event evitement
    bool evitement();

    // the operation you call to signal the event end_game
    bool end_game();

  friend class MAE_PICKY_State::JEU_State;
  friend class MAE_PICKY_State::EVITEMENT_State;
  friend class MAE_PICKY_State::PREPARATION_State;
  friend class MAE_PICKY_State::END_State;
  friend class MAE_PICKY_State;
    // to execute the current state 'do activity'
    void doActivity();


  protected:
    // change the current state, internal
    inline void _set_currentState(AnyState & st);

    // execution done, internal
    void _final();

    // contains the current state, internal
    AnyState * _current_state;

  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_3_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Etat_check_sortie_de_mission_State;

  public:
    // the operation you call to signal the event near
    bool near();

  friend class MAE_PICKY_State::EVITEMENT_State::ACTION_TO_DO_State;
};
// change the current state, internal
inline void MAE_PICKY::_set_currentState(MAE_PICKY::AnyState & st) {
    _current_state = &st;
}

#endif
