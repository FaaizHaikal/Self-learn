#include <iostream>

using namespace std;

//Constructors is a function that gets called/runned automatically as soon as you create an object
class printsomething
{
    public:
        printsomething()  //the constructor name is the SAME as the class name
        {
            cout << "This function will run automatically when you created the class object";
        }
};

int main()
{
    printsomething print;

    return 0;
}