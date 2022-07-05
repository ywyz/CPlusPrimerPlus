/*
 * @Date: 2022-07-05 11:36:04
 * @Author: ywyz
 * @LastModifiedBy: ywyz
 * @Github: https://github.com/ywyz
 * @LastEditors: ywyz
 * @LastEditTime: 2022-07-05 11:36:26
 */
#include <iostream>
int main()
{
    using namespace std;
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << "(42 in decimal)\n";
    cout << hex;
    cout << "waist = " << waist << "(0x42 in hex)\n";
    cout << oct;
    cout << "inseam = " << inseam << "(042 in octal)\n";
    return 0;
}