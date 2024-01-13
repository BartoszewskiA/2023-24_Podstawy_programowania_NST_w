#include <iostream>

using namespace std;

void a(int i);

int main()
{
    a(10);
    return 0;
}

void a(int i)
{
    cout << i << "   ";
    if (i == 0)
        return;
    else
        return a(--i);
}