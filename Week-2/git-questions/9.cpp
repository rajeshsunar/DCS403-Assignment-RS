// Write a program to check if a character is a letter, digit, or special character
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (isalpha(ch))
    {
        cout << "The character is a letter." << endl;
    }
    else if (isdigit(ch))
    {
        cout << "The character is a digit." << endl;
    }
    else if (ispunct(ch))
    {
        cout << "The character is a special character." << endl;
    }
    else
    {
        cout << "The character is neither a letter, digit, nor a punctuation symbol." << endl;
    }

    return 0;
}
