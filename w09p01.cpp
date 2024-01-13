#include <iostream>

using namespace std;

int main()
{
    int x = 101;
    int *wsk = &x;
    // wsk = &x;
    //x++;
    //(*wsk)++;
    *wsk = 202;
    cout << "x=" << x << endl;
    cout << "wsk=" << *wsk << endl;
    return 0;
}