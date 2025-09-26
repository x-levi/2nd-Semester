#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a > 0 || b > 0)
        cout << "At least one is positive";
    else
        cout << "Both are Negative";

    return 0;
}