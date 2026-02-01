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


    cout << "\nRow sums:\n";
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += mat[i][j];
        }
        cout << rowSum << " ";
    }


    cout << "\n\nColumn sums:\n";
    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += mat[i][j];
        }
        cout << colSum << " ";
    }

    return 0;
}
