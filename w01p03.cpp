#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    double w;
    cout << "x= ";
    cin >> x;
    cout << "y= ";
    cin >> y;
    w = (double)x / y;
    cout << "wynik dzielenia = " << w;
    return 0;
}