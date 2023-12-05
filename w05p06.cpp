#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Podaj tekst: ";
    getline(cin, s);
    cout << "Ile razy wystepuje znak: ";
    char zn = getchar();
    int ile = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == zn)
            ile++;
    cout << "znak " << zn << " wystapil " << ile << " razy";
    return 0;
}