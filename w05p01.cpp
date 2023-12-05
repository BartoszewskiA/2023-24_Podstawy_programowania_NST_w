#include <iostream>
#include <string>

using namespace std;

int main()
{
    string imie, nazwisko;
    cout << "Imie: ";
    //cin >> imie;
    getline(cin,imie);
    cout << "Nazwisko: ";
    //cin >> nazwisko;
    getline(cin, nazwisko);
    cout << "Witaj " << imie << " " << nazwisko;

    return 0;
}