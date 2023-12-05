#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    plik.open("dane.log", ios::out);
    plik << "Ala ma kota" << endl;
    plik << "i dwa psy";
    plik.close();
    return 0;
}