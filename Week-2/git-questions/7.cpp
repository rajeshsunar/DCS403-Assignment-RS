// Write a program to calculate the sine, cosine, and tangent of an angle in radians.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double degree, radian;
    const double PI = acos(-1);

    cout << "Enter angle in degrees: ";
    cin >> degree;

    radian = degree * (PI / 180);

    cout << "Angle in radians: " << radian << endl;
    cout << "Sine: " << sin(radian) << endl;
    cout << "Cosine: " << cos(radian) << endl;
    cout << "Tangent: " << tan(radian) << endl;

    return 0;
}

