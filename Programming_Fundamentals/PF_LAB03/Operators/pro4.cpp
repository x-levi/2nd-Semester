#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3; // 5 = 0101, 3 = 0011
    
    cout << "a & b: " << (a & b) << endl;  // AND
    cout << "a | b: " << (a | b) << endl;  // OR
    cout << "a ^ b: " << (a ^ b) << endl;  // XOR
    cout << "~a: " << (~a) << endl;        // NOT
    
    return 0;
}