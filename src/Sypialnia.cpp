#include "Sypialnia.h"

Sypialnia::Sypialnia(string n, float t, float c, float w)
{
     cout << "Podaj nazwe sypialni: " << endl;
	cin >> n;
	name = n;
	temperatura = t;
	cisnienie = c;
	wilgotnosc = w;
	cout << "Stworzono sypialnie: " << name << endl;

    obiekty.push_back(new Czujnik(name,temperatura,cisnienie,wilgotnosc));
	//Czujnik *czujnik = new Czujnik(name,temperatura,cisnienie,wilgotnosc);
	//obiekty.at(0)->pokaz_parametry();
	//temperatura = 15;
	//obiekty.at(0)->pokaz_parametry();
	return;
    //ctor
}

Sypialnia::~Sypialnia()
{
    //dtor
}

void Sypialnia::przedstaw_sie()
{
    cout<<"Sypialnia o nazwie: "<<name<<endl;
}
