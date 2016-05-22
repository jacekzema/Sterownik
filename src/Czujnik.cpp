#include "Czujnik.h"

Czujnik::Czujnik(string &nazwa, float &temp, float &cisn, float &wilg)
{
    temperatura = &temp;
    cisnienie = &cisn;
    wilgotnosc = &wilg;
    name = &nazwa;
    //cout <<nazwa<<" T: "<< temp <<" C: "<<cisn<<" Wilg: "<<wilg <<endl;
    //ctor
}

Czujnik::~Czujnik()
{
    //dtor
}

void Czujnik::on()
{
     if (czy_wlaczone==0)
    {
        czy_wlaczone=1;
        cout<<"Wlaczono czujnik"<<endl;
    }
    else
    {
        cout<<"Czujnik juz jest wlaczony"<<endl;
    }

}

void Czujnik::off()
{
         if (czy_wlaczone==1)
    {
        czy_wlaczone=0;
        cout<<"Wylaczono czujnik: "<<endl;
    }
    else
    {
        cout<<"Czujnik juz jest wlaczony"<<endl;
    }


}

void Czujnik::pokaz_parametry()
{
    cout<< *name <<": "<< " Temperatura: "<<*temperatura << ", Cisnienie: "<<*cisnienie << ", Wilgotnosc: "<<*wilgotnosc <<  endl;
    //if (czy_wlaczone==1)
    //{
    //    cout<<"W "<<name<<" temperatura wynosi: "<<temperatura<<" ,cisnienie: "<<cisnienie<<" oraz wilgotnosc: "<<wilgotnosc<<endl;
    //}
    //else
    //{
    //    cout<<"Czujnik "<<name<<" jest wylaczony"<<endl;
    //}
}

void Czujnik::pokaz_mnie()
{
    cout<<"Czujnik"<<endl;
}
