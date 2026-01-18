// Write a program to find the length of a string.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Length of the string: " << str.length() << endl;

    return 0;
}
