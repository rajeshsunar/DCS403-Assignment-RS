// Write a program to find the largest and smallest of two numbers using fmax() and fmin().
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Largest number: " << fmax(a, b) << endl;
    cout << "Smallest number: " << fmin(a, b) << endl;

    return 0;
}
