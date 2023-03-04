//Basically pointers is a special type of variable that stores the address of another variable

#include <iostream>

using namespace std;

int main()
{
    //For example we have an integer variable
    int num = 9;
    cout << &num << endl;   //& is the address operator. When you run this, you will what is the address of variable num

    //To make a pointer: DataType *pointername;
    int *numPointer;
    numPointer = &num;

    cout << numPointer << endl;

    return 0;
}