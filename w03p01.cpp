#include <iostream>

using namespace std;

const int LICZBA = 5; 

int main()
{
    int ile =0, suma = 0, x;
    do
    {
        cout<<"x("<<ile+1<<")=";
        cin>>x;
        if(x<0) continue;
        suma +=x;
        ile++;
    } while (ile<LICZBA);
    cout<<"suma="<<suma;
    return 0;
}