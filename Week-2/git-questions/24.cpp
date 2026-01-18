// Remove all vowels from a string.
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string str, result = "";

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str)
    {
        char lowerCh = tolower(ch);
        if (lowerCh != 'a' && lowerCh != 'e' && lowerCh != 'i' && 
            lowerCh != 'o' && lowerCh != 'u')
        {
            result += ch; // keep non-vowel characters
        }
    }

    cout << "String without vowels: " << result << endl;

    return 0;
}
