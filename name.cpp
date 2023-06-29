#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "May I know your name: " << endl;
    cin >> name; // This will read only the first word of the name
    getline(cin, name); // This will read the whole name inc white space
    cout << "Hello Mr/Mrs " << name;
    cout << endl;

    return 0;
}