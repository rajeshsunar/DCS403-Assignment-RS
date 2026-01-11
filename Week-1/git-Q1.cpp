// Write a C++ program that calculates an employee’s total salary based on a base salary and a bonus percentage.

#include<iostream>
using namespace std;
int main()
{
    int base_salary;
    const float BONUS_PERCENTAGE = 25;
    float bonus_amount, total_salary;
    cout << "Enter your base salary: ";
    cin >> base_salary;
    bonus_amount = base_salary * (BONUS_PERCENTAGE/100.0);
    total_salary = bonus_amount + base_salary;
    cout << "total salary is Rs. "<<total_salary <<"." <<"The bonus is " << BONUS_PERCENTAGE <<"% of your base salary.";
}

