#include <iostream>
#include <string>

using namespace std;

int main()
{
    float fval = 0.001;
    double dval = 3.3;
    int ival = 3;
    char cval = 'B';

    // if (fval) executes if  fval != 0

    // dval = fval + ival; 3.001, no truncation in specific case

    // dval + ival * cval;
    // cval int equivalent is 66
    // so we have 3.3 + (3*66) = 201.3
 }