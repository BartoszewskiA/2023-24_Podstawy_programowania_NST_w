#include <iostream>

using namespace std;

double srednia(int a, int b);
// int srednia(int a, int b); - NIE DZIAŁA
double srednia(double a, double b);
double srednia(int a, int b, int c);
double srednia(int a, int b, int c, int d);

int main()
{
    cout << srednia(4.0, 8.0);
    return 0;
}

double srednia(int a, int b)
{
    // return (a+b)/(double)2;
    cout << "funkcja z 2 parametrami" << endl;
    return (a + b) / 2.0;
}

// int srednia(int a, int b)
// {
//     cout << "funkcja z 2 parametrami INT" << endl;
//     return (a + b) / 2;
// }

double srednia(double a, double b)
{
    cout << "funkcja z 2 parametrami DOUBLE" << endl;
    return (a + b) / 2;
}

double srednia(int a, int b, int c)
{
    cout << "funkcja z 3 parametrami" << endl;
    return (a + b + c) / 3.0;
}

double srednia(int a, int b, int c, int d)
{
    cout << "funkcja z 4 parametrami" << endl;
    return (a + b + c + d) / 4.0;
}