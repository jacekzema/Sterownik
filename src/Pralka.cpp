#include "Pralka.h"

Pralka::Pralka(string &nazwa)
{
        czy_wlaczone=0;
        name = &nazwa;
    //ctor
}

Pralka::~Pralka()
{
    cout<<"Usunieto Pralke w: "<<*name<<endl;

}

void Pralka::pokaz_parametry()
{
}

void Pralka::pokaz_mnie()
{
    if (czy_wlaczone==1)
    {
        cout<<"Pralka w "<<*name<<" (ON)"<<endl;
    }
    else
    {
         cout<<"Pralka w "<<*name<<" (OFF)"<<endl;
    }
}
void Pralka::ustaw_program()
{
        if (czy_wlaczone==0)
    {
        cout<<"Musisz wlaczyc pralke aby ustawic program!"<<endl;

    }
    else
    {
    system("cls");
    cout << "---------------------------------------------------------" << endl;
    cout<<"Wprowadz program od 1 do 5"<<endl;
    cout<<"1.Szybkie"<<endl;
    cout<<"2.Pranie w 30 stopniach"<<endl;
    cout<<"3.Pranie w 40 stopniach"<<endl;
    cout<<"4.Pranie w 60 stopniach"<<endl;
    cout<<"5.Pranie reczne"<<endl;
    cout << "---------------------------------------------------------" << endl;

    int x;
    cin >> x;
    if(x ==1)
    {
        cout<<"Wlaczono program nr 1"<<" w:"<<*name<<endl;
    }
    else if(x ==2)
    {
        cout<<"Wlaczono program nr 2"<<" w:"<<*name<<endl;
    }
    else if(x ==3)
    {
        cout<<"Wlaczono program nr 3"<<" w:"<<*name<<endl;
    }
    else if(x ==4)
    {
        cout<<"Wlaczono program nr 4"<<" w:"<<*name<<endl;
    }
    else if(x ==5)
    {
        cout<<"Wlaczono program nr 5"<<" w:"<<*name<<endl;
    }
    else
    {

        cout<<"Cos poszlo nie tak, spobuj jeszcze raz!"<<endl;
        cout<<"Nacisnij dowolny klawisz by kontynuowac"<<endl;
        _getch();
        ustaw_program();
    }
    }


}
void Pralka::on()
{
    if (czy_wlaczone==0)
    {
        czy_wlaczone=1;
        cout<<"Wlaczono pralke"<<endl;
        ustaw_program();

    }
    else
    {
        cout<<"Pralka juz jest wlaczona"<<endl;
    }


}
void Pralka::off()
{
    if (czy_wlaczone==1)
    {
        czy_wlaczone=0;
        cout<<"Wylaczono pralke: "<< *name<<endl;
    }
    else
    {
        cout<<"Pralka juz jest wylaczona: "<<*name<<endl;
    }
    /*
    cout<<"Czy chcesz cos zrobic z klimatyzacja?"<<endl;
    cout << "---------------------------------------------------------" << endl;
    cout<<"Wcisnij 1. jesli TAK"<<endl;
    cout<<"W przeciwnym wypadku, wcisnij dowolny klawisz"<<endl;
    cout << "---------------------------------------------------------" << endl;
    char s;
    s = _getch();
    	switch (s)
	{
        case '1':
		system("cls");
        moje_komendy();
		break;

	default:
		system("cls");
        return;
		break;
	}
	*/

}

void Pralka::moje_komendy()
{
    system("cls");
    char s;
    cout << "---------------------------------------------------------" << endl;
    cout<<"Co chcesz zrobiæ z klimatyzacja w: "<<*name<<endl;
    cout << "1. Wlacz" << endl;
	cout << "2. Wylacz " << endl;
	cout << "3. Ustaw program" << endl;
	cout << "4. Powrot do menu glownego" << endl;
    cout << "---------------------------------------------------------" << endl;
    s = _getch();
	switch (s)
	{
	case '1':
		system("cls");
		on();
		break;

	case '2':
		system("cls");
        off();
		break;
    case '3':
		system("cls");
		ustaw_program();
		break;
    case '4':
		system("cls");
        return;
		break;

	default:
		system("cls");
		cout << "Wybrano nieznana komende, wybierz jeszcze raz" << endl;
		moje_komendy();
		break;
	}


}
