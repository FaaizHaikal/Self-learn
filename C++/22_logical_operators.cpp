#include <iostream>

using namespace std;

//A logical operator is a symbol or word used to connect two or more expressions
//Common logical operators include AND, OR, and NOT.
//&& is logical AND. It returns true if both statements are true
//|| is logical OR. It returns true if one of the statements is true
//! is logical NOT. It reverse the result, returns false if the result is true

int main()
{
    int age, money;
    cout << "Enter your age: ", cin >> age;
    cout << "How much money you have? ", cin >> money;

    if(age > 21 && money > 500)
    {
        cout << "You are allowed to go in!" << endl;
    }
        else if(age > 21 || money > 500)
        {
            cout << "You are allowed to go in, but only 1 hour." << endl;
        }
        else
        {
            cout << "Please leave." << endl;
        }
    
    int x;
    cout << "Enter a number: ", cin >> x;
    if(!(x > 5))
    {
        cout << "Your number is smaller than 5" << endl;
    }
    else
    {
        cout << "Your number is greater than 5" << endl;
    }

    return 0;
}