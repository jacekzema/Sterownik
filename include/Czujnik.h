#ifndef CZUJNIK_H
#define CZUJNIK_H

#include <Obiekt.h>


class Czujnik : public Obiekt

{
    public:
        Czujnik(string &nazwa,float &temp,float &cisn, float &wilg);
        virtual ~Czujnik();
        void pokaz_parametry();

        void on();
        void off();

    protected:

    private:
        float *temperatura;
        float *cisnienie;
        float *wilgotnosc;
        string *name;
};

#endif // CZUJNIK_H
