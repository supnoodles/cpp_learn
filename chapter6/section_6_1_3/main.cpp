#include <string>
#include <iostream>
#include "Chapter6.h"

using std::cout;

int main()
{
    int x = interact();
    cout << fact(x);
}

// g++ defs.cpp main.cpp -o main 