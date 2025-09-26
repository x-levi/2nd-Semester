#include <iostream>
using namespace std;
int main()
{
    int m1, m2, m3;
    cout << "Enter marks for 3 subjects: ";
    cin >> m1 >> m2 >> m3;
    if (m1 >= 40 && m2 >= 40 && m3 >= 40)
        cout << "Pass";
    else
        cout << "Fail";
    return 0;
}