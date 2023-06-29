#include <iostream>
using namespace std;

int main (void)
{
    int n, i, mul = 1;

    cout << "Enter a number: " << endl;
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        mul = i * n;
        cout << n << " * " << i << " = " << mul << endl;
    }
    
    return 0;
}