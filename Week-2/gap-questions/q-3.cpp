#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int score, highest = 0;

    for (int i = 1; i <= n; i++) {
        cout << "Enter score of student " << i << ": ";
        cin >> score;

        if (score > highest)
            highest = score;
    }

    cout << "Highest score = " << highest << endl;
    return 0;
}
