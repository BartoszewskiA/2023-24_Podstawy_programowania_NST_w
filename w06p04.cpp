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
        while (!plik.eof())
        {
            getline(plik, s);
            if(s.length()>0)
                cout << s << endl;
        }
        plik.close();
    }
    else
    {
        cout << "brak pliku";
    }
    return 0;
}