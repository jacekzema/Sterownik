#ifndef CZUJNIK_H
#define CZUJNIK_H

#include <Obiekt.h>
#include <vector>
#include <conio.h>
#include <stdlib.h>


class Czujnik : public Obiekt

{
    public:
        Czujnik(string &nazwa,float &temp,float &cisn, float &wilg);
        virtual ~Czujnik();
        void pokaz_parametry();
        void pokaz_mnie();
        void on();
        void off();
        void moje_komendy();


    protected:

    private:
        float *temperatura;
        float *cisnienie;
        float *wilgotnosc;
        string *name;
};

#endif // CZUJNIK_H
