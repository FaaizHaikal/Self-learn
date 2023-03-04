#include <iostream>

using namespace std;
//Unary Scope Resolution Operator is to access a global variable when there is a local variable with a same name
//Global variable is a variable outside of function and it can be used in all functions, while local variable is inside a function and can only be used inside that function
//Unary Scope Resolution Operator is noted ::

int x = 69; //This is global variable

int main()
{
    int x = 96; //This is local variable
    cout << x << endl;
    cout << ::x << endl;

    return 0;
}