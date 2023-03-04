#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    if(x > 5)   //if the statement inside the parentheses is true, it's going to run the code inside the curly bracket
    {
        cout << "x is greater than 5";
    }
    
    int y = 30;
    if(y < 5)   //because the statement inside the parentheses is false, then the code inside the curly bracket won't run
    {
        cout << "y is lower than 5";
    }

    return 0;
}