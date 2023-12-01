#include <iostream>

using namespace std;

void przedstaw_sie();
int dodaj(int x, int y);
void arg_domyslne(int a, int b, int c=103);

int main()
{
    // przedstaw_sie();
    cout << dodaj(2, 2);
    arg_domyslne(10,30);
    return 0;
}

void przedstaw_sie()
{
    cout << " To ja twoja pierwsza funkcja";
    return;
}

int dodaj(int x, int y)
{
    return x + y;
}

void arg_domyslne(int a, int b, int c)
{
    cout << "a= " << a << endl
         << "b= " << b << endl
         << "c= " << c;
}