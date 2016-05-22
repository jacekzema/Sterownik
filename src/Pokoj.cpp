#include "Pokoj.h"

Pokoj::Pokoj(string n, float t, float c, float w)
{
     cout << "Podaj nazwe pokoju: " << endl;
	cin >> n;
	name = n;
	temperatura = t;
	cisnienie = c;
	wilgotnosc = w;
	cout << "Stworzono pokoj: " << name << endl;

    obiekty.push_back(new Czujnik(name,temperatura,cisnienie,wilgotnosc));
	//Czujnik *czujnik = new Czujnik(name,temperatura,cisnienie,wilgotnosc);
	obiekty.at(0)->pokaz_parametry();
	temperatura = 15;
	obiekty.at(0)->pokaz_parametry();
	return;
    //ctor
}

Pokoj::~Pokoj()
{
    //dtor
}

void Pokoj::przedstaw_sie()
{
    cout<<"Pokoj o nazwie: "<<name<<endl;
}

