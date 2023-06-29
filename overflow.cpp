#include <iostream>
using namespace std;

int main (void)
{
    char x = 127;
    ++x;

    int x = INT8_MAX;
    x++;
    cout << (int)x; // Here the x is typecasted to integer.
    return 0;
}