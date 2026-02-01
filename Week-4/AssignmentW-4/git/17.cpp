#include <iostream>
using namespace std;

int main() {
    int rows = 2, cols = 3;
    int mat[2][3];

    cout << "Enter elements of a 2x3 matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        int start = 0, end = cols - 1;
        while (start < end) {

            int temp = mat[i][start];
            mat[i][start] = mat[i][end];
            mat[i][end] = temp;
            start++;
            end--;
        }
    }

    cout << "\nMatrix after reversing each row:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
