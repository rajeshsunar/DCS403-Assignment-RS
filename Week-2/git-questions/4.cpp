// Use a ternary operator to find the smaller of two numbers.
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int smaller = (a < b) ? a : b;

    cout << "Smaller number is: " << smaller;
    return 0;
}
