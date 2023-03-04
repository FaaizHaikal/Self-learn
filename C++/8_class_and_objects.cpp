#include <iostream>

using namespace std;

class print
{
    //public means all the function can be accessed outside the class.
    public:
        void print1()
        {
            cout << "This is the first function" << endl;
        }
        void print2()
        {
            cout << "This is the second function" << endl;
        }
};

int main()
{
    //In order to access a class, you have to create an object first. Look closely below on how to do so.
    print printobject;
    printobject.print1();
    printobject.print2();

    return 0;
}