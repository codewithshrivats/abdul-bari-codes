#include <iostream>
using namespace std;

enum days{mon, tue, wed, thu, fri, sat, sun}; // These are the constants and cannot be changed.

int main (void)
{
    //const int CS = 1;
    //const int ESE = 2;
    
    int userChoice;

    //cout << "Enter the day (0-6): ";
    //cin >> userChoice;

    //if (userChoice >= 0 && userChoice <= 6) {
        //days selectedDay = static_cast<days>(userChoice);
        //cout << "Selected day: " << selectedDay << endl;
    //} else {
        //cout << "Invalid day entered." << endl;
    //}

    days d = tue;
    if(d == mon)
    {
        cout << "The day is Monday." << endl;
    }
    else{
        cout << "The day is not Monday." << endl;
    }    

    return 0;
}