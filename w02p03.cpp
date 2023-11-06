#include <iostream>

using namespace std;

int main()
{
    int nr;
    cout << "Podaj numer dnia tygodnia: ";
    cin >> nr;
    switch (nr)
    {
    case 1:
        cout << "Nie";
        break;
    case 2:
        cout << "Pon";
        break;
    case 3:
        cout << "Wt";
        break;
    case 4:
        cout << "Sr";
        break;
    case 5:
        cout << "Czw";
        break;
    case 6:
        cout << "Pi";
        break;
    case 7:
        cout << "Sob";
        break;
    default:
        cout << "Tydzien ma tylko 7 dni";
    }
    return 0;
}