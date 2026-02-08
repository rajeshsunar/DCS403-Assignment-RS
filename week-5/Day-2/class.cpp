#include <iostream>
using namespace std;

// int fibonacci(int n)
// {
//     if (n == 0)
//         return 0;
//     else if (n == 1)
//         return 1;
//     else
//         return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main()
// {
//     int n;
//     cout << "Enter number of terms: ";
//     cin >> n;

//     cout << "Fibonacci Series: ";
//     for (int i =0; i < n; i++)
//     {
//         cout << fibonacci(i) << " ";
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// void towerOfHanoi(int n, char source, char helper, char destination)
// {
//     if (n == 1)
//     {
//         cout << "Move disk 1 from " << source << " to " << destination << endl;
//         return;
//     }

//     towerOfHanoi(n - 1, source, destination, helper);
//     cout << "Move disk " << n << " from " << source << " to " << destination << endl;
//     towerOfHanoi(n - 1, helper, source, destination);
// }

// int main()
// {
//     int n = 3;
//     towerOfHanoi(n, 'A', 'B', 'C');
//     return 0;
// }




bool isPalindrome(const char * const s)
{
    if (strlen(s) <= 1) // Base case: empty or single char string is a palindrome
        return true;
    else if (s[0] != s[strlen(s) - 1]) // Base case: first and last chars are different
        return false;
    else
        return isPalindrome(substring(s, 1, strlen(s) - 2)); // recursive call
}
