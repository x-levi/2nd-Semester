#include <iostream>
using namespace std;
int main()
{  
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        cout << "Alphabet";
    else if (ch >= '0' && ch <= '9')
        cout << "Digit";
    else
        cout << "Special character";
    return 0;
}