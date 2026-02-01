#include <iostream>
using namespace std;

int main() {
    int mat[3][3];

    cout << "Enter elements of 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat[i][j];
        }
    }

    bool symmetric = true;
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (mat[i][j] != mat[j][i]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric)
            break;
    }

    if (symmetric)
        cout << "The matrix is symmetric.";
    else
        cout << "The matrix is not symmetric.";

    return 0;
}
