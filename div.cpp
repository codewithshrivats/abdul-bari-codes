#include <iostream>
using namespace std;

int main (void)
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    switch(n % 55){
        case 0 :
            cout <<"The number is divisble by both 5 and 11." << endl;
            break;

        default : 
            cout << "The number is not divible by 5 and 11." << endl;
            break;
    }

    return 0;
}