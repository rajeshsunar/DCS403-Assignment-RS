// Pascal’s Triangle
// Problem: Print Pascal’s triangle up to N rows.

#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

unsigned long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int N;
    cout << "Enter number of rows: ";
    cin >> N;

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N - i - 1; j++)
            cout << "  ";

        for (int k = 0; k <= i; k++) {
            cout << nCr(i, k) << "   ";
        }
        cout << endl;
    }

    return 0;
}
