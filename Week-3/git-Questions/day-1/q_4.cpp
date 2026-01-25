// Count Digits of a Number (Using do-while loop)
#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    do {
        count++;
        n = n / 10;
    } while (n != 0);

    cout << "Number of digits: " << count;

    return 0;
}
