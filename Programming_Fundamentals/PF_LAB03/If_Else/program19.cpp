#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout << "Enter any positive number: ";
    cin >> num;
    if (num < 0)
    {
        cout << "Please Enter a positive " << endl;
    }
    else
    {
        int sqrtNum = sqrt(num);
        if (sqrtNum * sqrtNum == num)
        {
        	cout << sqrtNum << "<<=  " ;
            cout << num << " is a perfect square." << endl;
        }
        else
        {
            cout << num << " is not a perfect square." << endl;
        }
    }

    return 0;
}
