#include <iostream>
using namespace std;

double smallest (double num[], int size)
{
    double smallest = num[0];

    for (int i = 1; i < size; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
    }

    return smallest;
}

int main()
{
    double numbers[10];

    cout << "Enter 10 numbers: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }

    double result = smallest(numbers, 10);

    cout << "The minimum value is: " << result << endl;

    return 0;
}
