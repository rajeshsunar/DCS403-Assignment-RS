#include <iostream>
using namespace std;

int main() {
    float sum = 0;

    for (int i = 1; i <= 97; i += 2) {
        sum += (float) i / (i + 2);
    }

    cout << "Sum of the series = " << sum << endl;
    return 0;
}
