#include <iostream>
using namespace std;

int main (void)
{
    int n;

    cout << "Enter a number: " << endl;
    cin >> n;
    
    for(int i = 1;i <= n; i++)
    {
        if(n % i == 0)
        cout << i << " is a factor of " << n << endl;
    }

    return 0;
}