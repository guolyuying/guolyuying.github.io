#include <iostream>

using namespace std;

// Function declarations (prototype, or signature) - above main()
void sayHi();  // declare return type before function name - "void" means the function doesn't return anything
void sayHi2(string name, int age);

int main() // main() is a special function that gets executed when we run the program
{
    // call your own function inside main() function
    sayHi();

    // reuse function with different args
    sayHi2("Lyuying", 25);
    sayHi2("Parwesh", 28);

    return 0;
}

// Function definitions - below main()
void sayHi()
{
    cout << "Hello User" << endl;
}

void sayHi2(string name, int age)
{
    cout << "Hello " << name << " You are " << age << endl;
}