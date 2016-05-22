#ifndef POKOJ_H
#define POKOJ_H

#include <Pomieszczenie.h>


class Pokoj : public Pomieszczenie
{
    public:
        Pokoj(string n="p", float t=20, float c=1013 , float w=1);
        virtual ~Pokoj();
        void przedstaw_sie();

    protected:

    private:
};

#endif // POKOJ_H
