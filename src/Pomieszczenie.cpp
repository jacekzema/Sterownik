#include "Pomieszczenie.h"

Pomieszczenie::Pomieszczenie()
{
    //ctor
}

Pomieszczenie::~Pomieszczenie()
{
    //dtor
}

void Pomieszczenie::dodaj_przedmiot()
{
    char s;
    cout << "---------------------------------------------------------" << endl;
    cout<<"Co chcesz dodac do: "<<name<<endl;
    cout << "1. Dodaj Czujnik" << endl;
	cout << "2. Dodaj Klimatyzacje " << endl;
	//cout << "3. Pokaz informacje(temperature,cisnienie,wilgotnosc)" << endl;
	//cout << "4. Sprawdz obiekty w pomieszczeniach" << endl;
    //cout << "5. Wylacz wszystkie urzadzenia!" << endl;
    cout << "---------------------------------------------------------" << endl;
    s = _getch();
	switch (s)
	{
	case '1':
		system("cls");
        obiekty.push_back(new Czujnik(name,temperatura,cisnienie,wilgotnosc));
        cout<<"Dodano nowy czujnik w: "<<name<<endl;
		break;

	case '2':
		system("cls");
        obiekty.push_back(new Klimatyzacja(name,temperatura));
        cout<<"Dodano nowa klimatyzacje w: "<<name<<endl;
		break;


	default:
		system("cls");
		cout << "Wybrano nieznana komende, wybierz jeszcze raz" << endl;
		dodaj_przedmiot();
		break;
	}

	return;


}
