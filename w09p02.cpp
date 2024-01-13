#include <iostream>

using namespace std;

int main()
{
    int tab[10] = {0,1,2,3,4,5,6,7,8,9};

    // for(int i=0; i<10; i++)
    //     cout<<tab[i];

   // cout<<*(tab+3);
    for(int i=0; i<10; i++)
        cout<<*(tab+i)<<" ";
   
    return 0;
}