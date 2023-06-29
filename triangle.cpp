#include <iostream>
using namespace std;

int main(void)
{
    int base, height, area;

    cout << "Enter the base of the triangle: " << endl;
    cin >> base;
    cout << "Enter the height of the triangle: " << endl;
    cin >> height;

    area = (base*height)/2;

    cout << "The area of the triangle is: " << area << endl;

    return 0;
}