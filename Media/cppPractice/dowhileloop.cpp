#include <iostream>

using namespace std;

void countdown(int i)
{
    do
    {
        cout << i << endl;
        i--;
    }
    while(i > 0); // execute the block of code once before checking this while() condition
                  // if condition is true, keep execute the block of code
    cout << "Happy New Year!" << endl;
}

int main()
{

    countdown(5);
    return 0;
}