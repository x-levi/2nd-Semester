#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 3 == 0)
        cout << "Multiple of 3";
    else if (num % 7 == 0)
        cout << "Multiple of 7";
    else
        cout << "Not a multiple of 3 or 7";
    return 0;
}