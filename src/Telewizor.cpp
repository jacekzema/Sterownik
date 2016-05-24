#include "Telewizor.h"

Telewizor::Telewizor(string &nazwa)
{
    czy_wlaczone=0;
    name = &nazwa;
    //ctor
}

Telewizor::~Telewizor()
{
    cout<<"Usunieto telewizor w: "<<*name<<endl;
    //dtor
}

void Telewizor::pokaz_parametry()
{
}

void Telewizor::pokaz_mnie()
{
    if (czy_wlaczone==1)
    {
        cout<<"Telewizor w "<<*name<<" (ON)"<<endl;
    }
    else
    {
         cout<<"Telewizor w "<<*name<<" (OFF)"<<endl;
    }
}
void Telewizor::ustaw_program()
{
        if (czy_wlaczone==0)
    {
        cout<<"Musisz wlaczyc telewizor aby ustawic kanal!"<<endl;

    }
    else
    {
    system("cls");
    cout << "---------------------------------------------------------" << endl;
    cout<<"Wprowadz program od 0 do 999"<<endl;
    cout << "---------------------------------------------------------" << endl;

    int x;
    cin >> x;
    if(x >= 0 || x<= 999)
    {
        cout<<"Wlaczono program nr: "<<x<<" w:"<<*name<<endl;
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
void Telewizor::on()
{
    if (czy_wlaczone==0)
    {
        czy_wlaczone=1;
        cout<<"Wlaczono telewizor"<<endl;
        ustaw_program();

    }
    else
    {
        cout<<"Telewizor juz jest wlaczona"<<endl;
    }


}
void Telewizor::off()
{
    if (czy_wlaczone==1)
    {
        czy_wlaczone=0;
        cout<<"Wylaczono Telewizor: "<< *name<<endl;
    }
    else
    {
        cout<<"Telewizor juz jest wylaczona: "<<*name<<endl;
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

void Telewizor::moje_komendy()
{
    system("cls");
    char s;
    cout << "---------------------------------------------------------" << endl;
    cout<<"Co chcesz zrobic z Telewizorem w: "<<*name<<endl;
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
