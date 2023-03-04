#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int wnum = 5;
    //adding 1 to the value
    wnum++;
    cout << wnum << endl;
    //how to change the value 
    wnum = 9;
    //substracting 1 from the value
    wnum--;
    cout << wnum << endl;
    wnum = 9;
    wnum += 30;
    cout << wnum << endl;

    //Plus and Minus between float/double and integer will give float/double result
    cout << 5 + 3.5 << endl;
    //Multiplication and division between integers will give integer result
    cout << 10 / 3 << endl;
    //To get the actual result, change one or both of them to float/double
    cout << 10.0 / 3 << endl;

    //Modulus operation
    cout << 17 % 3 << endl;

    cout << pow(2, 6) << endl;
    cout << sqrt(36) << endl;
    cout << round(4.5) << endl;
    cout << round(4.4) << endl;
    cout << ceil(4.4) << endl;
    cout << floor(4.6) << endl;
    cout << fmax(8, 3) << endl;
    cout << fmin(8, 3) << endl;

    return 0;
}