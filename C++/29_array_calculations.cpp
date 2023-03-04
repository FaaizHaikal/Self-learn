//Make an array of integers and then find the sum of the elements

#include <iostream>

using namespace std;

int main()
{
    int array[4] = {62, 21, 74, 39};
    int sum = 0;
    for(int i=0; i<4; i++)
    {
        sum += array[i];
    }

    cout  << "The sum is " << sum;
}