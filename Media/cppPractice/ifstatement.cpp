#include <iostream>

using namespace std;

int main()
{
    bool isMale = true;
    bool isTall = false;

    if (isMale && isTall)
    {
        cout << "You are a tall male";
    } else if (!isMale && isTall)
    {
        cout << "You are a tall female";
    } else if (isMale && !isTall)
    {
        cout << "You are a short male";
    } else
    {
        cout << "You are a short female";
    }

    return 0;
}