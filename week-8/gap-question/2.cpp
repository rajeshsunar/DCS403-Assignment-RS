#include <iostream>
#include <deque>
#include <algorithm>
#include <cstdlib>
using namespace std;
int randomNum() {
    return rand() % 100;
}
int main() {
    deque<double> dq = {1.3, 2.4, 4.5, 6.7, 9.0};
    generate(dq.begin(), dq.end(), randomNum);
    generate_n(dq.begin(), dq.size(), randomNum);
    for(double x : dq)
        cout << x << " ";
}
