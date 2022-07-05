/*
 * @Date: 2022-07-05 11:22:47
 * @Author: ywyz
 * @LastModifiedBy: ywyz
 * @Github: https://github.com/ywyz
 * @LastEditors: ywyz
 * @LastEditTime: 2022-07-05 11:29:47
 */
#include <iostream>
#define ZERO 0
#include <climits>
int main()
{
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sam has " << sam << "Dollars and Sue has " << sue;
    cout << " dollars deposited. " << endl
         << "Add $1 to each account. " << endl
         << "Now ";
    sam = sam + 1;
    sue = sue + 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\nPoor Sam!" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << "Dollars and Sue has " << sue;
    cout << " dollars deposited. " << endl
         << "Take $1 from each account. " << endl
         << "Now ";
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "lucky Sue! " << endl;
    return 0;
}