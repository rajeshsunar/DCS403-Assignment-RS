// Demonstrate the difference between global, local, and static local variables.


#include <iostream>
using namespace std;

int globalVar = 10;

void demoFunction() 
{

    int localVar = 5;

    static int staticVar = 1;

    cout << "Local variable: " << localVar << endl;
    cout << "Static local variable: " << staticVar << endl;

    localVar++;
    staticVar++;
}

int main() {
    cout << "Global variable: " << globalVar << endl;

    demoFunction();
    demoFunction();

    return 0;
}
