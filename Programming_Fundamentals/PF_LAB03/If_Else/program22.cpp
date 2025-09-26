#include <iostream>
using namespace std;

int main()
{  
    int month;

    cout << "Enter your birth month number (1-12): ";
    cin >> month;

    if (month == 1)
    {
        cout << "You were born in January." << endl;
    }
    else if (month == 2)
    {
        cout << "You were born in February." << endl;
    }
    else if (month == 3)
    {
        cout << "You were born in March." << endl;
    }
    else if (month == 4)
    {
        cout << "You were born in April." << endl;
    }
    else if (month == 5)
    {
        cout << "You were born in May." << endl;
    }
    else if (month == 6)
    {
        cout << "You were born in June." << endl;
    }
    else if (month == 7)
    {
        cout << "You were born in July." << endl;
    }
    else if (month == 8)
    {
        cout << "You were born in August." << endl;
    }
    else if (month == 9)
    {
        cout << "You were born in September." << endl;
    }
    else if (month == 10)
    {
        cout << "You were born in October." << endl;
    }
    else if (month == 11)
    {
        cout << "You were born in November." << endl;
    }
    else if (month == 12)
    {
        cout << "You were born in December." << endl;
    }
    else
    {
        cout << "Invalid month number. Please enter a number between 1 and 12." << endl;
    }

    return 0;
}
