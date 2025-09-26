#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a >= b && a >= c)
        cout << "First is largest";
    else if (b >= a && b >= c)
        cout << "Second is largest";
    else
        cout << "Third is largest";
    return 0;
}