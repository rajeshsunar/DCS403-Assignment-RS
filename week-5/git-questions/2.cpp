#include <iostream>
using namespace std;
long findFactorial(long num)
{
    if( num == 0 || num ==1)
    {
        return 1;
    }
    else
    {
        return num * findFactorial(num-1);
    }
}
int main()
{
    long num, factorial;
    cout<< "Enter a number to find factorial:";
    cin >> num;
    factorial = findFactorial(num);
    cout << "Factorial of "<< num << " is " << factorial;
}