#include "Pomieszczenie.h"

Pomieszczenie::Pomieszczenie()
{
    //ctor
}

Pomieszczenie::~Pomieszczenie()
{
    cout<<"Usunieto pomieszczenie: "<<name<<endl;

}

void Pomieszczenie::dodaj_przedmiot()
{
    char s;
    cout << "---------------------------------------------------------" << endl;
    cout<<"Co chcesz dodac do: "<<name<<endl;
    cout << "1. Dodaj Czujnik" << endl;
	cout << "2. Dodaj Klimatyzacje " << endl;
	cout << "3. Dodaj Pralke" << endl;
	cout << "4. Dodaj Telewizor" << endl;
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

    case '3':
		system("cls");
        obiekty.push_back(new Pralka(name));
        cout<<"Dodano nowa Pralke w: "<<name<<endl;
		break;

    case '4':
		system("cls");
        obiekty.push_back(new Telewizor(name));
        cout<<"Dodano nowy Telewizor w: "<<name<<endl;
		break;


	default:
		system("cls");
		cout << "Wybrano nieznana komende, wybierz jeszcze raz" << endl;
		dodaj_przedmiot();
		break;
	}

	return;


}
