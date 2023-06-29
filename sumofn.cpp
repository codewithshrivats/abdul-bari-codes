#include <iostream>
using namespace std;

int main(void)
{
    int n, sum;

    cout << "Enter the nth natural number till which you want to find the sum of: " << endl;
    cin >> n;

    sum = (n*(n+1))/2;

    cout << "The sum of all natural numbers until " << n << " is: " << sum << endl;

    return 0;
}