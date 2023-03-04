//MD Array is basically an array inside an array
//MD Array can also be interpreted as coordinates
//The notations is : DataType ArrayName[x][y] = {{el1, el2, .., ely}, {el1', el2', ..,ely'}, ... array-x}
//We can say x = row and y = column
#include <iostream>

using namespace std;

int main()
{
    int array[2][3] = {{1,2,3},{7,8,9}};
    //Visually this array will look like below.
    // Index   0 1 2

    //   0     1 2 3
    //   1     7 8 9

    cout << "Element located in (0,1) is " << array[0][1] << endl;
    cout << "Element located in (1,2) is " << array[1][2] << endl;

    return 0;
}