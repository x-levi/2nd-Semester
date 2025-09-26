#include <iostream>
using namespace std;
int main()
{
    char op;
    int a, b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (op == '+')
        cout << a + b;
    else if (op == '-')
        cout << a - b;
    else if (op == '*')
        cout << a * b;
    else if (op == '/')
        cout << a / b;
    else
        cout << "Invalid operator";
    return 0;
}