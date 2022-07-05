#include <iostream>
using namespace std;

float Celsius(int);

int main()
{
    int value;
    cout << "Please enter a Celsius value: ";
    cin >> value;
    cout << value << " degrees Celsius is " << Celsius(value) << " degrees Fahrenheit.";
    return 0;
}

float Celsius(int value)
{
    return value * 1.8 + 32;
}