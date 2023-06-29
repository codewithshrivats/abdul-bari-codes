#include <iostream>
using namespace std;

int main (void)
{
    int n,i,mul;
    cout <<"Enter a number: " << endl;
    cin >> n;

    cout << "The table of " << n << " is:" << endl;
    for(i = 1; i <= 10; i++)
    {
        mul = n*i;
        cout << n << " * "<< i << " = " << mul << endl;
    }

    return 0;
}