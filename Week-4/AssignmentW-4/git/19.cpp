#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix (N): ";
    cin >> n;

    int mat[n][n];

    cout << "Enter elements of " << n << "x" << n << " matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "\nBoundary elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == n-1) {
                cout << mat[i][j] << " ";
            }
        }
    }

    return 0;
}
