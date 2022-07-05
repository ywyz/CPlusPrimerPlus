/*
 * @Date: 2022-07-05 14:36:03
 * @Author: ywyz
 * @LastModifiedBy: ywyz
 * @Github: https://github.com/ywyz
 * @LastEditors: ywyz
 * @LastEditTime: 2022-07-05 14:36:08
 */
// bondini.cpp -- using escape sequences
#include <iostream>
int main()
{
    using namespace std;
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    // cin.get();
    // cin.get();
    return 0;
}
