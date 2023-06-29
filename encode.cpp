#include <iostream>
#include <cstring>

using namespace std;

int main (void)
{
    char key;
    char arr[100], encrypted[200];
    int choice, i;

    cout << "Enter the string of characters / text: " << endl;
    cin.getline(arr, 100);

    cout << "Enter the key(character): " << endl;
    cin >> key;

    cout << "The string entered is: " << arr << endl;
    cout << "The key entered is: " << key << endl;

    cout << "Encrypting Options:" << endl;
    cout << "--------------------" << endl;
    cout << "1. Bitwise AND(&)" << endl;
    cout << "2. Bitwise OR(|)" << endl;
    cout << "3. Bitwise NOT(~)" << endl;
    cout << "4. Bitwise X-OR(^)" << endl;
    cout << "5. Left Shift(<<)" << endl;
    cout << "6. Right Shift(>>)" << endl;
    cout << "7. Quit" << endl;

    cin >> choice;

    strcpy (encrypted, arr);
    if(choice == 7)
    {
        cout << "Exitted from program" << endl;
        return 0;
    }

    switch (choice){
        case 1 :
            for(i = 0; i < 200; i++)
            {
                encrypted[i] &= key;
            }
            break;
        
        case 2 :
            for(i = 0; i < 200; i++)
            {
                encrypted[i] |= key;
            }
            break;

        case 3 :
            for(i = 0; i < 200; i++)
            {
                encrypted[i] = ~encrypted[i];
            }
            break;

        case 4 :
            for(i = 0; i < 200; i++)
            {
                encrypted[i] ^= key;
            }
            break;

        case 5 :
            for(i = 0; i < strlen(encrypted); i++)
            {
                encrypted[i] <<= key;
            }
            break;

        case 6 :
            for(i = 0; i < strlen(encrypted); i++)
            {
                encrypted[i] >>= key;
            }
            break;
    }

    cout << "The encrypted string is: " << encrypted << endl;

    return 0;
}