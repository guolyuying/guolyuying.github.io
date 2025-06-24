#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int luckynums[] = {34, 89, 55, 4, 100}; // declares an array with specified data
    cout << luckynums << endl; // prints out array's memory address in computer. will be different every time because of ASLR
    cout << luckynums[0] << endl; // prints out data stored in index 0 of array

    luckynums[0] = 99; // modifies data stored in array
    cout << luckynums[0] << endl; // prints out updated data stored in index 0 of array

    int ages[20]; // delares an array with specified number of slots, but no specified data
    ages[10] = 21; // fills a specified slot with data
    cout << ages[10] << endl; // prints out the new data we just filled in

    return 0;
}