#include <iostream>
#include <cstring>
#include "bitwiseand.hpp"
using namespace std;

string bitwiseAnd(const string& arr, char key)
{
    string arrayReturn = arr;

    for(i = 0; i < arrayReturn.size(); i++)
    {
        arrayReturn[i] &= key;
    }

    return arrayReturn;
}