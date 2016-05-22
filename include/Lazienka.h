#ifndef LAZIENKA_H
#define LAZIENKA_H

#include <Pomieszczenie.h>


class Lazienka : public Pomieszczenie
{
    public:
        Lazienka(string n="lazienka", float t=20, float c=1013 , float w=1);
        virtual ~Lazienka();
        void przedstaw_sie();

    protected:

    private:
};

#endif // LAZIENKA_H
