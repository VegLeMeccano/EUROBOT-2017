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

        // the current state doesn't manage the event clw_stocked, give it to the upper state
        virtual void clw_stocked(MAE_PICKY & stm);

        // the current state doesn't manage the event clw_fail_catch, give it to the upper state
        virtual void clw_fail_catch(MAE_PICKY & stm);

        // the current state doesn't manage the event sto_l_stocked, give it to the upper state
        virtual void sto_l_stocked(MAE_PICKY & stm);

        // the current state doesn't manage the event sto_l_fail, give it to the upper state
        virtual void sto_l_fail(MAE_PICKY & stm);

        // the current state doesn't manage the event sto_c_stocked, give it to the upper state
        virtual void sto_c_stocked(MAE_PICKY & stm);

        // the current state doesn't manage the event sto_c_fail, give it to the upper state
        virtual void sto_c_fail(MAE_PICKY & stm);

        // the current state doesn't manage the event sto_r_stocked, give it to the upper state
        virtual void sto_r_stocked(MAE_PICKY & stm);

        // the current state doesn't manage the event sto_r_fail, give it to the upper state
        virtual void sto_r_fail(MAE_PICKY & stm);

        // the current state doesn't manage the event recall, give it to the upper state
        virtual void recall(MAE_PICKY & stm);

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

                // to manage the event blocage
                virtual void blocage(MAE_PICKY & stm);

                // perform the 'exit behavior'
                void _doexit(MAE_PICKY & stm);

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

                // to manage the event blocage
                virtual void blocage(MAE_PICKY & stm);

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
            void _exit28(MAE_PICKY & stm);

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

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_PICKY & stm);

                // to manage the event recall
                virtual void recall(MAE_PICKY & stm);

            };
            
            // implement the state recall
            class recall_State : public AnyState {
              public:
                virtual ~recall_State();

                // to manage the event time_out
                virtual void time_out(MAE_PICKY & stm);

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

            };
            
            // implement the state MISSION_DEPOT_BASE_VERTICALE
            class MISSION_DEPOT_BASE_VERTICALE_State : public AnyState {
              public:
                // implement the state WAYPOINT INIT
                class WAYPOINT_INIT_State : public AnyState {
                  public:
                    // implement the state CAP TO MISSION
                    class CAP_TO_MISSION_State : public AnyState {
                      public:
                        virtual ~CAP_TO_MISSION_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state BF DROITE MISSION
                    class BF_DROITE_MISSION_State : public AnyState {
                      public:
                        virtual ~BF_DROITE_MISSION_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state CAP MISSION
                    class CAP_MISSION_State : public AnyState {
                      public:
                        virtual ~CAP_MISSION_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    virtual ~WAYPOINT_INIT_State();

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                    // memorize the instance of the state CAP TO MISSION, internal
                    CAP_TO_MISSION_State _cap_to_mission_state;

                    // memorize the instance of the state CAP MISSION, internal
                    CAP_MISSION_State _cap_mission_state;

                    // memorize the instance of the state BF DROITE MISSION, internal
                    BF_DROITE_MISSION_State _bf_droite_mission_state;

                    // to manage the exit point 'SORTIE_WAYPOINT_INIT', defined because probably shared
                    void _exit27(MAE_PICKY & stm);

                };
                
                // implement the state DEGAGEMENT
                class DEGAGEMENT_State : public AnyState {
                  public:
                    virtual ~DEGAGEMENT_State();

                    virtual bool _completion(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state ROUTINE DE POSE
                class ROUTINE_DE_POSE_State : public AnyState {
                  public:
                    virtual ~ROUTINE_DE_POSE_State();

                    virtual bool _completion(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state PLACEMENT
                class PLACEMENT_State : public AnyState {
                  public:
                    virtual ~PLACEMENT_State();

                    virtual bool _completion(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                virtual ~MISSION_DEPOT_BASE_VERTICALE_State();

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_PICKY & stm);

                // memorize the instance of the state WAYPOINT INIT, internal
                WAYPOINT_INIT_State _waypoint_init_state;

                // memorize the instance of the state PLACEMENT, internal
                PLACEMENT_State _placement_state;

                // memorize the instance of the state ROUTINE DE POSE, internal
                ROUTINE_DE_POSE_State _routine_de_pose_state;

                // memorize the instance of the state DEGAGEMENT, internal
                DEGAGEMENT_State _degagement_state;

                // to manage the exit point 'EXIT_MISSION_DEPOT_BASE_VERTICALE', defined because probably shared
                void _exit26(MAE_PICKY & stm);

            };
            
            // implement the state MISSION_DEPOT_BASE_DIAGONALE
            class MISSION_DEPOT_BASE_DIAGONALE_State : public AnyState {
              public:
                // implement the state WAYPOINT INIT
                class WAYPOINT_INIT_State : public AnyState {
                  public:
                    // implement the state CAP TO MISSION
                    class CAP_TO_MISSION_State : public AnyState {
                      public:
                        virtual ~CAP_TO_MISSION_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state CAP MISSION
                    class CAP_MISSION_State : public AnyState {
                      public:
                        virtual ~CAP_MISSION_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state BF DROITE TO MISSION
                    class BF_DROITE_TO_MISSION_State : public AnyState {
                      public:
                        virtual ~BF_DROITE_TO_MISSION_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    virtual ~WAYPOINT_INIT_State();

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                    // memorize the instance of the state CAP TO MISSION, internal
                    CAP_TO_MISSION_State _cap_to_mission_state;

                    // memorize the instance of the state BF DROITE TO MISSION, internal
                    BF_DROITE_TO_MISSION_State _bf_droite_to_mission_state;

                    // memorize the instance of the state CAP MISSION, internal
                    CAP_MISSION_State _cap_mission_state;

                    // to manage the exit point 'SORTIE_WAYPOINT_INIT', defined because probably shared
                    void _exit25(MAE_PICKY & stm);

                };
                
                // implement the state DEGAGEMENT
                class DEGAGEMENT_State : public AnyState {
                  public:
                    virtual ~DEGAGEMENT_State();

                    virtual bool _completion(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state ROUTINE DE POSE
                class ROUTINE_DE_POSE_State : public AnyState {
                  public:
                    virtual ~ROUTINE_DE_POSE_State();

                    virtual bool _completion(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state PLACEMENT
                class PLACEMENT_State : public AnyState {
                  public:
                    virtual ~PLACEMENT_State();

                    virtual bool _completion(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                virtual ~MISSION_DEPOT_BASE_DIAGONALE_State();

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_PICKY & stm);

                // memorize the instance of the state WAYPOINT INIT, internal
                WAYPOINT_INIT_State _waypoint_init_state;

                // memorize the instance of the state PLACEMENT, internal
                PLACEMENT_State _placement_state;

                // memorize the instance of the state ROUTINE DE POSE, internal
                ROUTINE_DE_POSE_State _routine_de_pose_state;

                // memorize the instance of the state DEGAGEMENT, internal
                DEGAGEMENT_State _degagement_state;

                // to manage the exit point 'EXIT_MISSION_DEPOT_BASE_DIAGONALE', defined because probably shared
                void _exit24(MAE_PICKY & stm);

            };
            
            // implement the state MISSION_DROP_ZONE_DEPART
            class MISSION_DROP_ZONE_DEPART_State : public AnyState {
              public:
                // implement the state WAYPOINT INIT
                class WAYPOINT_INIT_State : public AnyState {
                  public:
                    // implement the state Cap to mission
                    class Cap_to_mission_State : public AnyState {
                      public:
                        virtual ~Cap_to_mission_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state Cap mission
                    class Cap_mission_State : public AnyState {
                      public:
                        virtual ~Cap_mission_State();

                        virtual bool _completion(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state BF droite to mission
                    class BF_droite_to_mission_State : public AnyState {
                      public:
                        virtual ~BF_droite_to_mission_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    virtual ~WAYPOINT_INIT_State();

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                    // memorize the instance of the state Cap to mission, internal
                    Cap_to_mission_State _cap_to_mission_state;

                    // memorize the instance of the state BF droite to mission, internal
                    BF_droite_to_mission_State _bf_droite_to_mission_state;

                    // memorize the instance of the state Cap mission, internal
                    Cap_mission_State _cap_mission_state;

                    // implement a junction, through an operation because shared, internal
                    void _junction2(MAE_PICKY & stm);

                    // to manage the exit point 'SORTIE_WAYPOINT_INIT', defined because probably shared
                    void _exit23(MAE_PICKY & stm);

                };
                
                // implement the state Range Arm
                class Range_Arm_State : public AnyState {
                  public:
                    virtual ~Range_Arm_State();

                    virtual bool _completion(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state Recule
                class Recule_State : public AnyState {
                  public:
                    virtual ~Recule_State();

                    // to manage the event assFini
                    virtual void assFini(MAE_PICKY & stm);

                    // to manage the event blocage
                    virtual void blocage(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state Ouverture pince
                class Ouverture_pince_State : public AnyState {
                  public:
                    virtual ~Ouverture_pince_State();

                    // to manage the event time_out
                    virtual void time_out(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // perform the 'exit behavior'
                    void _doexit(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state Preparation Arm
                class Preparation_Arm_State : public AnyState {
                  public:
                    virtual ~Preparation_Arm_State();

                    // to manage the event time_out
                    virtual void time_out(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state Avance
                class Avance_State : public AnyState {
                  public:
                    virtual ~Avance_State();

                    // to manage the event assFini
                    virtual void assFini(MAE_PICKY & stm);

                    // to manage the event blocage
                    virtual void blocage(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                    // perform the 'exit behavior'
                    void _doexit(MAE_PICKY & stm);

                };
                
                // implement the state Vidange Stockage Haut
                class Vidange_Stockage_Haut_State : public AnyState {
                  public:
                    virtual ~Vidange_Stockage_Haut_State();

                    // to manage the event time_out
                    virtual void time_out(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // perform the 'exit behavior'
                    void _doexit(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state BF droite zone depart
                class BF_droite_zone_depart_State : public AnyState {
                  public:
                    virtual ~BF_droite_zone_depart_State();

                    // to manage the event assFini
                    virtual void assFini(MAE_PICKY & stm);

                    // to manage the event blocage
                    virtual void blocage(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                virtual ~MISSION_DROP_ZONE_DEPART_State();

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_PICKY & stm);

                // memorize the instance of the state WAYPOINT INIT, internal
                WAYPOINT_INIT_State _waypoint_init_state;

                // memorize the instance of the state BF droite zone depart, internal
                BF_droite_zone_depart_State _bf_droite_zone_depart_state;

                // memorize the instance of the state Vidange Stockage Haut, internal
                Vidange_Stockage_Haut_State _vidange_stockage_haut_state;

                // memorize the instance of the state Avance, internal
                Avance_State _avance_state;

                // memorize the instance of the state Preparation Arm, internal
                Preparation_Arm_State _preparation_arm_state;

                // memorize the instance of the state Ouverture pince, internal
                Ouverture_pince_State _ouverture_pince_state;

                // memorize the instance of the state Recule, internal
                Recule_State _recule_state;

                // memorize the instance of the state Range Arm, internal
                Range_Arm_State _range_arm_state;

                // to manage the exit point 'EXIT_MISSION_DROP_ZONE_DEPART', defined because probably shared
                void _exit22(MAE_PICKY & stm);

            };
            
            // implement the state MISSION_PUSH_CRATERE
            class MISSION_PUSH_CRATERE_State : public AnyState {
              public:
                // implement the state WAYPOINT INIT
                class WAYPOINT_INIT_State : public AnyState {
                  public:
                    // implement the state Cap to mission
                    class Cap_to_mission_State : public AnyState {
                      public:
                        virtual ~Cap_to_mission_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state BF droite to mission
                    class BF_droite_to_mission_State : public AnyState {
                      public:
                        virtual ~BF_droite_to_mission_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state Cap mission
                    class Cap_mission_State : public AnyState {
                      public:
                        virtual ~Cap_mission_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    virtual ~WAYPOINT_INIT_State();

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                    // memorize the instance of the state Cap to mission, internal
                    Cap_to_mission_State _cap_to_mission_state;

                    // memorize the instance of the state Cap mission, internal
                    Cap_mission_State _cap_mission_state;

                    // memorize the instance of the state BF droite to mission, internal
                    BF_droite_to_mission_State _bf_droite_to_mission_state;

                    // to manage the exit point 'SORTIE_WAYPOINT_INIT', defined because probably shared
                    void _exit20(MAE_PICKY & stm);

                };
                
                // implement the state RANGE ARM
                class RANGE_ARM_State : public AnyState {
                  public:
                    virtual ~RANGE_ARM_State();

                    // to manage the event time_out
                    virtual void time_out(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state RECULE
                class RECULE_State : public AnyState {
                  public:
                    virtual ~RECULE_State();

                    // to manage the event assFini
                    virtual void assFini(MAE_PICKY & stm);

                    // to manage the event blocage
                    virtual void blocage(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state GOLF PLAYING
                class GOLF_PLAYING_State : public AnyState {
                  public:
                    // implement the state PREPARATION DU SWING
                    class PREPARATION_DU_SWING_State : public AnyState {
                      public:
                        virtual ~PREPARATION_DU_SWING_State();

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state SHOOT
                    class SHOOT_State : public AnyState {
                      public:
                        virtual ~SHOOT_State();

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    virtual ~GOLF_PLAYING_State();

                    // memorize the instance of the state PREPARATION DU SWING, internal
                    PREPARATION_DU_SWING_State _preparation_du_swing_state;

                    // memorize the instance of the state SHOOT, internal
                    SHOOT_State _shoot_state;

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                    // perform the 'exit behavior'
                    void _doexit(MAE_PICKY & stm);

                    // to manage the exit point 'SORTIE_GOLF_PLAYING', defined because probably shared
                    void _exit21(MAE_PICKY & stm);

                };
                
                // implement the state AVANCE
                class AVANCE_State : public AnyState {
                  public:
                    virtual ~AVANCE_State();

                    // to manage the event assFini
                    virtual void assFini(MAE_PICKY & stm);

                    // to manage the event blocage
                    virtual void blocage(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                    // perform the 'exit behavior'
                    void _doexit(MAE_PICKY & stm);

                };
                
                // implement the state PREPARATION ARM
                class PREPARATION_ARM_State : public AnyState {
                  public:
                    virtual ~PREPARATION_ARM_State();

                    // to manage the event time_out
                    virtual void time_out(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                virtual ~MISSION_PUSH_CRATERE_State();

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_PICKY & stm);

                // memorize the instance of the state WAYPOINT INIT, internal
                WAYPOINT_INIT_State _waypoint_init_state;

                // memorize the instance of the state PREPARATION ARM, internal
                PREPARATION_ARM_State _preparation_arm_state;

                // memorize the instance of the state AVANCE, internal
                AVANCE_State _avance_state;

                // memorize the instance of the state GOLF PLAYING, internal
                GOLF_PLAYING_State _golf_playing_state;

                // memorize the instance of the state RECULE, internal
                RECULE_State _recule_state;

                // memorize the instance of the state RANGE ARM, internal
                RANGE_ARM_State _range_arm_state;

                // to manage the exit point 'EXIT_MISSION_PUSH_CRATERE', defined because probably shared
                void _exit19(MAE_PICKY & stm);

            };
            
            // implement the state MISSION_PUSH_DISTRIBUTEUR_MONOCHROME
            class MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State : public AnyState {
              public:
                // implement the state PLACEMENT
                class PLACEMENT_State : public AnyState {
                  public:
                    virtual ~PLACEMENT_State();

                    // to manage the event assFini
                    virtual void assFini(MAE_PICKY & stm);

                    // to manage the event blocage
                    virtual void blocage(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                    // perform the 'exit behavior'
                    void _doexit(MAE_PICKY & stm);

                };
                
                // implement the state DEGAGEMENT
                class DEGAGEMENT_State : public AnyState {
                  public:
                    virtual ~DEGAGEMENT_State();

                    // to manage the event blocage
                    virtual void blocage(MAE_PICKY & stm);

                    // to manage the event assFini
                    virtual void assFini(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state WAYPOINT INIT
                class WAYPOINT_INIT_State : public AnyState {
                  public:
                    // implement the state Cap to mission
                    class Cap_to_mission_State : public AnyState {
                      public:
                        virtual ~Cap_to_mission_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state Cap mission
                    class Cap_mission_State : public AnyState {
                      public:
                        virtual ~Cap_mission_State();

                        virtual bool _completion(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state BF droite to mission
                    class BF_droite_to_mission_State : public AnyState {
                      public:
                        virtual ~BF_droite_to_mission_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    virtual ~WAYPOINT_INIT_State();

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                    // memorize the instance of the state Cap to mission, internal
                    Cap_to_mission_State _cap_to_mission_state;

                    // memorize the instance of the state BF droite to mission, internal
                    BF_droite_to_mission_State _bf_droite_to_mission_state;

                    // memorize the instance of the state Cap mission, internal
                    Cap_mission_State _cap_mission_state;

                    // to manage the exit point 'SORTIE_WAYPOINT_INIT', defined because probably shared
                    void _exit18(MAE_PICKY & stm);

                };
                
                // implement the state CATCH AND THROW
                class CATCH_AND_THROW_State : public AnyState {
                  public:
                    // implement the state ROTATION AND SLIDE VERS ZONE DE POSE
                    class ROTATION_AND_SLIDE_VERS_ZONE_DE_POSE_State : public AnyState {
                      public:
                        virtual ~ROTATION_AND_SLIDE_VERS_ZONE_DE_POSE_State();

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state REPLIS
                    class REPLIS_State : public AnyState {
                      public:
                        virtual ~REPLIS_State();

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state RECENTRAGE
                    class RECENTRAGE_State : public AnyState {
                      public:
                        virtual ~RECENTRAGE_State();

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state DEGAGEMENT
                    class DEGAGEMENT_State : public AnyState {
                      public:
                        virtual ~DEGAGEMENT_State();

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                    };
                    
                    // implement the state POSE SUR ZONE DEPART
                    class POSE_SUR_ZONE_DEPART_State : public AnyState {
                      public:
                        virtual ~POSE_SUR_ZONE_DEPART_State();

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                    };
                    
                    // implement the state RECULE PINCE
                    class RECULE_PINCE_State : public AnyState {
                      public:
                        virtual ~RECULE_PINCE_State();

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                    };
                    
                    // implement the state PRISE AV FACE
                    class PRISE_AV_FACE_State : public AnyState {
                      public:
                        virtual ~PRISE_AV_FACE_State();

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                        // to manage the event clw_stocked
                        virtual void clw_stocked(MAE_PICKY & stm);

                        // to manage the event clw_fail_catch
                        virtual void clw_fail_catch(MAE_PICKY & stm);

                    };
                    
                    // implement the state PRISE AR FACE
                    class PRISE_AR_FACE_State : public AnyState {
                      public:
                        virtual ~PRISE_AR_FACE_State();

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                    };
                    
                    virtual ~CATCH_AND_THROW_State();

                    // memorize the instance of the state PRISE AR FACE, internal
                    PRISE_AR_FACE_State _prise_ar_face_state;

                    // memorize the instance of the state PRISE AV FACE, internal
                    PRISE_AV_FACE_State _prise_av_face_state;

                    // memorize the instance of the state RECULE PINCE, internal
                    RECULE_PINCE_State _recule_pince_state;

                    // memorize the instance of the state POSE SUR ZONE DEPART, internal
                    POSE_SUR_ZONE_DEPART_State _pose_sur_zone_depart_state;

                    // memorize the instance of the state DEGAGEMENT, internal
                    DEGAGEMENT_State _degagement_state;

                    // implement a junction, through an operation because shared, internal
                    void _junction1(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                    // memorize the instance of the state RECENTRAGE, internal
                    RECENTRAGE_State _recentrage_state;

                    // memorize the instance of the state REPLIS, internal
                    REPLIS_State _replis_state;

                    // memorize the instance of the state ROTATION AND SLIDE VERS ZONE DE POSE, internal
                    ROTATION_AND_SLIDE_VERS_ZONE_DE_POSE_State _rotation_and_slide_vers_zone_de_pose_state;

                    // to manage the exit point 'SORTIE CATCH AND THROW', defined because probably shared
                    void _exit17(MAE_PICKY & stm);

                };
                
                virtual ~MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State();

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_PICKY & stm);

                // memorize the instance of the state PLACEMENT, internal
                PLACEMENT_State _placement_state;

                // memorize the instance of the state CATCH AND THROW, internal
                CATCH_AND_THROW_State _catch_and_throw_state;

                // memorize the instance of the state WAYPOINT INIT, internal
                WAYPOINT_INIT_State _waypoint_init_state;

                // memorize the instance of the state DEGAGEMENT, internal
                DEGAGEMENT_State _degagement_state;

                // to manage the exit point 'EXIT_MISSION_PUSH_DISTRIBUTEUR_MONOCHROME', defined because probably shared
                void _exit16(MAE_PICKY & stm);

            };
            
            // implement the state MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME
            class MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State : public AnyState {
              public:
                // implement the state WAYPOINT INIT
                class WAYPOINT_INIT_State : public AnyState {
                  public:
                    // implement the state CAP TO MISSION
                    class CAP_TO_MISSION_State : public AnyState {
                      public:
                        virtual ~CAP_TO_MISSION_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state CAP MISSION
                    class CAP_MISSION_State : public AnyState {
                      public:
                        virtual ~CAP_MISSION_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state BF DROITE TO MISSION
                    class BF_DROITE_TO_MISSION_State : public AnyState {
                      public:
                        virtual ~BF_DROITE_TO_MISSION_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    virtual ~WAYPOINT_INIT_State();

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                    // memorize the instance of the state CAP TO MISSION, internal
                    CAP_TO_MISSION_State _cap_to_mission_state;

                    // memorize the instance of the state BF DROITE TO MISSION, internal
                    BF_DROITE_TO_MISSION_State _bf_droite_to_mission_state;

                    // memorize the instance of the state CAP MISSION, internal
                    CAP_MISSION_State _cap_mission_state;

                    // to manage the exit point 'SORTIE_WAYPOINT_INIT', defined because probably shared
                    void _exit14(MAE_PICKY & stm);

                };
                
                // implement the state DEGAGEMENT
                class DEGAGEMENT_State : public AnyState {
                  public:
                    virtual ~DEGAGEMENT_State();

                    // to manage the event assFini
                    virtual void assFini(MAE_PICKY & stm);

                    // to manage the event blocage
                    virtual void blocage(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state PREPARATION ARM
                class PREPARATION_ARM_State : public AnyState {
                  public:
                    virtual ~PREPARATION_ARM_State();

                    // to manage the event time_out
                    virtual void time_out(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state REPLIS ARM
                class REPLIS_ARM_State : public AnyState {
                  public:
                    virtual ~REPLIS_ARM_State();

                    // to manage the event time_out
                    virtual void time_out(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state CATCH AND PLACE
                class CATCH_AND_PLACE_State : public AnyState {
                  public:
                    // implement the state REPLIS
                    class REPLIS_State : public AnyState {
                      public:
                        virtual ~REPLIS_State();

                        virtual bool _completion(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                    };
                    
                    // implement the state DEGAGEMENT DROP
                    class DEGAGEMENT_DROP_State : public AnyState {
                      public:
                        virtual ~DEGAGEMENT_DROP_State();

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state RETOUR CENTRE FOLDED
                    class RETOUR_CENTRE_FOLDED_State : public AnyState {
                      public:
                        virtual ~RETOUR_CENTRE_FOLDED_State();

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                    };
                    
                    // implement the state DROP
                    class DROP_State : public AnyState {
                      public:
                        virtual ~DROP_State();

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                    };
                    
                    // implement the state COUP DE PLACEMENT
                    class COUP_DE_PLACEMENT_State : public AnyState {
                      public:
                        virtual ~COUP_DE_PLACEMENT_State();

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                    };
                    
                    // implement the state PITCH UP
                    class PITCH_UP_State : public AnyState {
                      public:
                        virtual ~PITCH_UP_State();

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                    };
                    
                    // implement the state ROTATION DECALAGE CENTRAL
                    class ROTATION_DECALAGE_CENTRAL_State : public AnyState {
                      public:
                        virtual ~ROTATION_DECALAGE_CENTRAL_State();

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                    };
                    
                    // implement the state DEGAGEMENT PRISE
                    class DEGAGEMENT_PRISE_State : public AnyState {
                      public:
                        virtual ~DEGAGEMENT_PRISE_State();

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                    };
                    
                    // implement the state PRISE AV DIAGONAL SIDE
                    class PRISE_AV_DIAGONAL_SIDE_State : public AnyState {
                      public:
                        virtual ~PRISE_AV_DIAGONAL_SIDE_State();

                        // to manage the event clw_stocked
                        virtual void clw_stocked(MAE_PICKY & stm);

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // to manage the event clw_fail_catch
                        virtual void clw_fail_catch(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                    };
                    
                    // implement the state PRISE AR DIAGONAL SIDE
                    class PRISE_AR_DIAGONAL_SIDE_State : public AnyState {
                      public:
                        virtual ~PRISE_AR_DIAGONAL_SIDE_State();

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                    };
                    
                    virtual ~CATCH_AND_PLACE_State();

                    // memorize the instance of the state REPLIS, internal
                    REPLIS_State _replis_state;

                    // memorize the instance of the state PRISE AR DIAGONAL SIDE, internal
                    PRISE_AR_DIAGONAL_SIDE_State _prise_ar_diagonal_side_state;

                    // memorize the instance of the state PRISE AV DIAGONAL SIDE, internal
                    PRISE_AV_DIAGONAL_SIDE_State _prise_av_diagonal_side_state;

                    // memorize the instance of the state DEGAGEMENT PRISE, internal
                    DEGAGEMENT_PRISE_State _degagement_prise_state;

                    // memorize the instance of the state ROTATION DECALAGE CENTRAL, internal
                    ROTATION_DECALAGE_CENTRAL_State _rotation_decalage_central_state;

                    // memorize the instance of the state PITCH UP, internal
                    PITCH_UP_State _pitch_up_state;

                    // memorize the instance of the state COUP DE PLACEMENT, internal
                    COUP_DE_PLACEMENT_State _coup_de_placement_state;

                    // memorize the instance of the state DROP, internal
                    DROP_State _drop_state;

                    // memorize the instance of the state RETOUR CENTRE FOLDED, internal
                    RETOUR_CENTRE_FOLDED_State _retour_centre_folded_state;

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // to manage the exit point 'Sortie_catch_and_place', defined because probably shared
                    void _exit15(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                    // memorize the instance of the state DEGAGEMENT DROP, internal
                    DEGAGEMENT_DROP_State _degagement_drop_state;

                };
                
                // implement the state APPROCHE
                class APPROCHE_State : public AnyState {
                  public:
                    virtual ~APPROCHE_State();

                    // to manage the event assFini
                    virtual void assFini(MAE_PICKY & stm);

                    // to manage the event blocage
                    virtual void blocage(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                    // perform the 'exit behavior'
                    void _doexit(MAE_PICKY & stm);

                };
                
                virtual ~MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State();

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_PICKY & stm);

                // memorize the instance of the state WAYPOINT INIT, internal
                WAYPOINT_INIT_State _waypoint_init_state;

                // to manage the exit point 'EXIT_MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME', defined because probably shared
                void _exit13(MAE_PICKY & stm);

                // memorize the instance of the state CATCH AND PLACE, internal
                CATCH_AND_PLACE_State _catch_and_place_state;

                // memorize the instance of the state APPROCHE, internal
                APPROCHE_State _approche_state;

                // memorize the instance of the state REPLIS ARM, internal
                REPLIS_ARM_State _replis_arm_state;

                // memorize the instance of the state PREPARATION ARM, internal
                PREPARATION_ARM_State _preparation_arm_state;

                // memorize the instance of the state DEGAGEMENT, internal
                DEGAGEMENT_State _degagement_state;

            };
            
            // implement the state MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME
            class MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State : public AnyState {
              public:
                // implement the state WAYPOINT INIT
                class WAYPOINT_INIT_State : public AnyState {
                  public:
                    // implement the state CAP TO MISSION
                    class CAP_TO_MISSION_State : public AnyState {
                      public:
                        virtual ~CAP_TO_MISSION_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state CAP MISSION
                    class CAP_MISSION_State : public AnyState {
                      public:
                        virtual ~CAP_MISSION_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state BF DROITE TO MISSION
                    class BF_DROITE_TO_MISSION_State : public AnyState {
                      public:
                        virtual ~BF_DROITE_TO_MISSION_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    virtual ~WAYPOINT_INIT_State();

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                    // memorize the instance of the state CAP TO MISSION, internal
                    CAP_TO_MISSION_State _cap_to_mission_state;

                    // memorize the instance of the state BF DROITE TO MISSION, internal
                    BF_DROITE_TO_MISSION_State _bf_droite_to_mission_state;

                    // memorize the instance of the state CAP MISSION, internal
                    CAP_MISSION_State _cap_mission_state;

                    // to manage the exit point 'SORTIE_WAYPOINT_INIT', defined because probably shared
                    void _exit12(MAE_PICKY & stm);

                };
                
                // implement the state SORTIE DE ZONE
                class SORTIE_DE_ZONE_State : public AnyState {
                  public:
                    virtual ~SORTIE_DE_ZONE_State();

                    virtual bool _completion(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state DEBOIT LE DISTRIB
                class DEBOIT_LE_DISTRIB_State : public AnyState {
                  public:
                    virtual ~DEBOIT_LE_DISTRIB_State();

                    virtual bool _completion(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state PLACEMENT
                class PLACEMENT_State : public AnyState {
                  public:
                    virtual ~PLACEMENT_State();

                    virtual bool _completion(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                virtual ~MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State();

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_PICKY & stm);

                // memorize the instance of the state WAYPOINT INIT, internal
                WAYPOINT_INIT_State _waypoint_init_state;

                // memorize the instance of the state PLACEMENT, internal
                PLACEMENT_State _placement_state;

                // memorize the instance of the state DEBOIT LE DISTRIB, internal
                DEBOIT_LE_DISTRIB_State _deboit_le_distrib_state;

                // memorize the instance of the state SORTIE DE ZONE, internal
                SORTIE_DE_ZONE_State _sortie_de_zone_state;

                // to manage the exit point 'EXIT_MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME', defined because probably shared
                void _exit11(MAE_PICKY & stm);

            };
            
            // implement the state MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT
            class MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State : public AnyState {
              public:
                // implement the state Collecte Monochrome 4
                class Collecte_Monochrome_4_State : public AnyState {
                  public:
                    virtual ~Collecte_Monochrome_4_State();

                    virtual bool _completion(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                    // perform the 'exit behavior'
                    void _doexit(MAE_PICKY & stm);

                };
                
                // implement the state WAYPOINT INIT
                class WAYPOINT_INIT_State : public AnyState {
                  public:
                    // implement the state CAP TO MISSION
                    class CAP_TO_MISSION_State : public AnyState {
                      public:
                        virtual ~CAP_TO_MISSION_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state CAP MISSION
                    class CAP_MISSION_State : public AnyState {
                      public:
                        virtual ~CAP_MISSION_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state BF DROITE TO MISSION
                    class BF_DROITE_TO_MISSION_State : public AnyState {
                      public:
                        virtual ~BF_DROITE_TO_MISSION_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    virtual ~WAYPOINT_INIT_State();

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                    // memorize the instance of the state CAP TO MISSION, internal
                    CAP_TO_MISSION_State _cap_to_mission_state;

                    // memorize the instance of the state BF DROITE TO MISSION, internal
                    BF_DROITE_TO_MISSION_State _bf_droite_to_mission_state;

                    // memorize the instance of the state CAP MISSION, internal
                    CAP_MISSION_State _cap_mission_state;

                    // to manage the exit point 'SORTIE_WAYPOINT_INIT', defined because probably shared
                    void _exit10(MAE_PICKY & stm);

                };
                
                // implement the state Sortie de Zone
                class Sortie_de_Zone_State : public AnyState {
                  public:
                    virtual ~Sortie_de_Zone_State();

                    virtual bool _completion(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state Collecte Monochrome 5
                class Collecte_Monochrome_5_State : public AnyState {
                  public:
                    virtual ~Collecte_Monochrome_5_State();

                    virtual bool _completion(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                    // perform the 'exit behavior'
                    void _doexit(MAE_PICKY & stm);

                };
                
                virtual ~MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State();

                // to manage the event create
                virtual void create(MAE_PICKY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_PICKY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_PICKY & stm);

                // memorize the instance of the state Collecte Monochrome 4, internal
                Collecte_Monochrome_4_State _collecte_monochrome_4_state;

                // memorize the instance of the state Collecte Monochrome 5, internal
                Collecte_Monochrome_5_State _collecte_monochrome_5_state;

                // memorize the instance of the state Sortie de Zone, internal
                Sortie_de_Zone_State _sortie_de_zone_state;

                // memorize the instance of the state WAYPOINT INIT, internal
                WAYPOINT_INIT_State _waypoint_init_state;

                // to manage the exit point 'EXIT_MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT', defined because probably shared
                void _exit9(MAE_PICKY & stm);

            };
            
            // implement the state MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE
            class MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State : public AnyState {
              public:
                // implement the state Collecte Polychrome 1
                class Collecte_Polychrome_1_State : public AnyState {
                  public:
                    // implement the state Preparation Pince
                    class Preparation_Pince_State : public AnyState {
                      public:
                        virtual ~Preparation_Pince_State();

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state garde pince
                    class garde_pince_State : public AnyState {
                      public:
                        virtual ~garde_pince_State();

                        virtual bool _completion(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state replacement Pince
                    class replacement_Pince_State : public AnyState {
                      public:
                        virtual ~replacement_Pince_State();

                        virtual bool _completion(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state Stockage
                    class Stockage_State : public AnyState {
                      public:
                        // implement the state Stock L Yaw Slide
                        class Stock_L_Yaw_Slide_State : public AnyState {
                          public:
                            virtual ~Stock_L_Yaw_Slide_State();

                            // to manage the event time_out
                            virtual void time_out(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state pipo R
                        class pipo_R_State : public AnyState {
                          public:
                            virtual ~pipo_R_State();

                            // to manage the event sto_r_stocked
                            virtual void sto_r_stocked(MAE_PICKY & stm);

                            // to manage the event sto_r_fail
                            virtual void sto_r_fail(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state pipo C
                        class pipo_C_State : public AnyState {
                          public:
                            virtual ~pipo_C_State();

                            // to manage the event sto_c_stocked
                            virtual void sto_c_stocked(MAE_PICKY & stm);

                            // to manage the event sto_c_fail
                            virtual void sto_c_fail(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state pipo L
                        class pipo_L_State : public AnyState {
                          public:
                            virtual ~pipo_L_State();

                            // to manage the event sto_l_stocked
                            virtual void sto_l_stocked(MAE_PICKY & stm);

                            // to manage the event sto_l_fail
                            virtual void sto_l_fail(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state Stock R stocked
                        class Stock_R_stocked_State : public AnyState {
                          public:
                            virtual ~Stock_R_stocked_State();

                            virtual bool _completion(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state Stock C stocked
                        class Stock_C_stocked_State : public AnyState {
                          public:
                            virtual ~Stock_C_stocked_State();

                            virtual bool _completion(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state Stock R Pitch up
                        class Stock_R_Pitch_up_State : public AnyState {
                          public:
                            virtual ~Stock_R_Pitch_up_State();

                            // to manage the event time_out
                            virtual void time_out(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // perform the 'exit behavior'
                            void _doexit(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state Stock C Pitch up
                        class Stock_C_Pitch_up_State : public AnyState {
                          public:
                            virtual ~Stock_C_Pitch_up_State();

                            // to manage the event time_out
                            virtual void time_out(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // perform the 'exit behavior'
                            void _doexit(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state Recentrage
                        class Recentrage_State : public AnyState {
                          public:
                            virtual ~Recentrage_State();

                            virtual bool _completion(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state Stock L stocked
                        class Stock_L_stocked_State : public AnyState {
                          public:
                            virtual ~Stock_L_stocked_State();

                            virtual bool _completion(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state Stock Pitch down
                        class Stock_Pitch_down_State : public AnyState {
                          public:
                            virtual ~Stock_Pitch_down_State();

                            virtual bool _completion(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state Stock L Pitch up
                        class Stock_L_Pitch_up_State : public AnyState {
                          public:
                            virtual ~Stock_L_Pitch_up_State();

                            // to manage the event time_out
                            virtual void time_out(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // perform the 'exit behavior'
                            void _doexit(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state Stock R Yaw Slide
                        class Stock_R_Yaw_Slide_State : public AnyState {
                          public:
                            virtual ~Stock_R_Yaw_Slide_State();

                            // to manage the event time_out
                            virtual void time_out(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state Stock C Yaw Slide
                        class Stock_C_Yaw_Slide_State : public AnyState {
                          public:
                            virtual ~Stock_C_Yaw_Slide_State();

                            // to manage the event time_out
                            virtual void time_out(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        virtual ~Stockage_State();

                        // memorize the instance of the state Stock L Yaw Slide, internal
                        Stock_L_Yaw_Slide_State _stock_l_yaw_slide_state;

                        // memorize the instance of the state Stock C Yaw Slide, internal
                        Stock_C_Yaw_Slide_State _stock_c_yaw_slide_state;

                        // memorize the instance of the state Stock R Yaw Slide, internal
                        Stock_R_Yaw_Slide_State _stock_r_yaw_slide_state;

                        // memorize the instance of the state Stock L Pitch up, internal
                        Stock_L_Pitch_up_State _stock_l_pitch_up_state;

                        // memorize the instance of the state Stock Pitch down, internal
                        Stock_Pitch_down_State _stock_pitch_down_state;

                        // memorize the instance of the state Stock L stocked, internal
                        Stock_L_stocked_State _stock_l_stocked_state;

                        // memorize the instance of the state Recentrage, internal
                        Recentrage_State _recentrage_state;

                        // memorize the instance of the state Stock C Pitch up, internal
                        Stock_C_Pitch_up_State _stock_c_pitch_up_state;

                        // memorize the instance of the state Stock R Pitch up, internal
                        Stock_R_Pitch_up_State _stock_r_pitch_up_state;

                        // memorize the instance of the state Stock C stocked, internal
                        Stock_C_stocked_State _stock_c_stocked_state;

                        // memorize the instance of the state Stock R stocked, internal
                        Stock_R_stocked_State _stock_r_stocked_state;

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // to manage the exit point 'Sortie_stockage', defined because probably shared
                        void _exit4(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                        // memorize the instance of the state pipo L, internal
                        pipo_L_State _pipo_l_state;

                        // memorize the instance of the state pipo C, internal
                        pipo_C_State _pipo_c_state;

                        // memorize the instance of the state pipo R, internal
                        pipo_R_State _pipo_r_state;

                    };
                    
                    // implement the state BF droite sur le module
                    class BF_droite_sur_le_module_State : public AnyState {
                      public:
                        virtual ~BF_droite_sur_le_module_State();

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                        // to manage the event clw_fail_catch
                        virtual void clw_fail_catch(MAE_PICKY & stm);

                        // to manage the event clw_stocked
                        virtual void clw_stocked(MAE_PICKY & stm);

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                    };
                    
                    virtual ~Collecte_Polychrome_1_State();

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // memorize the instance of the state Preparation Pince, internal
                    Preparation_Pince_State _preparation_pince_state;

                    // memorize the instance of the state BF droite sur le module, internal
                    BF_droite_sur_le_module_State _bf_droite_sur_le_module_state;

                    // memorize the instance of the state Stockage, internal
                    Stockage_State _stockage_state;

                    // memorize the instance of the state replacement Pince, internal
                    replacement_Pince_State _replacement_pince_state;

                    // memorize the instance of the state garde pince, internal
                    garde_pince_State _garde_pince_state;

                    // to manage the exit point 'SORTIE_COLLECTE_POLYCHROME_1', defined because probably shared
                    void _exit3(MAE_PICKY & stm);

                };
                
                // implement the state WAYPOINT INIT
                class WAYPOINT_INIT_State : public AnyState {
                  public:
                    // implement the state CAP TO MISSION
                    class CAP_TO_MISSION_State : public AnyState {
                      public:
                        virtual ~CAP_TO_MISSION_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state CAP MISSION
                    class CAP_MISSION_State : public AnyState {
                      public:
                        virtual ~CAP_MISSION_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state BF DROITE TO MISSION
                    class BF_DROITE_TO_MISSION_State : public AnyState {
                      public:
                        virtual ~BF_DROITE_TO_MISSION_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    virtual ~WAYPOINT_INIT_State();

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                    // memorize the instance of the state CAP TO MISSION, internal
                    CAP_TO_MISSION_State _cap_to_mission_state;

                    // memorize the instance of the state BF DROITE TO MISSION, internal
                    BF_DROITE_TO_MISSION_State _bf_droite_to_mission_state;

                    // memorize the instance of the state CAP MISSION, internal
                    CAP_MISSION_State _cap_mission_state;

                    // to manage the exit point 'SORTIE_WAYPOINT_INIT', defined because probably shared
                    void _exit8(MAE_PICKY & stm);

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

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                };
                
                // implement the state Push Polychrome 3
                class Push_Polychrome_3_State : public AnyState {
                  public:
                    // implement the state BF droite placement
                    class BF_droite_placement_State : public AnyState {
                      public:
                        virtual ~BF_droite_placement_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state Drop
                    class Drop_State : public AnyState {
                      public:
                        virtual ~Drop_State();

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state Avance pour pose
                    class Avance_pour_pose_State : public AnyState {
                      public:
                        virtual ~Avance_pour_pose_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state Positionnement pince pour pose
                    class Positionnement_pince_pour_pose_State : public AnyState {
                      public:
                        virtual ~Positionnement_pince_pour_pose_State();

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state Recul chargement pince
                    class Recul_chargement_pince_State : public AnyState {
                      public:
                        virtual ~Recul_chargement_pince_State();

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state Prise de stock
                    class Prise_de_stock_State : public AnyState {
                      public:
                        // implement the state STO L YAW SLIDE
                        class STO_L_YAW_SLIDE_State : public AnyState {
                          public:
                            virtual ~STO_L_YAW_SLIDE_State();

                            // to manage the event time_out
                            virtual void time_out(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state pipo R
                        class pipo_R_State : public AnyState {
                          public:
                            virtual ~pipo_R_State();

                            virtual bool _completion(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state pipo C
                        class pipo_C_State : public AnyState {
                          public:
                            virtual ~pipo_C_State();

                            virtual bool _completion(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state pipo L
                        class pipo_L_State : public AnyState {
                          public:
                            virtual ~pipo_L_State();

                            virtual bool _completion(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state RECENTRAGE
                        class RECENTRAGE_State : public AnyState {
                          public:
                            virtual ~RECENTRAGE_State();

                            virtual bool _completion(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state STO R PITCH POSE
                        class STO_R_PITCH_POSE_State : public AnyState {
                          public:
                            virtual ~STO_R_PITCH_POSE_State();

                            virtual bool _completion(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // perform the 'exit behavior'
                            void _doexit(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state STO C PITCH POSE
                        class STO_C_PITCH_POSE_State : public AnyState {
                          public:
                            virtual ~STO_C_PITCH_POSE_State();

                            virtual bool _completion(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // perform the 'exit behavior'
                            void _doexit(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state STO R YAW SLIDE
                        class STO_R_YAW_SLIDE_State : public AnyState {
                          public:
                            virtual ~STO_R_YAW_SLIDE_State();

                            // to manage the event time_out
                            virtual void time_out(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state STO C YAW SLIDE
                        class STO_C_YAW_SLIDE_State : public AnyState {
                          public:
                            virtual ~STO_C_YAW_SLIDE_State();

                            // to manage the event time_out
                            virtual void time_out(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state STO R PITCH UP
                        class STO_R_PITCH_UP_State : public AnyState {
                          public:
                            virtual ~STO_R_PITCH_UP_State();

                            // to manage the event clw_fail_catch
                            virtual void clw_fail_catch(MAE_PICKY & stm);

                            // to manage the event time_out
                            virtual void time_out(MAE_PICKY & stm);

                            // to manage the event clw_stocked
                            virtual void clw_stocked(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // perform the 'exit behavior'
                            void _doexit(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state STO C PITCH UP
                        class STO_C_PITCH_UP_State : public AnyState {
                          public:
                            virtual ~STO_C_PITCH_UP_State();

                            // to manage the event clw_fail_catch
                            virtual void clw_fail_catch(MAE_PICKY & stm);

                            virtual bool _completion(MAE_PICKY & stm);

                            // to manage the event clw_stocked
                            virtual void clw_stocked(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // perform the 'exit behavior'
                            void _doexit(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state STO L PITCH POSE
                        class STO_L_PITCH_POSE_State : public AnyState {
                          public:
                            virtual ~STO_L_PITCH_POSE_State();

                            // to manage the event time_out
                            virtual void time_out(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // perform the 'exit behavior'
                            void _doexit(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        // implement the state STO L PITCH UP
                        class STO_L_PITCH_UP_State : public AnyState {
                          public:
                            virtual ~STO_L_PITCH_UP_State();

                            // to manage the event time_out
                            virtual void time_out(MAE_PICKY & stm);

                            // to manage the event clw_stocked
                            virtual void clw_stocked(MAE_PICKY & stm);

                            // to manage the event clw_fail_catch
                            virtual void clw_fail_catch(MAE_PICKY & stm);

                            // to manage the event create
                            virtual void create(MAE_PICKY & stm);

                            // perform the 'entry behavior'
                            void _doentry(MAE_PICKY & stm);

                            // perform the 'exit behavior'
                            void _doexit(MAE_PICKY & stm);

                            // returns the state containing the current
                            virtual AnyState * _upper(MAE_PICKY & stm);

                        };
                        
                        virtual ~Prise_de_stock_State();

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                        // to manage the exit point 'Sortie_Prise_de_stock', defined because probably shared
                        void _exit7(MAE_PICKY & stm);

                        // memorize the instance of the state STO L YAW SLIDE, internal
                        STO_L_YAW_SLIDE_State _sto_l_yaw_slide_state;

                        // memorize the instance of the state STO L PITCH UP, internal
                        STO_L_PITCH_UP_State _sto_l_pitch_up_state;

                        // memorize the instance of the state STO L PITCH POSE, internal
                        STO_L_PITCH_POSE_State _sto_l_pitch_pose_state;

                        // memorize the instance of the state STO C PITCH UP, internal
                        STO_C_PITCH_UP_State _sto_c_pitch_up_state;

                        // memorize the instance of the state STO R PITCH UP, internal
                        STO_R_PITCH_UP_State _sto_r_pitch_up_state;

                        // memorize the instance of the state STO C YAW SLIDE, internal
                        STO_C_YAW_SLIDE_State _sto_c_yaw_slide_state;

                        // memorize the instance of the state STO R YAW SLIDE, internal
                        STO_R_YAW_SLIDE_State _sto_r_yaw_slide_state;

                        // memorize the instance of the state STO C PITCH POSE, internal
                        STO_C_PITCH_POSE_State _sto_c_pitch_pose_state;

                        // memorize the instance of the state STO R PITCH POSE, internal
                        STO_R_PITCH_POSE_State _sto_r_pitch_pose_state;

                        // memorize the instance of the state RECENTRAGE, internal
                        RECENTRAGE_State _recentrage_state;

                        // memorize the instance of the state pipo L, internal
                        pipo_L_State _pipo_l_state;

                        // memorize the instance of the state pipo C, internal
                        pipo_C_State _pipo_c_state;

                        // memorize the instance of the state pipo R, internal
                        pipo_R_State _pipo_r_state;

                    };
                    
                    // implement the state Recule
                    class Recule_State : public AnyState {
                      public:
                        virtual ~Recule_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state replis pince
                    class replis_pince_State : public AnyState {
                      public:
                        virtual ~replis_pince_State();

                        virtual bool _completion(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state BF droite Charge
                    class BF_droite_Charge_State : public AnyState {
                      public:
                        virtual ~BF_droite_Charge_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                    };
                    
                    // implement the state Preparation du belier
                    class Preparation_du_belier_State : public AnyState {
                      public:
                        virtual ~Preparation_du_belier_State();

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    virtual ~Push_Polychrome_3_State();

                    // memorize the instance of the state BF droite placement, internal
                    BF_droite_placement_State _bf_droite_placement_state;

                    // memorize the instance of the state Preparation du belier, internal
                    Preparation_du_belier_State _preparation_du_belier_state;

                    // memorize the instance of the state BF droite Charge, internal
                    BF_droite_Charge_State _bf_droite_charge_state;

                    // memorize the instance of the state replis pince, internal
                    replis_pince_State _replis_pince_state;

                    // memorize the instance of the state Recule, internal
                    Recule_State _recule_state;

                    // memorize the instance of the state Prise de stock, internal
                    Prise_de_stock_State _prise_de_stock_state;

                    // memorize the instance of the state Recul chargement pince, internal
                    Recul_chargement_pince_State _recul_chargement_pince_state;

                    // memorize the instance of the state Positionnement pince pour pose, internal
                    Positionnement_pince_pour_pose_State _positionnement_pince_pour_pose_state;

                    // memorize the instance of the state Avance pour pose, internal
                    Avance_pour_pose_State _avance_pour_pose_state;

                    // memorize the instance of the state Drop, internal
                    Drop_State _drop_state;

                    virtual bool _completion(MAE_PICKY & stm);

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // to manage the exit point 'Sortie_Push_Polychrome_3', defined because probably shared
                    void _exit6(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // perform the 'exit behavior'
                    void _doexit(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                };
                
                // implement the state Collecte Poychrome 2
                class Collecte_Poychrome_2_State : public AnyState {
                  public:
                    // implement the state Preparation Pince
                    class Preparation_Pince_State : public AnyState {
                      public:
                        virtual ~Preparation_Pince_State();

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state recule
                    class recule_State : public AnyState {
                      public:
                        virtual ~recule_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state garde pince
                    class garde_pince_State : public AnyState {
                      public:
                        virtual ~garde_pince_State();

                        virtual bool _completion(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state replacement de pince
                    class replacement_de_pince_State : public AnyState {
                      public:
                        virtual ~replacement_de_pince_State();

                        virtual bool _completion(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state BF droite sur le module
                    class BF_droite_sur_le_module_State : public AnyState {
                      public:
                        virtual ~BF_droite_sur_le_module_State();

                        // to manage the event clw_fail_catch
                        virtual void clw_fail_catch(MAE_PICKY & stm);

                        // to manage the event time_out
                        virtual void time_out(MAE_PICKY & stm);

                        // to manage the event clw_stocked
                        virtual void clw_stocked(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    // implement the state BF droite de preparation
                    class BF_droite_de_preparation_State : public AnyState {
                      public:
                        virtual ~BF_droite_de_preparation_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_PICKY & stm);

                        // to manage the event blocage
                        virtual void blocage(MAE_PICKY & stm);

                        // to manage the event create
                        virtual void create(MAE_PICKY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_PICKY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_PICKY & stm);

                    };
                    
                    virtual ~Collecte_Poychrome_2_State();

                    // to manage the event create
                    virtual void create(MAE_PICKY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_PICKY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_PICKY & stm);

                    // memorize the instance of the state Preparation Pince, internal
                    Preparation_Pince_State _preparation_pince_state;

                    // memorize the instance of the state BF droite de preparation, internal
                    BF_droite_de_preparation_State _bf_droite_de_preparation_state;

                    // memorize the instance of the state BF droite sur le module, internal
                    BF_droite_sur_le_module_State _bf_droite_sur_le_module_state;

                    // memorize the instance of the state replacement de pince, internal
                    replacement_de_pince_State _replacement_de_pince_state;

                    // memorize the instance of the state garde pince, internal
                    garde_pince_State _garde_pince_state;

                    // memorize the instance of the state recule, internal
                    recule_State _recule_state;

                    // to manage the exit point 'Sortie_collecte_polychrome_2', defined because probably shared
                    void _exit5(MAE_PICKY & stm);

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

                // memorize the instance of the state Etat check sortie de mission, internal
                Etat_check_sortie_de_mission_State _etat_check_sortie_de_mission_state;

                // memorize the instance of the state WAYPOINT INIT, internal
                WAYPOINT_INIT_State _waypoint_init_state;

                // perform the 'entry behavior'
                void _doentry(MAE_PICKY & stm);

                // memorize the instance of the state Push Polychrome 3, internal
                Push_Polychrome_3_State _push_polychrome_3_state;

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

            // memorize the instance of the state recall, internal
            recall_State _recall_state;

        };
        
        virtual ~MAE_PICKY_State();

        // memorize the instance of the state INITIALISATION, internal
        INITIALISATION_State _initialisation_state;

        // memorize the instance of the state JEU, internal
        JEU_State _jeu_state;

        // memorize the instance of the state EVITEMENT, internal
        EVITEMENT_State _evitement_state;

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
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Etat_check_sortie_de_mission_State;

  public:
    // the operation you call to signal the event near
    bool near();

  friend class MAE_PICKY_State::EVITEMENT_State::ACTION_TO_DO_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::Collecte_Monochrome_4_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::Collecte_Monochrome_5_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::Sortie_de_Zone_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::PLACEMENT_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::PRISE_AR_FACE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::PRISE_AV_FACE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::RECULE_PINCE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::POSE_SUR_ZONE_DEPART_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::DEGAGEMENT_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::Cap_to_mission_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::Cap_mission_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::WAYPOINT_INIT_State::BF_droite_to_mission_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::PREPARATION_ARM_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::AVANCE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::GOLF_PLAYING_State::PREPARATION_DU_SWING_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::GOLF_PLAYING_State::SHOOT_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::GOLF_PLAYING_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::RECULE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_CRATERE_State::RANGE_ARM_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::Cap_to_mission_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::BF_droite_to_mission_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::WAYPOINT_INIT_State::Cap_mission_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::BF_droite_zone_depart_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Vidange_Stockage_Haut_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Avance_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Preparation_Arm_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Ouverture_pince_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Recule_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DROP_ZONE_DEPART_State::Range_Arm_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::RECENTRAGE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::REPLIS_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::CATCH_AND_THROW_State::ROTATION_AND_SLIDE_VERS_ZONE_DE_POSE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::Cap_to_mission_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::BF_droite_to_mission_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::Cap_mission_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_PUSH_DISTRIBUTEUR_MONOCHROME_State::DEGAGEMENT_State;
    // the operation you call to signal the event clw_stocked
    bool clw_stocked();

    // the operation you call to signal the event clw_fail_catch
    bool clw_fail_catch();

  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::WAYPOINT_INIT_State::CAP_MISSION_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_RESTANT_State::WAYPOINT_INIT_State::CAP_MISSION_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::WAYPOINT_INIT_State::CAP_MISSION_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::PLACEMENT_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::DEBOIT_LE_DISTRIB_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_DISTRIBUTEUR_MONOCHROME_State::SORTIE_DE_ZONE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::WAYPOINT_INIT_State::CAP_MISSION_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::BF_DROITE_TO_MISSION_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::WAYPOINT_INIT_State::CAP_MISSION_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::PLACEMENT_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::ROUTINE_DE_POSE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_DIAGONALE_State::DEGAGEMENT_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::CAP_TO_MISSION_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::CAP_MISSION_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::WAYPOINT_INIT_State::BF_DROITE_MISSION_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::PLACEMENT_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::ROUTINE_DE_POSE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_DEPOT_BASE_VERTICALE_State::DEGAGEMENT_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Preparation_Pince_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::BF_droite_sur_le_module_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_L_Yaw_Slide_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_C_Yaw_Slide_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_R_Yaw_Slide_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_L_Pitch_up_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_Pitch_down_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_L_stocked_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Recentrage_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_C_Pitch_up_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_R_Pitch_up_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_C_stocked_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::Stock_R_stocked_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::replacement_Pince_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::garde_pince_State;
    // the operation you call to signal the event sto_l_stocked
    bool sto_l_stocked();

    // the operation you call to signal the event sto_l_fail
    bool sto_l_fail();

  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::pipo_L_State;
    // the operation you call to signal the event sto_c_stocked
    bool sto_c_stocked();

    // the operation you call to signal the event sto_c_fail
    bool sto_c_fail();

  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::pipo_C_State;
    // the operation you call to signal the event sto_r_stocked
    bool sto_r_stocked();

    // the operation you call to signal the event sto_r_fail
    bool sto_r_fail();

  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Polychrome_1_State::Stockage_State::pipo_R_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::Preparation_Pince_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::BF_droite_de_preparation_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::BF_droite_sur_le_module_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::replacement_de_pince_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::garde_pince_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Collecte_Poychrome_2_State::recule_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::BF_droite_placement_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Preparation_du_belier_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::BF_droite_Charge_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::replis_pince_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Recule_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Recul_chargement_pince_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Positionnement_pince_pour_pose_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Avance_pour_pose_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Drop_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_YAW_SLIDE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_PITCH_UP_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_L_PITCH_POSE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_PITCH_UP_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_PITCH_UP_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_YAW_SLIDE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_YAW_SLIDE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_C_PITCH_POSE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::STO_R_PITCH_POSE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::RECENTRAGE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::pipo_L_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::pipo_C_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_COLLECTE_MODULE_CENTRAUX_INITIALE_State::Push_Polychrome_3_State::Prise_de_stock_State::pipo_R_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::REPLIS_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PRISE_AR_DIAGONAL_SIDE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PRISE_AV_DIAGONAL_SIDE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::DEGAGEMENT_PRISE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::ROTATION_DECALAGE_CENTRAL_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::PITCH_UP_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::COUP_DE_PLACEMENT_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::DROP_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::RETOUR_CENTRE_FOLDED_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::APPROCHE_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::CATCH_AND_PLACE_State::DEGAGEMENT_DROP_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::REPLIS_ARM_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::PREPARATION_ARM_State;
  friend class MAE_PICKY_State::JEU_State::MISSION_TRANSFERT_DIRECT_DISTRIBUTEUR_POLYCHROME_State::DEGAGEMENT_State;
    // the operation you call to signal the event recall
    bool recall();

  friend class MAE_PICKY_State::JEU_State::recall_State;
};
// change the current state, internal
inline void MAE_PICKY::_set_currentState(MAE_PICKY::AnyState & st) {
    _current_state = &st;
}

#endif
