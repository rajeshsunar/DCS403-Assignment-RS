// Write a function square(int n) that prints the square of a number. Verify that the original number in main() does not change.

#include <iostream>
using namespace std;

void square(int n) {
    cout << "Square inside function: " << n * n << endl;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    square(num);
    cout << "Original number in main: " << num << endl;

    return 0;
}
