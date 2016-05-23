#include "Czujnik.h"

Czujnik::Czujnik(string &nazwa, float &temp, float &cisn, float &wilg)
{
    czy_wlaczone=1;
    temperatura = &temp;
    cisnienie = &cisn;
    wilgotnosc = &wilg;
    name = &nazwa;
    //cout <<nazwa<<" T: "<< temp <<" C: "<<cisn<<" Wilg: "<<wilg <<endl;
    //ctor
}

Czujnik::~Czujnik()
{
    //dtor
}

void Czujnik::on()
{
     if (czy_wlaczone==0)
    {
        czy_wlaczone=1;
        cout<<"Wlaczono czujnik"<<endl;
    }
    else
    {
        cout<<"Czujnik juz jest wlaczony"<<endl;
    }

}

void Czujnik::off()
{
         if (czy_wlaczone==1)
    {
        czy_wlaczone=0;
        cout<<"Wylaczono czujnik: "<< *name<<endl;
    }
    else
    {
        cout<<"Czujnik juz jest wylaczony: "<<*name<<endl;
    }


}

void Czujnik::pokaz_parametry()
{

    if (czy_wlaczone==1)
    {
       cout<< *name <<": "<< " Temperatura: "<<*temperatura << ", Cisnienie: "<<*cisnienie << ", Wilgotnosc: "<<*wilgotnosc <<  endl;
    }
    else
    {
        cout<<"Czujnik w: "<<*name<<" jest wylaczony"<<endl;
    }
}

void Czujnik::pokaz_mnie()
{
    if (czy_wlaczone==1)
    {
        cout<<"Czujnik w "<<*name<<" (ON)"<<endl;
    }
    else
    {
         cout<<"Czujnik w "<<*name<<" (OFF)"<<endl;
    }
    /*cout<<"Czy chcesz cos zrobic z czujnikiem?"<<endl;
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

void Czujnik::moje_komendy()
{
    system("cls");
    char s;
    cout << "---------------------------------------------------------" << endl;
    cout<<"Co chcesz zrobiæ z czujnikiem w: "<<*name<<endl;
    cout << "1. Pokaz dane" << endl;
	cout << "2. Wlacz " << endl;
	cout << "3. Wylacz" << endl;
	cout << "4. Powrot do menu glownego" << endl;
    cout << "---------------------------------------------------------" << endl;
    s = _getch();
	switch (s)
	{
	case '1':
		system("cls");
		pokaz_parametry();
		break;

	case '2':
		system("cls");
        on();
		break;
    case '3':
		system("cls");
		off();
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
