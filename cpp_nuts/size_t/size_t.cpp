// size_t data type in cpp
// it's a special type of unsigned int type 
/*
1. It's guaranteed to be big enough to contain size of biggest object that system can handle
    e.g. 32 bit vs 64 bit compilers
    32 bit - it's typedef of unsigned int
    64 bit - it's typedef of unsigned long long
2. It's NEVER NEGATIVE.
3. Standard function use this type 
    a. malloc (size_t)
    b. memcpy (destination, source, size_t)
    c. size_t strlen (const char*)
*/

#include <iostream>

using namespace std;

int main(){

    size_t x = 2;

    cout << x << endl;

    return 0;
}