#include <iostream>

int main()
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    // sets r2 to 3.14159, because it sets d to 3.14159
    r2 = 3.14159;
    // r2 refers to i
    r2 = r1;
    // i refers to d ?
    i = r2;

    // // prints 10 10
    // int i, &ri = i;
    // i = 5;
    // ri = 10;
    // std::cout << i << " " << ri << std::endl;
}