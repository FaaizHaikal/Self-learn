#include <iostream>

using namespace std;

int volume(int l=1, int h=1, int w=1);  //With this, if the user doesn't input a parameters, then the code will run with these default paramaters
                                        //To set a default parameters or arguments, you just have to put it in your function prototype
int main()
{
    cout << "No input (default parameters): " << volume() << endl;
    cout << "Input 4, 5: " << volume(4,5) << endl;          //When you input a value, it replaces the default values sequentially
    cout << "Input 4, 5, 7: " << volume(4, 5, 7) << endl;

    return 0;
}

int volume(int l, int h, int w)
{
    return l*w*h;
}