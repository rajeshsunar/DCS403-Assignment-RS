#include <iostream>
using namespace std;

int main() {
    int rows = 3, cols = 2;
    int mat[3][2];

    cout << "Enter elements of a 3x2 matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }

    for (int j = 0; j < cols; j++) {
        int top = 0, bottom = rows - 1;
        while (top < bottom) {

            int temp = mat[top][j];
            mat[top][j] = mat[bottom][j];
            mat[bottom][j] = temp;

            top++;
            bottom--;
        }
    }

    cout << "\nMatrix after reversing each column:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
