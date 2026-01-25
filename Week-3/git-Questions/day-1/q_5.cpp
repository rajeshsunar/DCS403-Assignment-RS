// Factorial of a Number (Using for loop)

#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long fact = 1;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fact *= i;

    cout << "Factorial of " << n << " is: " << fact;

    return 0;
}
