// #include<iostream>
// using std::cout;
// using std::endl;
// int main()
// {
//     bool b1= 0;
//     bool b2 = 198;

//     cout << "b1="<< b1<< endl;
// }

#include<iostream>
using namespace std;
#include<ctime>
int main()
{
    // float n;
    // cout << "Enter a number:";
    // cin >> n;
    // if(n>0)
    // {
    //     cout << "The" << n << " is positive number" << endl;
    // }
    // else
    // {
    //     cout << "The" << n << " is not-positive number" << endl;
    // }




    // float maths,sci,nepali,english;
    // cout <<  "Enter marks for maths:";
    // cin >> maths;
    // cout <<  "Enter marks for science:";
    // cin >> sci;
    // cout <<  "Enter marks for nepali:";
    // cin >> nepali;
    // cout <<  "Enter marks for english:";
    // cin >> english;
    // float obtained_marks = (maths + sci + nepali + english)/4;
    // if(obtained_marks>=80)
    // {
    //     cout << "The obtained grade is A.";
    // }
    // else if (obtained_marks>=60)
    // {
    //     cout << "The obtained grade is B.";
    // }
    //   else if (obtained_marks>=40)
    // {
    //     cout << "The obtained grade is C.";
    // }
    // else
    // {
    //     cout << "The obtained grade is F";
    // }

    // float marks;
    // int category;
    // cout << "enter marks:";
    // cin >> marks;
    // switch (category)
    // {
    //     category = marks / 20;
    //     switch (category){
    //     case 5:   // 100
    //     case 4:   // 80–99
    //         cout << "A";
    //         break;

    //     case 3:   // 60–79
    //         cout << "B";
    //         break;

    //     case 2:   // 40–59
    //         cout << "C";
    //         break;

    //     default:  // below 40
    //         cout << "F";
    // }
    // return 0;
    // }

    // float n;
    // cout << "enter a number:";
    // cin >> n;
    // if(n>0)
    // {
    //     if(n % 2==0)
    //     {
    //         cout << n << "positive and even";
    //     }
    // }
    // srand(time(0));
    // int number = rand()%10;
    // cout << number;

    // Ternary operators
    // a>b? "a is greater": "b is greater"

    int year;
    cout << "Enter a year to check leap year ";
    cin >> year;
    if( (year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0)
    {
        cout << year << " is leap year";
    }
    else
    {
        cout << year << " is not leap year";
    }
}

