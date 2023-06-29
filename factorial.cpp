#include <iostream>
using namespace std;

int main (void)
{
    int n, i, mul =1;
    cout << "Enter a number whose factorial you want to find: " << endl;
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        mul = mul * i;
    }
    cout << "The " << n << " factorial is: " << mul << endl;

    return 0;
}