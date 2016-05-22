#include <iostream>
#include <conio.h>
#include <vector>
#include <stdlib.h>
#include "Pomieszczenie.h"
using namespace std;
#ifndef INTERFEJS_H
#define INTERFEJS_H



class Interfejs
{
    public:
        Interfejs();
        virtual ~Interfejs();
        void co_chcesz_zrobic();
        void dodaj_pomieszczenie();
        void dodaj_obiekt();
        void pokaz_pomieszczenia();
        void pokaz_obiekty_w_pomieszczeniach();

    protected:
        vector <Pomieszczenie*> pomieszczenia;

    private:
};

#endif // INTERFEJS_H
