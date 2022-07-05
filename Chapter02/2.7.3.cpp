//  Write a C++ program that yses three user-defined function

#include <iostream>

using namespace std;
void blind();
void run();
int main()
{
    blind();
    blind();
    run();
    run();
}

void blind()
{
    cout << "Three blind mice" << endl;
}

void run()
{
    cout << "See how they run" << endl;
}