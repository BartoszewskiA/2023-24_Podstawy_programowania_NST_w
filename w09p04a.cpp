#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int n;
    cout << "ile liczb wylosowac: ";
    cin >> n;
    int *tab = new int[n];

    for (int i = 0; i < n; i++)
        *(tab + i) = rand() % 101;

    int * p =  tab;
    for(int i=0; i<n; i++)
    {
        cout<<*p;
        p++;
    }

    delete[] tab;
    return 0;
}