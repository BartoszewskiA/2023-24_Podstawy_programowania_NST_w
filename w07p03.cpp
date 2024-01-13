#include <iostream>
#include <ctime>

using namespace std;
struct RGB
{
    int R;
    int G;
    int B;
};

RGB losuj_kolor();
int main()
{
    srand(time(NULL));
    RGB losowy_kolor = losuj_kolor();
    cout << "R= " << losowy_kolor.R << endl
         << "G= " << losowy_kolor.G << endl
         << "B= " << losowy_kolor.B;
    return 0;
}

RGB losuj_kolor()
{
    RGB kolor;
    kolor.R = rand() % 256;
    kolor.G = rand() % 256;
    kolor.B = rand() % 256;
    return kolor;
}