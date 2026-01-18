// Count how many words are in a sentence.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int wordCount = 0;
    bool inWord = false;

    cout << "Enter a sentence: ";
    getline(cin, str);

    for (char ch : str)
    {
        if (!isspace(ch))
        {
            if (!inWord)
            {
                wordCount++;
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }

    cout << "Number of words: " << wordCount << endl;

    return 0;
}
