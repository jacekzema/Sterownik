#include "Kuchnia.h"

Kuchnia::Kuchnia(string n, float t, float c, float w)
{
    cout << "Podaj nazwe kuchni: " << endl;
	cin >> n;
	name = n;
	temperatura = t;
	cisnienie = c;
	wilgotnosc = w;

	cout << "Stworzono kuchnie: " << name << endl;
	obiekty.push_back(new Czujnik(name,temperatura,cisnienie,wilgotnosc));
	//Czujnik *czujnik = new Czujnik(name,temperatura,cisnienie,wilgotnosc);
	//obiekty.at(0)->pokaz_parametry();
	//temperatura = 15;
	//obiekty.at(0)->pokaz_parametry();
	return;
    //ctor
}

Kuchnia::~Kuchnia()
{
    //dtor
}

void Kuchnia::przedstaw_sie()
{
    cout<<"Kuchnia o nazwie: "<<name<<endl;
}
