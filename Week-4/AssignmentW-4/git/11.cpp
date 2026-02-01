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


    cout << "\nRow max values:\n";
    for (int i = 0; i < 3; i++) {
        int max = mat[i][0];
        for (int j = 1; j < 3; j++) {
            if (mat[i][j] > max) {
                max = mat[i][j];
            }
        }
        cout << max << " ";
    }

    return 0;
}
