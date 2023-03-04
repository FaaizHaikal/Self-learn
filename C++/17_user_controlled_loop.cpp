//Using while loop, make a program where user can input as many age as they want and then return the average

#include <iostream>

using namespace std;

int main()
{
    int age;
    int totalAge = 0;
    int totalPeople = 0;
    
    cout << "Enter first age or -1 to quit: ", cin >> age;

    while(age != -1)
    {
        cout << "Enter next age or -1 to quit: ", cin >> age;
        totalPeople++;
        totalAge += age;
    }

    cout << "The average is: " << totalAge/totalPeople;

    return 0;
}