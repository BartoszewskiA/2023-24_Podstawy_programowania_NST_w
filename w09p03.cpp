#include <iostream>

using namespace std;

int main()
{
    // int * p;
    // p = new int;
    int *p = new int;
    cout<<"start"<<endl;
    *p = 30;
    cout<<"p="<<*p;
    delete p;
    return 0;
}