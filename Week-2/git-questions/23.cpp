// Check if two strings are anagrams (contain same characters in any order).
#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

string prepareString(string str)
{
    string result = "";
    for (char ch : str)
    {
        if (isalpha(ch))
            result += tolower(ch);
    }
    sort(result.begin(), result.end());
    return result;
}

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    if (prepareString(str1) == prepareString(str2))
        cout << "The strings are anagrams." << endl;
    else
        cout << "The strings are not anagrams." << endl;

    return 0;
}
