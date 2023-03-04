//For all this time, whenever we make a function that needs a parameters, we always put in a values and/or copy of the values
//Now what we're doing is pass by reference which means we're going to put in the variable address as parameters
//That way, unlike pass by values, the function will have direct access to the values itself
//Therefore, the function can change the value

#include <iostream>

using namespace std;

void passByValue(int x);
void passByReference(int *x);

int main()
{
    int A = 99;
    int B = 99;

    passByValue(A);
    passByReference(&B);

    cout << "A is now " << A << endl;
    cout << "B is now " << B << endl;

    return 0;
}

void passByValue(int x)
{
    x = 34;
}
void passByReference(int *x)
{
    *x = 69;
}