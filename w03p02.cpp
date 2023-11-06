#include <iostream>

using namespace std;

int main()
{

    int tab[100]={0};
    int n;
    cout << "Ile elementow? ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "tab[" << i << "]=";
        cin >> tab[i];
    }

    for (int i = 0; i < 100; i++)
        cout << tab[i] << " ";
    cout << endl;
    // for (int i = n-1; i >= 0; i--)
    //     cout << tab[i] << " ";

    return 0;
}