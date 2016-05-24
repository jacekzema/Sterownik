#ifndef PRALKA_H
#define PRALKA_H

#include <Obiekt.h>


class Pralka : public Obiekt
{
    public:
        Pralka(string &nazwa);
        virtual ~Pralka();
        void pokaz_parametry();
        void pokaz_mnie();
        void ustaw_program();
        void on();
        void off();
        void moje_komendy();

    protected:

    private:
        string *name;
};

#endif // PRALKA_H
