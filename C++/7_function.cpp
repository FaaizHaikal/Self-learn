#include <iostream>

using namespace std;

void printsomething();
int x, y;
void printcrap(int x, int y);
//Defining a function below the main function, but then declaring it again above main is called "FUNCTION PROTOYPE"

int main()
{
    printsomething();
    cout << "Enter two numbers :";
    cin >> x >> y;
    printcrap(x, y);

    return 0;
}

//void is a function that doesn't give anything in return
void printsomething()
{
    cout << "This function is to print something\n";
}

void printcrap(int x, int y)
{
    cout << "My favorite number is " << x << " and " << y;
} 