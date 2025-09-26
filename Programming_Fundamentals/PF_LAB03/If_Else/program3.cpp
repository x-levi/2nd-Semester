#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (!a)
        printf("a is zero");
    else if (a > 0)
        printf("a is positive");
    else
        printf("a is negative");
    return 0;
}
