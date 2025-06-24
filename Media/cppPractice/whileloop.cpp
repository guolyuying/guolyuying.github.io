#include <iostream>

using namespace std;

void countdown(int i)
{
    while(i > 0)
    {
        cout << i << endl;
        i--;
    }
    cout << "Happy New Year!" << endl;
}

int main()
{
    
    countdown(5);

    return 0;
}