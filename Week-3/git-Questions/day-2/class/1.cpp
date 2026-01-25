// Write a function add() that takes two integers as parameters and returns their sum.
// Call this function from main() and display the result.

#include <iostream>
using namespace std;


int add(int a, int b);

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    int sum = add(x, y);
    cout << "Sum = " << sum;

    return 0;
}

int add(int a, int b) {
    return a + b;
}
