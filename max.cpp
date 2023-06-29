#include <iostream>
using namespace std;

int main (void)
{
    int num1, num2, max;

    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;

    if(num1 > num2)
    {
        cout << "The first number is greater than the second number." << endl;
    }
    else if(num1 < num2)
    {
        cout << "The second number is gretaer than the first number." << endl;
    }
    else{
        cout << "Both the numbers are equal to each other." << endl;
    }

    return 0;
}