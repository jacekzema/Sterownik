#include "Lazienka.h"

Lazienka::Lazienka(string n, float t, float c , float w)
{
     cout << "Podaj nazwe lazienki: " << endl;
	cin >> n;
	name = n;
	temperatura = t;
	cisnienie = c;
	wilgotnosc = w;
	cout << "Stworzono lazienke: " << name << endl;

    obiekty.push_back(new Czujnik(name,temperatura,cisnienie,wilgotnosc));
	//Czujnik *czujnik = new Czujnik(name,temperatura,cisnienie,wilgotnosc);
	obiekty.at(0)->pokaz_parametry();
	temperatura = 15;
	obiekty.at(0)->pokaz_parametry();
	return;
    //ctor
}

Lazienka::~Lazienka()
{
    //dtor
}

void Lazienka::przedstaw_sie()
{
    cout<<"Lazienka o nazwie: "<<name<<endl;
}

