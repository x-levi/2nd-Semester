#include <iostream>
using namespace std;
int main()
{
    float bmi;
    cout << "Enter BMI: ";
    cin >> bmi;
    if (bmi < 18.5)
        cout << "Underweight";
    else if (bmi < 25)
        cout << "Normal";
    else if (bmi < 30)
        cout << "Overweight";
    else
        cout << "Obese";
    return 0;
}