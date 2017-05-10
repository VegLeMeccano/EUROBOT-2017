#ifndef CRATERE_H
#define CRATERE_H


class Cratere
{
    public:
        Cratere(int nb_sphere_);
        void vidange();
        bool is_empty();
        int get_nb_sphere();


    protected:
    private:
        int nb_sphere;
        bool transfert_marked;
};

#endif // CRATERE_H
