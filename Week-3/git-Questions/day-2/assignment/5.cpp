// roblem: Print a centered pyramid of stars.

// Example (n = 5):

//     *
//    ***
//   *****
//  *******
// *********
// Hint: Print spaces first, then stars. Number of stars = 2*i - 1.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
