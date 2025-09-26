#include <iostream>
using namespace std;
int main()
{
    float amount, discount;
    cout << "Enter amount: ";
    cin >> amount;
    if (amount > 1000)
        discount = amount * 0.1;
    else if (amount > 500)
        discount = amount * 0.05;
    else
        discount = 0;
    cout << "Discount: " << discount;
    return 0;
}