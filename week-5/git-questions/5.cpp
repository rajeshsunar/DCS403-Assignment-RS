#include <iostream>
using namespace std;

int power(int a, int b, int result)
{

    if (b == 0)
        return result;


    return power(a, b - 1, result * a);
}

int main()
{
    int a, b;
    cout << "Enter base and exponent: ";
    cin >> a >> b;

    cout << "Result = " << power(a, b, 1);

    return 0;
}