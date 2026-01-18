#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double D, x1, x2;

    cout << "Enter coefficient a: ";
    cin >> a;

    cout << "Enter coefficient b: ";
    cin >> b;

    cout << "Enter coefficient c: ";
    cin >> c;

    D = b*b - 4*a*c;

    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);

        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (D == 0)
    {
        x1 = -b / (2*a);

        cout << "Roots are real and equal." << endl;
        cout << "x1 = x2 = " << x1 << endl;
    }
    else
    {
        cout << "Roots are imaginary (complex)." << endl;
    }

    return 0;
}
