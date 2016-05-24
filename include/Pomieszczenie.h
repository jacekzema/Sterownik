#include <iostream>
#include "Kuchnia.h"
#include "Pokoj.h"
#include "Lazienka.h"
#include "Sypialnia.h"
#include "Pralka.h"
#include "Telewizor.h"

#include "Obiekt.h"
#include <vector>
#include <conio.h>
#include <stdlib.h>


using namespace std;
#ifndef POMIESZCZENIE_H
#define POMIESZCZENIE_H


class Pomieszczenie
{
    protected:
        string name;
        float temperatura;
        float cisnienie;
        float wilgotnosc;

    public:
        Pomieszczenie();
        virtual ~Pomieszczenie();
        virtual void przedstaw_sie()=0;
        vector <Obiekt*> obiekty;
        friend void ustaw_temperure(float temperatura);
        void dodaj_przedmiot();



    private:
};

#endif // POMIESZCZENIE_H
