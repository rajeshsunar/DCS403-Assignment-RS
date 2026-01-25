// Write a function power(int base, int exponent = 2) that calculates base raised to the given power. 
// If the exponent is not provided, assume it is 2.


#include <iostream>
using namespace std;

int power(int base, int exponent = 2) {
    int result = 1;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int b, e;

    cout << "Enter base: ";
    cin >> b;

    cout << "Enter exponent (or skip to use default 2): ";
    cin >> e;

    cout << b << " raised to " << e << " = " << power(b, e) << endl;
    cout << b << " squared (using default) = " << power(b) << endl;

    return 0;
}
