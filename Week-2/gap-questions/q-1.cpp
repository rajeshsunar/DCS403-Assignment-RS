// // Write a program that prompts the user to enter the year and month in this order
//  and displays the number of days in the month. For example, if the user entered month
//   2 and year 2000, the program should display that February 2000 has 29 days. If the
//   user entered month 3 and year 2005, the program should display that March 2005 has 31 days.
#include <iostream>
using namespace std;

int main() {
    int year, month;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;

    int days;

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            days = 29;
        else
            days = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        days = 30;
    else
        days = 31;

    cout << "Number of days = " << days << endl;
    return 0;
}
