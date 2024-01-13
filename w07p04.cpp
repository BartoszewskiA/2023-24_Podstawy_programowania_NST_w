#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct osoba
{
    int id; // 101, 102, 103 ....
    string imie;
    string nazwisko;
    int wiek;
} baza[100];

int n = 0;

void dodaj();
void wypisz(int poz);
void wypisz_wszystkich();
void zapisz_do_pliku();
void odczyt_z_pliku();

int main()
{
    system("cls");
    int w;
    string temp;
    while (1)
    {
        cout << "1 - dodaj osobe" << endl
             << "5 - wypisz cala baze" << endl
             << "6 - eksportuj do pliku" << endl
             << "7 - import z pliku" << endl
             << "9 - koniec programu" << endl;
        cout << "Wybierz akcje: ";
        getline(cin, temp);
        w = stoi(temp);
        switch (w)
        {
        case 1:
            dodaj();
            break;
        case 5:
            wypisz_wszystkich();
            break;
        case 6:
            zapisz_do_pliku();
            break;
        case 7:
            odczyt_z_pliku();
            break;
        case 9:
            return 0;
        }
    }

    return 0;
}

void dodaj()
{
    string temp;
    baza[n].id = 101 + n; // 101, 102, 103 ....
    cout << "Podaj imie: ";
    getline(cin, baza[n].imie);
    cout << "podaj nazwisko: ";
    getline(cin, baza[n].nazwisko);
    cout << "Podaj wiek: ";
    getline(cin, temp);
    baza[n].wiek = stoi(temp);
    n++;
}

void wypisz(int poz)
{
    cout << "--------------------------------------------------------" << endl;
    cout << "ID: " << baza[poz].id << endl
         << "Imie: " << baza[poz].imie << endl
         << "Nazwisko: " << baza[poz].nazwisko << endl
         << "Wiek: " << baza[poz].wiek << endl;
    cout << "--------------------------------------------------------" << endl;
}

void wypisz_wszystkich()
{
    for (int i = 0; i < n; i++)
        wypisz(i);
}

void zapisz_do_pliku()
{
    fstream plik;
    string nazwa;
    cout << "Podaj nazwe pliku: ";
    getline(cin, nazwa);
    plik.open(nazwa, ios::out);
    if (!plik.good())
    {
        cout << "Blad zapisu";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        plik << baza[i].id << endl
             << baza[i].imie << endl
             << baza[i].nazwisko << endl
             << baza[i].wiek << endl;
    }
    plik.close();
}

void odczyt_z_pliku()
{
    fstream plik;
    string nazwa;
    cout << "Podaj nazwe pliku: ";
    getline(cin, nazwa);
    plik.open(nazwa, ios::in);
    if (!plik.good())
    {
        cout << "Nie ma takiego pliku" << endl;
        return;
    }
    n = 0; //import kasuje baze z pamieci
    int id, w;
    string temp, im, nazw;
    while (!plik.eof())
    {
        getline(plik, temp);
        if (temp.length() == 0)
            break;
        id = stoi(temp);
        baza[n].id = id;
        getline(plik, im);
        baza[n].imie = im;
        getline(plik, nazw);
        baza[n].nazwisko = nazw;
        getline(plik, temp);
        w = stoi(temp);
        baza[n].wiek = w;
        n++;
    }

    plik.close();
}