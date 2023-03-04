#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter an age number: ", cin >> x;
    if(x > 60)
    {
        if(x > 100)
        {
            if(x > 150)
            {
                cout << "You should be dead.";
            }
            else
            {
                cout << "How are you alive?";
            }
        }
        else
        {
            cout << "Wow, you're a boomer.";
        }
    }
        else if(x > 18)
        {
            if(x > 40)
            {
                cout << "Getting older, fam?";
            }
            else
            {
                cout << "I want fuck you.";
            }
        }
        else
        {
            cout << "Shit.";
        }

    return 0;
}