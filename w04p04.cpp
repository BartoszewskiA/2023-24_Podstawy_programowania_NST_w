#include <iostream>

using namespace std;

void zwieksz(int &x);
int zwieksz_v2(int x);
int main()
{
    int liczba = 1;
    // zwieksz(liczba);
    liczba = zwieksz_v2(liczba);
    cout << "x(na zewnatrz)=" << liczba << endl;
    return 0;
}

void zwieksz(int &x)
{
    x = x + 10;
    cout << "x(wewnatrz)=" << x << endl;
}

int zwieksz_v2(int x)
{
    x += 10; // x=x+10;
    return x;
}