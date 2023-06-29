#include <iostream>
#include <cstring>
using namespace std;

struct Person{
    char personName[100];
    char personContact[100];
    char personEmail[35];

};

int main (void)
{
    Person person;
    //strcpy(person.personName, "Shrivats");
    //strcpy(person.personContact, "8468892087");
    //strcpy(person.personEmail, "shrivatsagr24@gmail.com");

    cout << "Enter the persons name: " << endl;
    cin.getline(person.personName, 100);
    
    cout << "The person's name is " << person.personName << endl;
    //cout << "The person's contact number is " << person.personContact << endl;

    return 0;
}