#include <iostream>
using namespace std;
// long findFactorial(long num)
// {
//     if( num == 0 || num ==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return num * findFactorial(num-1);
//     }
// }
// int main()
// {
//     long num, factorial;
//     cout<< "Enter a number to find factorial:";
//     cin >> num;
//     factorial = findFactorial(num);
//     cout << "Factorial of "<< num << " is " << factorial;
// }


long sumFibonacci(int n)
{
    long a = 0, b = 1, c;
    long sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += a;
        c = a + b;
        a = b;
        b = c;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Sum of Fibonacci series = " << sumFibonacci(n);
    return 0;
}

