#include "Interfejs.h"

Interfejs::Interfejs()
{
    cout << "---------------------------------------------------------" << endl;
    cout << "Witaj w sterowniku mieszkania!" << endl;
	cout << "Aby przejsc dalej, nacisnij dolowny klawisz" << endl;
    cout << "---------------------------------------------------------" << endl;
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
    cout << "---------------------------------------------------------" << endl;
	cout << "Co chcesz zrobic? Nacisnij odpowiedni przycisk" << endl;
    cout << "---------------------------------------------------------" << endl;
	cout << "1. Dodaj pomieszczenie" << endl;
	cout << "2. Usun pomieszczenie" << endl;
	cout << "3. Dodaj obiekt w pomieszczeniu" << endl;
	cout << "4. Usun obiekt w pomieszczeniu" << endl;
	cout << "5. Pokaz informacje(temperature,cisnienie,wilgotnosc)" << endl;
	cout << "6. Sprawdz obiekty w pomieszczeniach" << endl;
    cout << "7. Wylacz wszystkie urzadzenia!" << endl;
    cout << "---------------------------------------------------------" << endl;

	s = _getch();

	switch (s)
	{
	case '1':
		system("cls");
		dodaj_pomieszczenie();
		break;

	case '2':
		system("cls");
		usun_pomieszczenie();
		break;

	case '3':
		system("cls");
		dodaj_obiekt();
		break;

	case '4':
        system("cls");
        usun_obiekt();
		break;

	case '5':
        system("cls");
	    pokaz_pomieszczenia();
		break;

    case '6':
        system("cls");
	    pokaz_obiekty_w_pomieszczeniach();
		break;

    case '7':
        system("cls");
	    wylacz_all();
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
    cout << "---------------------------------------------------------" << endl;
	cout << "1. Dodaj pokoj" << endl;
	cout << "2. Dodaj sypialnie" << endl;
	cout << "3. Dodaj lazienke" << endl;
	cout << "4. Dodaj kuchnie" << endl;
	cout << "5. Powrot do glownego menu" << endl;
    cout << "---------------------------------------------------------" << endl;
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
      while(pomieszczenia.size()==0)
    {
        cout<<"Nie ma pomieszczen, wiec gdzie chcesz dodac obiekt?"<<endl;
        cout<<"Nacisnij klawisz by kontynuowac"<<endl;
        _getch();
        system("cls");
        co_chcesz_zrobic();
    }
    string znak;
    unsigned int liczba;
    unsigned int i;
    cout << "---------------------------------------------------------" << endl;
    cout <<"Gdzie chcesz dodac obiekt?"<<endl;
    cout << "---------------------------------------------------------" << endl;
    for(i=0;i<pomieszczenia.size();i++)
    {
        cout<<i+1<<".";
        pomieszczenia.at(i) -> przedstaw_sie();
    }

    cout<<i+1<<".";
    cout<<"Wroc do poprzedniego menu"<<endl;
    cout << "---------------------------------------------------------" << endl;
    cin >> znak;
    cout << "---------------------------------------------------------" << endl;
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
        pomieszczenia.at(liczba-1)->dodaj_przedmiot();

    }
        //lista_obiektow();



       /* for(unsigned int x=0;x<pomieszczenia.at(liczba-1)->obiekty.size();x++)
        {
            cout<<x+1<<".";
          //  pomieszczenia.at(liczba-1)->obiekty.push_back(New)
        }


        //pomieszczenia.at(liczba-1)->obiekty.at(0)->pokaz_parametry();
        */
    //cout<<""<<endl;
    cout << "Aby przejsc dalej, nacisnij dolowny klawisz" << endl;
    _getch();
    system("cls");
    co_chcesz_zrobic();

    }

