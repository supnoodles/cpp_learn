#include <iostream>

using namespace std;

int main()
{
    // invalid. pi is evaluated to a null ptr.
    // but ival is an int and cannot be equal to a null pointer.
    // double dval;
    // int ival;
    // int *pi;
    // dval = ival = pi = 0;

    // corection
    double dval;
    int ival;
    int *pi;
    pi = 0;
    dval = ival = 0;

}