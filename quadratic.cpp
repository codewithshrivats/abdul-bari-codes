#include <iostream>
#include <math.h>
using namespace std;

int main (void)
{
    int a,b,c;
    float root1, root2;
    float determinant;

    cout << "Enter the coefficients of the quadratic equation:- ax^2 + bx + c = 0 : " << endl;
    cin >> a >> b >> c;

    determinant = b*b - (4*a)*c;

    if(determinant >= 0)
    {
        cout << "The roots are real." << endl;
    }
    else 
    {
        cout << "The roots are imaginary.";
        return 0;
    }

    root1 = (float)(-b + sqrt(b*b - (4*a)*c))/(2*a);
    root2 = (float)(-b - sqrt(b*b - (4*a)*c))/(2*a);

    cout << "The 2 roots of the quadratic equation " << a << "x^2 + " << b << "x + " << c << " is : " << root1 << " and " << root2 << endl;

    return 0;
}