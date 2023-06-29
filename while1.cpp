#include <iostream>
using namespace std;

int main (void)
{
    int n, i = 1;
    cout << "Enter the number you want to print the digits upto: " << endl;
    cin >> n;

    while(i <= n)
    {
        cout << i << endl;
        i++;
    }

    return 0;
}