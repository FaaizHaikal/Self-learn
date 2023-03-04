#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0)); //To change the algorithm every second so we get random numbers every second

    for(int i = 0; i<25; i++)
    {
        cout << rand() << endl;
    }

    return 0;
}