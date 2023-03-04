//function overloading is creating multiple functions with the SAME NAME, but difft TYPE and/or AMOUNT OF PARAMETERS

#include <iostream>

using namespace std;

void printNumber(int x)
{
    cout << "Function printNumber to print integer " << x << endl;
}

void printNumber(double x)
{
    cout << "Function printNumber to print double " << x << endl;
}

int main()
{
    int a = 1;
    double b = 0.01;

    printNumber(a);
    printNumber(b);

    return 0;
}