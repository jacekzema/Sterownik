#include "Czujnik.h"
#include "Klimatyzacja.h"
#include <vector>

#ifndef OBIEKT_H
#define OBIEKT_H

#include <iostream>
using namespace std;


class Obiekt
{
    public:
        Obiekt();
        virtual ~Obiekt();
        virtual void pokaz_parametry()=0;
        virtual void pokaz_mnie()=0;
        virtual void moje_komendy()=0;  //do zrobienia
        virtual void on()=0;
        virtual void off()=0;





    protected:
        bool czy_wlaczone;

    private:

};

#endif // OBIEKT_H
