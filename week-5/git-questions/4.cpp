// Problem:
// Print each element of an array recursively.

// Hint:
// Use an index that increments with each recursive call.

#include <iostream>
using namespace std;

void printArray(int arr[], int size, int index)
{

    if (index == size)
        return;

    cout << arr[index] << endl;


    printArray(arr, size, index + 1);
}

int main()
{
    cout << "enter array 5 integers: ";
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size, 0);

    return 0;
}