void Interfejs::usun_obiekt()
{
   while(pomieszczenia.size()==0)
    {
        cout<<"Nie ma pomieszczen, wiec nie ma obiektow!"<<endl;
        cout<<"Nacisnij klawisz by kontynuowac"<<endl;
        _getch();
        system("cls");
        co_chcesz_zrobic();
    }

    string znak;
    unsigned int liczba;
    unsigned int i;
    unsigned int x;
    cout << "---------------------------------------------------------" << endl;
    cout <<"Gdzie chcesz usunac obiekt?"<<endl;
    cout << "---------------------------------------------------------" << endl;

    for(i=0;i<pomieszczenia.size();i++)
    {
        cout<<i+1<<".";
        pomieszczenia.at(i) -> przedstaw_sie();
    }

    cout<<i+1<<".";
    cout<<"Wroc do poprzedniego menu"<<endl;
    cout << "---------------------------------------------------------" << endl;
    cin >> znak;
    cout << "---------------------------------------------------------" << endl;
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

        for(x=0;x<pomieszczenia.at(liczba-1)->obiekty.size();x++)
        {
            cout<<x+1<<".";
            pomieszczenia.at(liczba-1)->obiekty.at(x) -> pokaz_mnie();

        }
    }

     cout << "---------------------------------------------------------" << endl;
        cout<<"Jesli chcesz usunac obiekt, wybierz odpowiedni numer"<<endl;
        cout<<"W przeciwnym wypadku wcisnij: "<< pomieszczenia.at(liczba-1)->obiekty.size()+1 <<endl;
        cout << "---------------------------------------------------------" << endl;

        string znak1;
        unsigned int liczba1;
        cin >> znak1;
        liczba1=atoi(znak1.c_str());

            if((liczba1-1) ==  pomieszczenia.at(liczba-1)->obiekty.size())
            {
                cout<<""<<endl;
                cout << "Aby przejsc dalej, nacisnij dolowny klawisz" << endl;
                _getch();
                system("cls");
                co_chcesz_zrobic();
            }

            if((liczba1-1) >=  pomieszczenia.at(liczba-1)->obiekty.size())
            {
                cerr<<"Nie ma takiego obiektu!"<<endl;
            }

            else
                delete pomieszczenia.at(liczba-1)->obiekty.at(liczba1-1);
                pomieszczenia.at(liczba-1)->obiekty.erase(pomieszczenia.at(liczba-1)->obiekty.begin() + liczba1 -1);


                //vector<Pomieszczenie*>::iterator it=(pomieszczenia.begin()+ liczba - 1);
                //(*it) -> vector<Obiekt*>::iterator bb=obiekty.begin()+liczba1-1 ;      //iterator na trzeci element

                //   (*it)->vector<Obiekt*>::iterator bb=obiekty.begin()+liczba1-1;
                //      pomieszczenia.erase(pomieszczenia.begin()+liczba-1);



                 //pomieszczenia.at(liczba-1)->obiekty.erase(it);
                //pomieszczenia.erase(pomieszczenia.begin()+liczba-1);

               // pomieszczenia.at(liczba-1)->obiekty.at(liczba1-1)->obiekty.erase(obiekty.begin()+liczba-1));


    cout << "---------------------------------------------------------" << endl;
    co_chcesz_zrobic();




        //pomieszczenia.at(liczba-1)->obiekty.at(0)->pokaz_parametry();

    }


