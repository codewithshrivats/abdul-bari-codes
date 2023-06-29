#include <iostream>
using namespace std;

int main (void)
{
    int n, i, sum = 0;
    cout << "Enter the nuber till which you want to print the sum of numbers: " << endl;
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of the first " << n << " the natural numbers is : " << sum << endl;

    return 0;
}