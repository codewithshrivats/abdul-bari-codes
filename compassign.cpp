#include <iostream>
using namespace std;

int main (void)
{
    int a, b, c;
    int sum;

    a = 10;
    b = 20;
    c = 30;
    sum = 5;

    sum = sum + a + b + c;
    sum += a + b + c;

    b = 2*++a + 2*++a;

    cout << "a is " << a << " and b is " << b << endl;

    return 0;
}