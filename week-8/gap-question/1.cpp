#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    double arr[5] = {1.3, 2.4, 4.5, 6.7, 9.0};
    fill(arr, arr + 3, 5.5);
    fill_n(arr, 4, 6.9);
    for(double x : arr)
        cout << x << " ";
}
