// . Inverted Pyramid
// Problem: Print an inverted pyramid.

// Example (n = 5):

// *********
//  *******
//   *****
//    ***
//     *
// Hint: Print spaces first, then decreasing stars.



#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--) 
    {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
       
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
