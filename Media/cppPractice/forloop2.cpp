#include <iostream>

using namespace std;

int main()
{
    // Using for loop to iterate through an array

    string menu[] = {"Ramen", "Sushi", "Karage", "Seaweed", "Bao", "Low Mein"};

    int menuLength = sizeof(menu) / sizeof(menu[0]); //https://www.w3schools.com/cpp/cpp_arrays_size.asp
    for(int i = 0; i < menuLength; i++)
    {
        cout << menu[i] << endl;
    }

    return 0;
}