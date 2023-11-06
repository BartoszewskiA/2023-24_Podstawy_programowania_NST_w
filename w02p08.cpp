#include <iostream>

using namespace std;

int main()
{
    int ile;
    cout << "Ile razy wypisac? ";
    cin >> ile;
    int i = 0;
    while (i < ile)
    {
        cout << i << ": Naucze sie c++" << endl;
        i++;
    }
    return 0;
}