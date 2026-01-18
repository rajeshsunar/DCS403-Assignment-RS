// Find and print the longest word from a sentence.
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string sentence, word, longestWord;
    int maxLength = 0;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);  // split sentence into words

    while (ss >> word)
    {
        if (word.length() > maxLength)
        {
            maxLength = word.length();
            longestWord = word;
        }
    }

    cout << "Longest word: " << longestWord << endl;

    return 0;
}
