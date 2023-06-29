#include <iostream>
using namespace std;

int main (void)
{
    int a, b, c;

    cout << "Enter 3 numbers: " << endl;
    cin >> a >> b >> c;

    if(a > b && a > c)
    {
        cout << "The first number is greater." << endl;
    }
    else
    {
        if(b > c)
        {
            cout << "The seocnd number is greater." << endl;
        }
        else
        {
            cout << "The third number is greater." << endl;
        }
    }

    return 0;
}
