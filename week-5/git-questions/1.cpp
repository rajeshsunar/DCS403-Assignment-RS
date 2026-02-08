// Problem:
// Write a recursive function that prints numbers from 1 to N.


#include<iostream>
using namespace std;
void num(int n)
{
    if(n==0)
    return;
    num(n - 1);
    cout << n << endl;
}
int main()
{
    int n;
    cout << "enter value to print number upto: ";
    cin >> n;
    num(n);
}