// Write a function swapValues(int &a, int &b) that swaps two numbers using references.

#include <iostream>
using namespace std;

// Function to swap values using references
void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swapValues(x, y);  // calling the function

    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}
