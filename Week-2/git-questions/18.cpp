// Count how many times each alphabet appears in a string (ignore case).
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string str;
    int freq[26] = {0};

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str)
    {
        if (isalpha(ch))
        {
            ch = tolower(ch);
            freq[ch - 'a']++;
        }
    }

    cout << "Alphabet frequencies:" << endl;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }
    }

    return 0;
}
