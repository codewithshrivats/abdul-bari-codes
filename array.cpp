#include <iostream>
using namespace std;

int main (void)
{
    //int A[5] = {1,2,3,4,5};

    //float A[] = {2.5f,3.3f,4.4f, 1,2};

    char A[] = {'A', 66, 'C', 68};

    /*for(int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }*/

    for(auto x:A)
    {
        cout << x << endl;
    }

    return 0;
}