#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ", cin >> age;

    //switch case statement evaluates a given expression and based on the evaluated value (matching a certain condition)
    switch(age)
    {
        case 17:
            cout << "Congratulations you can get an ID card!" << endl;
            break;  //break means to end the switch
        case 18:
            cout << "You can now watch porn!" << endl;
            break;
        case 21:
            cout << "You can drink alcohol!" << endl;
            break;
        default:    //default is if none of the case was true, then the code inside default will run
            cout << "You get nothing." << endl;
    }

    return 0;
}