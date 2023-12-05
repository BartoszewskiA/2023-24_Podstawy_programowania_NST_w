#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Przedstaw sie: ";
    getline(cin, s);
    int poz_sp = s.find(' ');
    string imie = s.substr(0, poz_sp);
    string nazwisko = s.substr(poz_sp + 1, s.length() - poz_sp);
    cout << "[" << imie << "] [" << nazwisko << "]";
    return 0;
}