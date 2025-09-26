#include <iostream>
using namespace std;
int main()
{
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;
    if (month == 2)
        cout << "28 or 29 days";
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        cout << "30 days";
    else if (month >= 1 && month <= 12)
        cout << "31 days";
    else
        cout << "Invalid month";
    return 0;
}