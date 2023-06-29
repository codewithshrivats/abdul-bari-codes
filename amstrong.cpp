#include <iostream>
using namespace std;

int main (void)
{
    int num, r, m, sum = 0;

    cout << "Enter a number: " << endl;
    cin >> num;

    m = num;

    while(num > 0)
    {
        r = num % 10;
        num = num / 10;
        sum = sum + (r*r*r);
    }
    if(m == sum)
    {
        cout << m << " is an amstrong number." << endl;
    }
    else 
    {
        cout << m << " is not an amstrong number." << endl;
    }

    return 0;
}