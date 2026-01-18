#include <iostream>
using namespace std;

int main() {
    int y = 10, x = 10;

    if ( (y > 10) || (x++ > 10) ) {
    }

    cout << "x = " << x << endl;
    return 0;
}