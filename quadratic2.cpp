#include <iostream>
#include <math.h>
using namespace std;

int main (void)
{
    float a, b, c, determinant, root1, root2, root;

    cout << "Enter the coefficients of the quadratic equation ax^2 + bx + c = 0: " << endl;
    cin >> a >> b >> c;
    cout << "The quadratic equation entered is: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl; 

    determinant = b*b - 4*a*c;

    if(determinant == 0)
    {
        root = -b/(2*a);
        cout << "The roots are both real and equal. Root: " << root << endl;
    }
    else if(determinant > 0)
    {
        root1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
        root2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
        cout << "The roots are both real but unequal, they are: " << root1 << " and " << root2 << endl;
    }
    else if(determinant < 0)
    {
        cout << "The roots are imaginary.";
    }
    
    return 0;
}