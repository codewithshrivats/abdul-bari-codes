//BUG : Zero at the start of the number doesnt get displayed.
#include <iostream>
using namespace std;

int digitRev (int num)
{
    int n = num;
    int r, m, rev = 0;

    while(n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev*10 + r;
    }
    m = rev;
    while(m > 0)
    {
        r = m % 10;
        m = m / 10;
        rev = rev*10 + r;

        switch(r){
            case 0 : cout << "zero ";
            break;
            
            case 1 : cout << "one ";
            break;

            case 2 : cout << "two ";
            break;

            case 3 : cout << "three ";
            break;

            case 4 : cout << "four ";
            break;

            case 5 : cout << "five ";
            break;

            case 6 : cout << "six ";
            break;

            case 7 : cout << "seven ";
            break;

            case 8 : cout << "eight ";
            break;

            case 9 : cout << "nine ";
            break;
        }
    }

    return rev;
}

int main (void)
{
    int num1;
    
    cout << "Enter a number: " << endl;
    cin >> num1;

    digitRev(num1);

    return 0;
}