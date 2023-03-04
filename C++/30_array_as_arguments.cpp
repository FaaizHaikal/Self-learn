#include <iostream>

using namespace std;
void printArray(int array[], int sizeOfArray);

int main()
{
    int firstArray[3] = {15, 123, 62};
    int secondArray[5] = {24, 51, 20, 32, 90};

    printArray(firstArray, 3); //The reason why we don't add [] like in void is because it already knows that it's an array
    cout << "" << endl;
    cout << "" << endl;
    printArray(secondArray, 5);

    return 0;
}

void printArray(int array[], int sizeOfArray) //Make sure to add [] so the function knows that the parameter needed is an array, not an integer
{
    for(int i=0; i<sizeOfArray; i++)
    {
        cout << array[i] << endl;
    }
}