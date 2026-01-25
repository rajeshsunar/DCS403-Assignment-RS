// Floyd’s Triangle Pattern (Nested for loops)
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of rows: ";
    cin >> N;

    int count = 1;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}
