#include <iostream>

int main(){
    int ar[2] = {0, 1};
    int *x0, *x1;
    x0 = &ar[0];
    x1 = &ar[1];
    std::cout << "x0 is at " << x0 << ". Value is " << *x0 << std::endl;
    std::cout << "x1 is at " << x1 << ". Value is " << *x1 << std::endl;
    x0 += 1; //Now pointer x0 is pointing to ar[1]
    std::cout << "x0 is at " << x0 << ". Value is " << *x0 << std::endl;
    std::cout << "x1 is at " << x1 << ". Value is " << *x1 << std::endl;
}