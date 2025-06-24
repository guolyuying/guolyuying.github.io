#include <iostream>

using namespace std;

int main()
{

    int age1;
    //int age2;
    string name1;
    //string name2;

    cout << "Enter your age: "; // cout << prints out data
    cin >> age1; // cin >> stores int, double, char

    //cout << "Enter your mom's age: ";
    //cin >> age2;

    cin.ignore(); // removes one character from the buffer. in this case, a /n leftover from previous cin >>

    cout << "Enter your name: ";
    getline(cin, name1); // getline(cin, variableName) stores a whole line of info, usually strings

    //cout << "Enter your mom's name: ";
    //getline(cin, name2);
    
    cout << "Hello " << name1 << ", You are " << age1 << " years old.";

    return 0;
}