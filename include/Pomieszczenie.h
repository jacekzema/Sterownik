#include <iostream>
#include "Kuchnia.h"
#include "Pokoj.h"
#include "Lazienka.h"
#include "Sypialnia.h"


#include <vector>


using namespace std;
#ifndef POMIESZCZENIE_H
#define POMIESZCZENIE_H
#include "Obiekt.h"

class Pomieszczenie
{
    public:
        Pomieszczenie();
        virtual ~Pomieszczenie();
        virtual void przedstaw_sie()=0;
        vector <Obiekt*> obiekty;

    protected:
        string name;
        float temperatura;
        float cisnienie;
        float wilgotnosc;


    private:
};

#endif // POMIESZCZENIE_H
