#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    // char letter ='A';
    // // cout << letter << "has code " << int(letter) << endl;
    // char next = letter + 1;
    // cout << next;

    // Generating random letter
    // srand(time(0));
    // int letter_n = rand() % 26;
    // char letter = 'A' + letter_n;
    // cout << letter;



    // Hexadecimal conversion
    // srand(time(0));
    // int num = rand() % 5;
    // char letter = 'A' + num;

    // if (letter == 'A')
    // {
    //     cout << "10" << endl;
    // }
    // else if (letter == 'B')
    // {
    //     cout << "11" << endl;
    // }
    // else if (letter == 'C')
    // {
    //     cout << "12" << endl;
    // }
    // else if (letter == 'D')
    // {
    //     cout << "13" << endl;
    // }
    // else if (letter == 'E')
    // {
    //     cout << "14" << endl;
    // }
    // else if (letter == 'F')
    // {
    //     cout << "15" << endl;
    // }
char letter;
int hex_num;
cout << "Enter hexadecimal value (A-F or 0-9): ";
cin >> letter;

if (letter >= 'A' && letter <= 'F')
{
    hex_num = letter - 55;
    cout << hex_num;
}
else if (letter >= '0' && letter <= '9')
{
    hex_num = letter - '0';
    cout << hex_num;
}
else
{
    cout << "Invalid input";
}


}