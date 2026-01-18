// Write a C++ program that prints the name of the day of the
// week based on a number entered by the user (1–7) using switch case.


#include <iostream>
using namespace std;

int main() {
    int day;

    cout << "Enter a number (1-7): ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Sunday";
            break;
        case 2:
            cout << "Monday";
            break;
        case 3:
            cout << "Tuesday";
            break;
        case 4:
            cout << "Wednesday";
            break;
        case 5:
            cout << "Thursday";
            break;
        case 6:
            cout << "Friday";
            break;
        case 7:
            cout << "Saturday";
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 7.";
    }

    return 0;
}
