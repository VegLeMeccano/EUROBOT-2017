# Eurobot-2017

TODO
-> shortcut sur desktop pi
-> bash et dosssier PICKY_PI dans PI/documents/

PICKY_ARDUINO
code bas niveau de l'archi du code actionneur Arduino pour la coupe

PICKY_PI
code haut niveau, strat pour la pi

MAE_PICKY
machine a etat haut niveau

convention commune:
 COULEUR_BLEU 0
 COULEUR_JAUNE  1
 
bumper strat
PICKY 
-> COLOR (0 BLUE , 1 YELLOW)
-> STRAT1 (0 left , 1 right)
-> START (1 START_IN , 1 START_OUT)
 

to do
dossier include a mettre dans les includes du compilateur arduino (ici codeblocks) 
procedure de travail pi <-> repository wifi



# ORDRE PICKY

ordre a taper dans le terminal serie

## DEBUG (principalement slave)
------------------------------
 O0 -> reinit compteur odo propu
 O1 -> affiche les tics, et distances parcourues




## SLAVE (base roulante)
------------------------------
 S0 -> set X Y CAP
 S1 -> get X Y CAP
 S2 -> recalage
 S3 -> BF_cap >> angle en absolu degre
 S4 -> BF_avance 
 S5 -> BF_droite
 S6 -> BF_cercle
 S7 -> set speed (0:slow, 1:medium, 2:fast)
 S9 -> stop asserv (moteur)


## EVITEMENT (base roulante)
------------------------------

 E0 -> Desactivation evitement
 E1 -> Activation evitement
 E2 -> Debug sonar


