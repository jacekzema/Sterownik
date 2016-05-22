#ifndef KUCHNIA_H
#define KUCHNIA_H

#include <Pomieszczenie.h>


class Kuchnia : public Pomieszczenie
{
    public:
        Kuchnia(string n="k", float t=20, float c=1013 , float w=1);
        virtual ~Kuchnia();
        void przedstaw_sie();

    protected:

    private:
};

#endif // KUCHNIA_H
