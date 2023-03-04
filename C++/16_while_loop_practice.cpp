//Using while loop, make user input 5 integers and then return the sum

#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    int num;
    int sum = 0;
    while(x <=  5)
    {
        cin >> num;
        sum = sum + num;
        x++;
    }

    cout << "Your total is: " << sum;

    return 0;
}