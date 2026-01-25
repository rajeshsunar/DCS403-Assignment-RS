#include <iostream>
#include <cmath>
using namespace std;

double futureInvestmentValue(double investmentAmount, double annualInterestRate, int years)
{
    double monthlyInterestRate = annualInterestRate / 12 / 100;
    return investmentAmount * pow(1 + monthlyInterestRate, years * 12);
}

int main()
{
    double investmentAmount, annualInterestRate;
    int years;

    cout << "Enter investment amount: ";
    cin >> investmentAmount;

    cout << "Enter annual interest rate (%): ";
    cin >> annualInterestRate;

    cout << "Enter number of years: ";
    cin >> years;

    double futureValue = futureInvestmentValue(investmentAmount, annualInterestRate, years);

    cout << "Future Investment Value = " << futureValue << endl;

    return 0;
}


// double computeSeries(int i)
// {
//     double sum = 0.0;
//     for (int n = 1; n <= i; n++)
//     {
//         sum += (double)n / (n + 1);
//     }
//     return sum;
// }

// int main()
// {
//     int i;
//     cout << "Enter the value of i: ";
//     cin >> i;

//     cout << "Result of the series: " << computeSeries(i) << endl;

//     return 0;
// }


// char toLowerCase(char ch) {
//     return tolower(ch);
// }
// int main()
// {
//     char a;
//     cout << "Enter letter to convert into lower case: ";
//     cin >> a;
//     cout << toLowerCase(a);
// }

// void nPrint(char ch, int n) 
// {
//     for (int i = 0; i < n; i++)
//         cout << ch;
// }

// int main()
// {
//     nPrint('a', 4);   
//     return 0;
// }



