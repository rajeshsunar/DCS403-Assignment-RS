#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> arr[i];
    }


    cout << "\nThe entered integers are:\n";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
