#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    plik.open("dane.txt", ios::in);
    if (plik.good() == true)
    {
        string s;
        getline(plik, s);
        cout << s;
        plik.close();
    }
    else
    {
        cout << "brak pliku";
    }
    return 0;
}