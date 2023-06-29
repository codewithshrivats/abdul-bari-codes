#include <iostream>
using namespace std;

int main (void)
{
    int basicSal, percentAllowance, percentDeductions, netSalary;

    cout << "Enter the Basic Salary of the user: " << endl;
    cin >> basicSal;
    cout << "Enter the Percentage of Allowances: " << endl;
    cin >> percentAllowance;
    cout << "Enter the Percentage of Deductions: " << endl;
    cin >> percentDeductions;

    netSalary = basicSal + (basicSal*percentAllowance)/100 - (basicSal*percentDeductions)/100;

    cout << "The Net Salary of the user is: " << netSalary << endl;
    
    return 0;
}