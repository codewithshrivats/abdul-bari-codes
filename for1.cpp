#include <iostream>
using namespace std;

int main (void)
{
    int n, i;
    cout << "Enter the number you want to print the digits upto: " << endl;
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        cout << i << endl;
    }

    return 0;
}