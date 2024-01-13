#include <iostream>
#include <string>

using namespace std;

int main()
{
    struct osoba
    {
        string imie;
        string nazwisko;
        int wiek;
    };
    osoba ktos = {"Jan", "Kowalski", 30};
    string temp;
    cout << "Podaj imie: ";
    // cin >> ktos.imie;
    getline(cin, ktos.imie);
    cout << "podaj nazwisko: ";
    // cin >> ktos.nazwisko;
    getline(cin, ktos.nazwisko);
    cout << "Podaj wiek: ";
    // cin >> ktos.wiek;
    getline(cin, temp);
    ktos.wiek = stoi(temp);

    cout << ktos.imie << " " << ktos.nazwisko << " " << ktos.wiek;
    return 0;
}