#include <iostream>

using namespace std;

int main()
{
    cout << "Giraffe Academy" << endl; // endl means print on new line
    cout << "Hello" << endl;

    cout << "Giraffe Academy"; // without endl, it does not print on new line
    cout << "Hello" << endl;

    cout << "Giraffe Academy\n"; // \n means print new line
    cout << "Hello" << endl;

    string phrase = "Giraffe Academy";
    cout << phrase << endl;

    // string functions

    cout << phrase.length() << endl;

    cout << phrase[0] << endl;
    phrase[0] = 'B';
    cout << phrase << endl;

    cout << phrase.find("ffe", 0) << endl; // starting index 0, look for phrase "ffe"

    string phrasesub = phrase.substr(8, 3); // starting index 8, grab 3 characters
    cout << phrasesub << endl;

    return 0;
}