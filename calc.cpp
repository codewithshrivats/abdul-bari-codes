#include <iostream>
using namespace std;

int main (void)
{
    int choice;
    int num1, num2;
    int add, sub;

    cout << "Calculator Menu" << endl;
    cout << "-----------------" << endl;
    cout << "1. Addition(+)" << endl;
    cout << "2. Subtraction(-)" << endl;
    cout << "Enter your choice of calculation." << endl;
    cin >> choice;

    if(choice != 1 && choice != 2)
    {
        cout << "Enter the correct input (1 or 2)." << endl;
        return 0;
    }
    else
    {
        cout << "The correct input was entered." << endl;
    }

    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch(choice){
        case 1 :
            add = num1 + num2;
            cout << "The sum of " << num1 << " and " << num2 << " is " << add << endl;
            break;

        case 2 :
            sub = num1 - num2;
            cout << "The subtraction of " << num1 << " and " << num2 << " is " << sub << endl;
            break;
        
    }
    return 0;
}