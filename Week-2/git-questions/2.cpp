    // Write a program to assign grades based on marks (A, B, C, F).
    #include<iostream>
    using namespace std;
    int main()
    {
        float maths,sci,nepali,english;

        cout <<  "Enter marks for maths:";
        cin >> maths;

        cout <<  "Enter marks for science:";
        cin >> sci;

        cout <<  "Enter marks for nepali:";
        cin >> nepali;

        cout <<  "Enter marks for english:";
        cin >> english;

        float obtained_marks = (maths + sci + nepali + english)/4;

        if(obtained_marks>=80)
        {
            cout << "The obtained grade is A.";
        }

        else if (obtained_marks>=60)
        {
            cout << "The obtained grade is B.";
        }
        else if (obtained_marks>=40)
        {
            cout << "The obtained grade is C.";
        }
        else
        {
            cout << "The obtained grade is F";
        }
    }

