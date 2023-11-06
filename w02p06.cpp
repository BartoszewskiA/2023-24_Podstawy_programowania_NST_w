#include <iostream>

using namespace std;

int main()
{
    for (int i = 28; i < 256; i++)
        cout << i << ":[" << (char)i << "]  ";
    return 0;
}