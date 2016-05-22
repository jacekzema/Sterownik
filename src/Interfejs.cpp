#include "Interfejs.h"

Interfejs::Interfejs()
{
    cout << "Witaj w inteligentnym mieszkaniu" << endl;
	cout << "Aby przejsc dalej, nacisnij dolowny klawisz" << endl;
	_getch();
	system("cls");
	co_chcesz_zrobic();
}

Interfejs::~Interfejs()
{
    //dtor
}

void Interfejs::co_chcesz_zrobic()
{
	char s;
	cout << "Co chcesz zrobic? Nacisnij odpowiedni przycisk" << endl;
	cout << "1. Dodaj pomieszczenie" << endl;
	cout << "2. Dodaj obiekt w pomieszczeniu" << endl;
	cout << "3. Pokaz informacje(temperature,cisnienie,wilgotnosc)" << endl;
	cout << "4. Sprawdz obiekty w pomieszczeniach" << endl;

	s = _getch();

	switch (s)
	{
	case '1':
		system("cls");
		dodaj_pomieszczenie();
		break;

	case '2':
		system("cls");
		dodaj_obiekt();

		break;

	case '3':
		system("cls");
		pokaz_pomieszczenia();
		break;

	case '4':
        system("cls");
	    pokaz_obiekty_w_pomieszczeniach();
		break;

	default:
		system("cls");
		cout << "Wybrano nieznana komende, wybierz jeszcze raz" << endl;
		co_chcesz_zrobic();
		break;
	}

}


void Interfejs::dodaj_pomieszczenie()
{
	char pom;
	cout << "1. Dodaj pokoj" << endl;
	cout << "2. Dodaj sypialnie" << endl;
	cout << "3. Dodaj lazienke" << endl;
	cout << "4. Dodaj kuchnie" << endl;
	cout << "5. Powrot do glownego menu" << endl;
	pom = _getch();

	switch (pom)
	{
	case '1':
		system("cls");
		pomieszczenia.push_back(new Pokoj);
		dodaj_pomieszczenie();
		break;

	case '2':
		system("cls");
		pomieszczenia.push_back(new Sypialnia);
		dodaj_pomieszczenie();
		break;

	case '3':
		system("cls");
		pomieszczenia.push_back(new Lazienka);
		dodaj_pomieszczenie();
		break;

	case '4':
		system("cls");
		pomieszczenia.push_back(new Kuchnia);
		dodaj_pomieszczenie();
		break;

	case '5':
		system("cls");
		co_chcesz_zrobic();
		break;

	default:
		system("cls");
		cout << "Wybrano nieznana komende, wybierz jeszcze raz" << endl;
		dodaj_pomieszczenie();
		break;

	}

}

void Interfejs::dodaj_obiekt()
{
    string znak;
    unsigned int liczba;
    unsigned int i;
    cout <<"Gdzie chcesz dodac obiekt?"<<endl;
    for(i=0;i<pomieszczenia.size();i++)
    {
        cout<<i+1<<".";
        pomieszczenia.at(i) -> przedstaw_sie();
    }

    cout<<i+1<<".";
    cout<<" Wroc do poprzedniego menu"<<endl;
    cin >> znak;
    liczba=atoi(znak.c_str());

    if((liczba-1)== pomieszczenia.size())
    {
        system("cls");
        co_chcesz_zrobic();
    }

    if((liczba-1) >= pomieszczenia.size())
    {
        cerr<<"Nie ma takiego obiektu!"<<endl;
    }

    else
    {
        pomieszczenia.at(liczba-1)->obiekty.at(0)->pokaz_parametry();

    }

    cout<<""<<endl;
    cout << "Aby przejsc dalej, nacisnij dolowny klawisz" << endl;
    _getch();
    system("cls");
    co_chcesz_zrobic();

}

void Interfejs::pokaz_pomieszczenia()
{
    while(pomieszczenia.size()==0)
    {
        cout<<"Nie ma pomieszczen!"<<endl;
        cout<<"Nacisnij klawisz by kontynuowac"<<endl;
        _getch();
        system("cls");
        co_chcesz_zrobic();
    }
     string znak;
     unsigned int liczba;
     unsigned int i;
     cout <<"Z ktorego pomieszczenia pokazac informacje?"<<endl;
     for(i=0;i<pomieszczenia.size();i++)
    {
        cout<<i+1<<".";
        pomieszczenia.at(i) -> przedstaw_sie();
    }
    cout<<i+1<<".";
    cout<<" Wroc do poprzedniego menu"<<endl;

    cin >> znak;
    liczba=atoi(znak.c_str());
    //cout << liczba<<endl;  //pokazuje jaka liczbaa!

    if((liczba-1)== pomieszczenia.size())
    {
        system("cls");
        co_chcesz_zrobic();

    }

    if((liczba-1) >= pomieszczenia.size())
    {
        cerr<<"Nie ma takiego obiektu!"<<endl;

    }



    else
    {
        pomieszczenia.at(liczba-1)->obiekty.at(0)->pokaz_parametry();

    }

    cout<<""<<endl;
    cout << "Aby przejsc dalej, nacisnij dolowny klawisz" << endl;
    _getch();
    system("cls");
    co_chcesz_zrobic();


}

void Interfejs::pokaz_obiekty_w_pomieszczeniach()
{
    string znak;
    unsigned int liczba;
    unsigned int i;
    cout <<"Skad chcesz zobaczyc obiekty?"<<endl;
    for(i=0;i<pomieszczenia.size();i++)
    {
        cout<<i+1<<".";
        pomieszczenia.at(i) -> przedstaw_sie();
    }

    cout<<i+1<<".";
    cout<<" Wroc do poprzedniego menu"<<endl;
    cin >> znak;
    liczba=atoi(znak.c_str());
    cout << liczba<<endl;

    if((liczba-1)== pomieszczenia.size())
    {
        system("cls");
        co_chcesz_zrobic();
    }

    if((liczba-1) >= pomieszczenia.size())
    {
        cerr<<"Nie ma takiego obiektu!"<<endl;
    }

    else
    {
        for(unsigned int x=0;x<pomieszczenia.at(liczba-1)->obiekty.size();x++)
        {
            cout<<x+1<<".";
            pomieszczenia.at(liczba-1)->obiekty.at(x) -> pokaz_mnie();
        }

        //pomieszczenia.at(liczba-1)->obiekty.at(0)->pokaz_parametry();

    }

    cout<<""<<endl;
    cout << "Aby przejsc dalej, nacisnij dolowny klawisz" << endl;
    _getch();
    system("cls");
    co_chcesz_zrobic();

}
