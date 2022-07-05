#include <iostream>
#include <iterator>
using namespace std;
float distance(float);
int main()
{
    float years;
    cout << "Enter the number of light years: ";
    cin >> years;
    cout << years << " light years = " << distance(years) << " astronmical units.";
    return 0;
}

float distance(float value)
{
    return value *63240;
}