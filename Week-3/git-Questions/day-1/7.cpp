//  Print a Multiplication Table (1–10) (Using Nested Loops)

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++)
    {
        cout << "Multiplication table of " << i << ":\n";
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
    return 0;
}
