//You want to invest to a company with 10000 USD. Everyday, you earn profit for 1%. Return how much money you have each day after you invested!

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a = 10000;
    float r = 0.01;
    float total;

    for(int i = 1; i<=30; i++)
    {
        total =  a * pow(1+r, i);
        cout << "Your money after "<< i << " day is " << total << endl;
    }

    return 0;
}