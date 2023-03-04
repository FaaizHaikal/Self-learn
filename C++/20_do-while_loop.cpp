#include <iostream>

using namespace std;

int main()
{
    //If the while statement is FALSE, the code inside curly bracket will be run once.
    //if the while statement is TRUE, the code inside curly bracket will run just like while loop.

    int x = 50;
    do
    {
        cout << x << endl;
        x++;
    } while (x < 5);
    
    int y = 1;
    do
    {
        cout << y << endl;
        y++;
    } while (y<5);
     
    return 0;
}