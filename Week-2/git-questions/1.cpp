// Write a program to check if a number is positive.
#include<iostream>
using namespace std;
#include<ctime>
int main()
{
    float n;
    cout << "Enter a number:";
    cin >> n;
    if(n>0)
    {
        cout << "The number " << n << " is positive number" << endl;
    }
    else
    {
        cout << "The number " <<  n << " is not-positive number" << endl;
    }
}