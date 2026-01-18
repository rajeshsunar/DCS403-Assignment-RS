// Write a program to check if a number is:
// 1. Positive and Even
// 2. Positive and Odd
// 3. Negative
// 4. Zero
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
    {
        if (num % 2 == 0)
        {
            cout << "Positive and Even";
        }
        else
        {
            cout << "Positive and Odd";
        }
    }
    else {
        if (num < 0)
        {
            cout << "Negative";
        }
        else
        {
            cout << "Zero";
        }
    }

    return 0;
}