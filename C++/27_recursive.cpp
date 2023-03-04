//Recursive is basically using function inside the body of the function itself, so the function will keep running repeatedly until it meets the base case (ending point).

#include <iostream>

using namespace std;

int factorial(int x)
{
    if(x == 1)
    {
        return x = 1;   //This is the base case
    }
    else
    {
        return x*factorial(x-1);
    }
}

int main()
{
    cout << factorial(5);
    //Based on the function, this will run 5*factorial(4), but what is factorial(4)?
    //It will run again to find factorial(4), which is 4*factorial(3), now what is factorial(3)?
    //It will run again to find factorial(3), which is 3*factorial(2), now what is factorial(2)?
    //It will run again to find factorial(2), which is 2*factorial(1). now what is factorial(1)?
    //Based on the function, factorial(1) is                //so the function will stop repeating since it already meets it's base case 
    //Therefore factorial(2) is 2*1
    //Therefore factorial(3) is 3*2*1
    //Therefore factorial(4) is 4*3*2*1
    //Therefore factorial(5) is 5*4*3*2*1
}
