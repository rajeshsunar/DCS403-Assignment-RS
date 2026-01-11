// Write a C++ program that converts a temperature value from Celsius to Fahrenheit.
#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;
    const float NINE = 9;
    const float FIVE = 5;
    const float THIRTY_TWO = 32;
    cout << "Enter Celcius value to convert: ";
    cin >> celsius;
    fahrenheit = (celsius * NINE / FIVE) + THIRTY_TWO;
    cout << celsius <<" degree celcius is equal to " << fahrenheit <<" degree Fahrenheit";
    return 0;
}
