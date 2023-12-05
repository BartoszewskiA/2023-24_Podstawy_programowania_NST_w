#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    plik.open("w06p03.log", ios::in);
    if(!plik.good())
    {
        cout<<"blad operacji dyskowych";
        return 0;
    }
    string temp;
    getline(plik,temp);
    int ile = stoi(temp);
    plik.close();
//------------------------------------

    plik.open("w06p03.log", ios::out);
    plik<<++ile;
    plik.close();

    if(ile<5)
        cout <<"Ok";
    else
        cout <<"Kup ewrsje pro za jedyne $999";
    return 0;
}