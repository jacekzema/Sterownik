#ifndef KLIMATYZACJA_H
#define KLIMATYZACJA_H

#include <Obiekt.h>


class Klimatyzacja : public Obiekt
{
    public:
        Klimatyzacja(string &nazwa,float &temp);
        virtual ~Klimatyzacja();
        void pokaz_parametry();
        void pokaz_mnie();
        void ustaw_temperure();
        void on();
        void off();
        void moje_komendy();


    protected:

    private:
        string *name;
        float *temperatura;
};

#endif // KLIMATYZACJA_H
