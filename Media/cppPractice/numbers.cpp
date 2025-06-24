#include <iostream>
#include <cmath> // import math functions

using namespace std;

int main()
{
    
    cout << 7 << endl;
    cout << 7 + 5 << endl;
    cout << 7 - 5 << endl;
    cout << 7 * 5 << endl;
    cout << 7 / 5 << endl;
    cout << 7 % 5 << endl; // 7 mod 5

    // PEMDAS
    cout << 4 + 5 * 10 << endl;
    cout << (4 + 5) * 10 << endl;

    // Declare numbers
    int wnum = 5;
    double dnum = 5.5;

    // Shorthands
    wnum++;
    wnum--;
    wnum += 80;
    wnum -= 80;
    wnum *= 80;
    wnum /= 80;
    cout << wnum << endl;

    // Math between integers & decimals
    cout << 5.5 + 9 << endl; // returns decimal
    cout << 10 / 3 << endl; // returns integer
    cout << 10 / 3.0 << endl; // returns decimal

    // Use imported math functions
    cout << pow(2, 5) << endl; // power
    cout << sqrt(36) << endl; // square root 
    cout << round(4.3) << endl; // 四舍五入
    cout << ceil(4.3) << endl; // 入
    cout << floor(4.3) << endl; // 舍
    cout << fmax(3, 10) << endl; // return bigger number
    cout << fmin(3, 10) << endl;
    cout << sin(0) << endl;

    return 0;
}