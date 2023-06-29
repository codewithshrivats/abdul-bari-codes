#include <iostream>
using namespace std;

int main (void)
{
    int res, num;

    cout << "Enter a number: " << endl;
    cin >> num;

    while(num > 0)
    {
        res = num % 10;
        num = num / 10;
        cout << res << endl;
    }

    return 0;
}