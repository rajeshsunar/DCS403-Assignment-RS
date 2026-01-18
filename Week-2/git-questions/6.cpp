// Write a program to find the square root, power, and absolute value
// of a number using mathematical functions.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num, exponent;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter power value: ";
    cin >> exponent;

    cout << "Square root of " << num << " is: " << sqrt(num) << endl;
    cout << num << " raised to the power " << exponent << " is: " << pow(num, exponent) << endl;
    cout << "Absolute value of " << num << " is: " << fabs(num) << endl;

    return 0;
}