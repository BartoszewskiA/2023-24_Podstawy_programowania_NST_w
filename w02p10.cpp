#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
        if(i==4) break;
    }
    return 0;
}