#include <iostream>

using namespace std;

//class variables is better to be put in PRIVATE.
//By making the variable a private data member, you can more easily ensure that the value is never negative. 
//On the other hand, if the variable is public, another class could change it to a negative value which can cause other parts of the code to crash.

class variable
{
    private:
        string name;
    
    //In order to access the variable from outside the class, we have to kind of "cheat". Look closely below on how to do so.
    public:
        void setName(string x)
        {
            name = x;       //This part is "setting value of the variable".
        }
        string getName()
        {
            return name;    //This part is "returning the value of the variable".
        }
};

int main()
{
    variable variableObject;
    variableObject.setName("Faaiz Haikal Hilmi");
    cout << variableObject.getName();

    return 0;
}