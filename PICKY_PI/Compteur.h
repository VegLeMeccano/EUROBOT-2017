#ifndef COMPTEUR_H
#define COMPTEUR_H


class Compteur
{
    public:
        Compteur();
		void incremente();
		void reset();
		int get_compte();
        
    protected:
    private:
		int cpt;
};

#endif // COMPTEUR_H
