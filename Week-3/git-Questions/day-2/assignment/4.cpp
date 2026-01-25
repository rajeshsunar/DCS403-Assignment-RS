// . Alphabet Pattern
// Problem: Print a pattern of letters in increasing order.

// Example (n = 5):

// A
// A B
// A B C
// A B C D
// A B C D E
// Hint: Use ASCII values of characters ('A' + j).


#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }

    return 0;
}

