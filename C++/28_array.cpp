#include <iostream>

using namespace std;

//Array is basically a collection of similar data elements stored at contiguous memory locations
//To create array by initializing list : DataType ArrayName[TotalElements] = {Element 1, Element 2, ..}
//Element 1 is located as index 0, Element 2 as index 1, and so on

int main()
{
    cout << "Array with initializing list" << endl;
    int arrayThatStoresIntegers[5] = {23, 42, 13, 84, 25};
    cout << "Index 0 is " << arrayThatStoresIntegers[0] << endl;

    //When you're dealing with a lot of elements and you want to create an array for it, it's better to use loop.
    //Array with loop
    cout << "Array with loop" << endl;
    cout << "Index - Element" << endl;
    int arrayloop[10];
    for(int i=0; i<10; i++)
    {
        arrayloop[i] = 40;
        cout << i << "---------" << arrayloop[i] << endl;
    }

    return 0;
}