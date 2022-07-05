/*
 * @Date: 2022-07-05 11:31:45
 * @Author: ywyz
 * @LastModifiedBy: ywyz
 * @Github: https://github.com/ywyz
 * @LastEditors: ywyz
 * @LastEditTime: 2022-07-05 11:35:05
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
    cout << "waist = " << waist << "(0x42 in hex)\n";
    cout << "inseam = " << inseam << "(042 in octal)\n";
    return 0;
}