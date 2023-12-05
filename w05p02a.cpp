#include <iostream>
#include <string>

using namespace std;

int main()
{
    string imie, nazwisko, temp;
    int wiek;
    cout << "Wiek: ";
    getline(cin, temp);
    // wiek = atoi(temp.c_str());
    wiek = stoi(temp);
    cout << "Imie: ";
    getline(cin, imie);
    cout << "Nazwisko: ";
    getline(cin, nazwisko);
    cout << "Witaj " << imie << " " << nazwisko << " " << wiek;

    return 0;
}