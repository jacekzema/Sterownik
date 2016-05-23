#include "Klimatyzacja.h"

Klimatyzacja::Klimatyzacja(string &nazwa,float &temp)
{
    czy_wlaczone=0;
    temperatura = &temp;
    name = &nazwa;
    //ctor

}

Klimatyzacja::~Klimatyzacja()
{
    //dtor
}

void Klimatyzacja::pokaz_parametry()
{
}

void Klimatyzacja::pokaz_mnie()
{
    if (czy_wlaczone==1)
    {
        cout<<"Klima w "<<*name<<" (ON)"<<endl;
    }
    else
    {
         cout<<"Klima w "<<*name<<" (OFF)"<<endl;
    }
}
void Klimatyzacja::ustaw_temperure()
{
        if (czy_wlaczone==0)
    {
        cout<<"Musisz wlaczyc klime!"<<endl;

    }
    else
    {
    cout<<"Wprowadz temperature od 0 do 40 stopni"<<endl;
    float x;
    cin >> x;
    if(x >=0 && x <= 40)
    {
        *temperatura = x;
        cout<<"Ustawiono nowe temperature: "<<*temperatura<< " w:"<<*name<<endl;
    }
    else
    {
        cout<<"Cos poszlo nie tak, spobuj jeszcze raz!"<<endl;
        cout<<"Nacisnij dowolny klawisz by kontynuowac"<<endl;
        _getch();
        ustaw_temperure();
    }
    }


}
void Klimatyzacja::on()
{
    if (czy_wlaczone==0)
    {
        czy_wlaczone=1;
        cout<<"Wlaczono klimatyzacje"<<endl;
        ustaw_temperure();

    }
    else
    {
        cout<<"Klimatyzacja juz jest wlaczona"<<endl;
    }


}
void Klimatyzacja::off()
{
    if (czy_wlaczone==1)
    {
        czy_wlaczone=0;
        cout<<"Wylaczono klimatyzacje: "<< *name<<endl;
    }
    else
    {
        cout<<"Klimatyzacja juz jest wylaczona: "<<*name<<endl;
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

void Klimatyzacja::moje_komendy()
{
    system("cls");
    char s;
    cout << "---------------------------------------------------------" << endl;
    cout<<"Co chcesz zrobiæ z klimatyzacja w: "<<*name<<endl;
    cout << "1. Wlacz" << endl;
	cout << "2. Wylacz " << endl;
	cout << "3. Ustaw temperature" << endl;
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
		ustaw_temperure();
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
