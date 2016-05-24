#ifndef TELEWIZOR_H
#define TELEWIZOR_H

#include <Obiekt.h>


class Telewizor : public Obiekt
{
    public:
        Telewizor(string &nazwa);
        virtual ~Telewizor();
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

#endif // TELEWIZOR_H
