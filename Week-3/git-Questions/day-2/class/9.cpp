// Write a function display(const string &msg) that takes a constant reference to a string and prints it.

#include <iostream>
#include <string>
using namespace std;


void display(const string &msg) {
    cout << msg << endl;
}

int main() {
    string message;

    cout << "Enter a message: ";
    getline(cin, message);

    display(message);  

    return 0;
}
