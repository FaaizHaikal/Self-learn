#include <iostream>

using namespace std;

class printsomething
{
    public:
        printsomething(string z)    //This constructor now has parameter z
        {
            setName(z);
        }
        void setName(string x)
        {
            name = x;
        }
        string getName()
        {
            return name;
        }
    private:
        string name;
};

int main()
{
    printsomething print("I'm Faaiz Haikal Hilmi");
    cout << print.getName() << endl;

    printsomething print2("I want to learn C++");
    cout << print2.getName();

    return 0;
}