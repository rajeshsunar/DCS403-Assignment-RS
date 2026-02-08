#include <iostream>
using namespace std;

int fibonacciTail(int n, int current, int next)
{
    if (n == 0)
        return current;

    return fibonacciTail(n - 1, next, current + next);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fib(" << n << ") = " << fibonacciTail(n, 0, 1);

    return 0;
}