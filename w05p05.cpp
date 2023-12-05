#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Podaj tekst: ";
    getline(cin, s);
    cout << "Czy wystepuje znak: ";
    char zn = getchar();
    int poz = s.find(zn);
    if (poz >= 0)
        cout << "Znak wystapil na pozycji: " << poz;
    else
        cout << "Znak nie wystapil";

    return 0;
}