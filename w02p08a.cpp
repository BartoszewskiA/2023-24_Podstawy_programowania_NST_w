#include <iostream>

using namespace std;

int main()
{
    int ile;
    cout << "Ile razy wypisac? ";
    cin >> ile;
    int i = 0;
    do
    {
        cout << i << ": Naucze sie c++" << endl;
        i++;
    } while (i < ile);
    return 0;
}