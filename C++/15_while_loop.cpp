#include <iostream>

using namespace std;

int main()
{
    int x = 2;
    while(x < 11)    //as long as the statement inside the parentheses is true, the code inside will always run until the statement is false
    {
        cout << "Fuck me " << x << " times" << endl;
        x++;
    }

    return 0;
}