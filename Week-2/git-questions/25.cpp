// Compress a string by counting consecutive repeated characters.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, compressed = "";
    cout << "Enter a string: ";
    getline(cin, str);

    int n = str.length();

    for (int i = 0; i < n; i++)
    {
        int count = 1;

        while (i < n - 1 && str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        compressed += str[i];
        if (count > 1)
            compressed += to_string(count);
    }

    cout << "Compressed string: " << compressed << endl;

    return 0;
}
