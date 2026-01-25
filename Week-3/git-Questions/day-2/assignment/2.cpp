// Inverted Right-Angled Triangle
// Problem: Print a triangle in reverse order.

// Example (n = 5):

// *****
// ****
// ***
// **
// *
// Hint: The number of stars decreases each row.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
