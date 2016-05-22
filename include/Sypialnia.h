#ifndef SYPIALNIA_H
#define SYPIALNIA_H

#include <Pomieszczenie.h>


class Sypialnia : public Pomieszczenie
{
    public:
        Sypialnia(string n="n", float t=20, float c=1013 , float w=1);
        virtual ~Sypialnia();
        void przedstaw_sie();

    protected:

    private:
};

#endif // SYPIALNIA_H
