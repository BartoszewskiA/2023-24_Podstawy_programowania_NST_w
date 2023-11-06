#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    if (a > b)
        cout << "Najwieksza wartosc to: " << a;
    else
        cout << "Najwieksza wartosc to: " << b;

    return 0;
}