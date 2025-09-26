#include <iostream>
using namespace std;

int main() {
    int a = 5;
    
    cout << "Initial a: " << a << endl;
    cout << "Post-increment: " << a++ << endl;
    cout << "After post-increment: " << a << endl;
    cout << "Pre-increment: " << ++a << endl;
    cout << "Post-decrement: " << a-- << endl;
    cout << "After post-decrement: " << a << endl;
    cout << "Pre-decrement: " << --a << endl;
    
    return 0;
}