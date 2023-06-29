#include <iostream>
using namespace std;

int main (void)
{
    int n, r, rev = 0;

    cout << "Enter a number: " << endl;
    cin >> n;

    while(n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }

    cout << "The reverse is: " << rev << endl;

    return 0;
}