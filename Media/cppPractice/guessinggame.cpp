#include <iostream>

using namespace std;

int main()
{
    
    int secretNum = 7;
    int guess;

    while(secretNum != guess)
    {
        cout << "Enter a guess: ";
        cin >> guess;
    }

    cout << "You got it!" << endl;
    
    return 0;
}