#include <iostream>

using namespace std;

int main()
{
    
    int secretNum = 7;
    int guess;

    do
    {
        cout << "Enter a guess: ";
        cin >> guess;
    }
    while(secretNum != guess);

    cout << "You got it!" << endl;
    
    return 0;
}