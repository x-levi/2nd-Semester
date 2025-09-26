#include <iostream>
using namespace std;
int main()
{
    float salary, tax;
    cout << "Enter salary: ";
    cin >> salary;
    if (salary <= 250000)
        tax = 0;
    else if (salary <= 500000)
        tax = (salary - 250000) * 0.05;
    else if (salary <= 1000000)
        tax = 250000 * 0.05 + (salary - 500000) * 0.2;
    else
        tax = 250000 * 0.05 + 500000 * 0.2 + (salary - 1000000) * 0.3;
    cout << "Tax: " << tax;
    return 0;
}