void Interfejs::usun_pomieszczenie()
{
     while(pomieszczenia.size()==0)
    {
        cout<<"Nie ma pomieszczen, wiec nie ma co usuwac!"<<endl;
        cout<<"Nacisnij klawisz by kontynuowac"<<endl;
        _getch();
        system("cls");
        co_chcesz_zrobic();
    }

    string znak;
    unsigned int liczba;
    unsigned int i;
    cout << "---------------------------------------------------------" << endl;
    cout <<"Jakie pomieszczenie chcesz usunac?"<<endl;
    cout << "---------------------------------------------------------" << endl;
    for(i=0;i<pomieszczenia.size();i++)
    {
        cout<<i+1<<".";
        pomieszczenia.at(i) -> przedstaw_sie();
    }

    cout<<i+1<<".";
    cout<<"Wroc do poprzedniego menu"<<endl;
    cout << "---------------------------------------------------------" << endl;
    cin >> znak;
    cout << "---------------------------------------------------------" << endl;
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
      delete pomieszczenia.at(liczba-1);
      pomieszczenia.erase(pomieszczenia.begin()+liczba-1);

    }
    co_chcesz_zrobic();
    return;


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
     cout << "---------------------------------------------------------" << endl;
     cout <<"Z ktorego pomieszczenia pokazac informacje?"<<endl;
     cout << "---------------------------------------------------------" << endl;
     for(i=0;i<pomieszczenia.size();i++)
    {
        cout<<i+1<<".";
        pomieszczenia.at(i) -> przedstaw_sie();
    }
    cout<<i+1<<".";
    cout<<"Wroc do poprzedniego menu"<<endl;
    cout << "---------------------------------------------------------" << endl;

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
    while(pomieszczenia.size()==0)
    {
        cout<<"Nie ma pomieszczen, wiec co chcesz zobaczyc?"<<endl;
        cout<<"Nacisnij klawisz by kontynuowac"<<endl;
        _getch();
        system("cls");
        co_chcesz_zrobic();
    }

    cout << "---------------------------------------------------------" << endl;
    cout <<"Skad chcesz zobaczyc obiekty?"<<endl;
    cout << "---------------------------------------------------------" << endl;

    string znak;
    unsigned int liczba;
    unsigned int i;

    for(i=0;i<pomieszczenia.size();i++)
    {
        cout<<i+1<<".";
        pomieszczenia.at(i) -> przedstaw_sie();
    }

    cout<<i+1<<".";
    cout<<"Wroc do poprzedniego menu"<<endl;
    cout << "---------------------------------------------------------" << endl;
    cin >> znak;
    cout << "---------------------------------------------------------" << endl;
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
        unsigned int x;
        for(x=0;x<pomieszczenia.at(liczba-1)->obiekty.size();x++)
        {
            cout<<x+1<<".";
            pomieszczenia.at(liczba-1)->obiekty.at(x) -> pokaz_mnie();

        }

        cout << "---------------------------------------------------------" << endl;
        cout<<"Jesli chcesz zrobic cos na obiekcie, wybierz odpowiedni numer"<<endl;
        cout<<"W przeciwnym wypadku wcisnij: "<< pomieszczenia.at(liczba-1)->obiekty.size()+1 <<endl;
        cout << "---------------------------------------------------------" << endl;

        string znak1;
        unsigned int liczba1;
        cin >> znak1;
        liczba1=atoi(znak1.c_str());

            if((liczba1-1) ==  pomieszczenia.at(liczba-1)->obiekty.size())
            {
                cout<<""<<endl;
                cout << "Aby przejsc dalej, nacisnij dolowny klawisz" << endl;
                _getch();
                system("cls");
                co_chcesz_zrobic();
            }

            if((liczba-1) >=  pomieszczenia.at(liczba-1)->obiekty.size())
            {
                cerr<<"Nie ma takiego obiektu!"<<endl;
            }

            else
            {
                pomieszczenia.at(liczba-1)->obiekty.at(liczba1-1) -> moje_komendy();
            }



    cout << "---------------------------------------------------------" << endl;


        //pomieszczenia.at(liczba-1)->obiekty.at(0)->pokaz_parametry();

    }


    co_chcesz_zrobic();
}

void Interfejs::wylacz_all()
{
    char pom;
    system("cls");
    cout<<"Czy jestes pewnien ze chcesz wszystko wylaczyc?"<<endl;
    cout<<"Jesli tak, wcisnij Y, nacisniecie innego przycisku spowoduje powrot"<<endl;

    pom = _getch();

	switch (pom)
	{
	case 'y':
		system("cls");
		unsigned int i;
		cout << "---------------------------------------------------------" << endl;
        for(i=0;i<pomieszczenia.size();i++)
        {
            for(unsigned int x=0;x<pomieszczenia.at(i)->obiekty.size();x++)
            {
                pomieszczenia.at(i)->obiekty.at(x) -> off();
            }
        }
        cout << "---------------------------------------------------------" << endl;

		break;

    case 'Y':
		system("cls");
		cout << "---------------------------------------------------------" << endl;
        for(i=0;i<pomieszczenia.size();i++)
        {
            for(unsigned int x=0;x<pomieszczenia.at(i)->obiekty.size();x++)
            {
                pomieszczenia.at(i)->obiekty.at(x) -> off();
            }
        }
        cout << "---------------------------------------------------------" << endl;

		break;

    default:
		system("cls");
		co_chcesz_zrobic();
		break;
	}
    cout<<"Nacisnij dowolny klawisz by przejsc dalej"<<endl;
	_getch();
    system("cls");
    co_chcesz_zrobic();

}


