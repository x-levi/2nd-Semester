#include <iostream>
using namespace std;
int main()
{

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a > b)
        cout << "First is largest";
    else if (b > a)
        cout << "Second is largest";
    else
        cout << "Both are equal";
    return 0;
}