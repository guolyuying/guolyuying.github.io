#include <iostream>
using namespace std;

double cube(double num)
{
    return num * num * num;
    cout << "This line will never get printed out"; // because a function stops executing after return
}

int main()
{
    cout << cube(5);
    
    return 0;
}