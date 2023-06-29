#include <iostream>
using namespace std;

int main (void)
{
    int n, m;

    cout << "Enter two numbers: " << endl;
    cin >> m >> n;

    while(m != n)
    {
        if(m > n)
        {
            m = m - n;
        }
        else if(n > m)
        {
            n = n - m;
        }
    }

    cout << "GCD of the two numbers is: " << m;

    return 0;
}