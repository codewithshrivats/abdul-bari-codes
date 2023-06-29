#include <iostream>
using namespace std;

int main (void)
{
    int i, n, count = 0;

    cout << "Enter a number: " << endl;
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        if(n%i == 0)
        {
            count++;
        }
    }
    if(count == 2)
    {
        cout << n << " is a prime number." << endl;
    }
    else{
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}