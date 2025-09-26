#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 3, c = 2;

    cout << "a + b * c = " << (a + b * c) << endl;
    cout << "(a + b) * c = " << ((a + b) * c) << endl;
    cout << "a * b / c = " << (a * b / c) << endl;
    cout << "a * (b / c) = " << (a * (b / c)) << endl;
    cout << "a & b | c = " << (a & b | c) << endl;
    cout << "a & (b | c) = " << (a & (b | c)) << endl;

    return 0;
}