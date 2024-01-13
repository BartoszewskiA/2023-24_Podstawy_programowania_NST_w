#include <iostream>
#include <string>

using namespace std;

struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
} baza[100];

// osoba baza[100];

int main()
{
    string temp;
    for (int i = 0; i < 4; i++)
    {
        cout << "Podaj imie: ";
        getline(cin, baza[i].imie);
        cout << "podaj nazwisko: ";
        getline(cin, baza[i].nazwisko);
        cout << "Podaj wiek: ";
        getline(cin, temp);
        baza[i].wiek = stoi(temp);
    }
    for (int i = 0; i < 4; i++)
        cout << "Imie: " << baza[i].imie << endl
             << "Nazwisko: " << baza[i].nazwisko << endl
             << "Wiek: " << baza[i].wiek << endl;

    return 0;
}