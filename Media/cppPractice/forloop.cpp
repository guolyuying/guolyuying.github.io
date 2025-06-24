#include <iostream>

using namespace std;

void countdown(int i)
{
    for(int num = i; num > 0; num--)
    {
        cout << num << endl;
    }
    cout << "Happy New Year!" << endl;
}

int main()
{
    
    countdown(7);

    return 0;
}