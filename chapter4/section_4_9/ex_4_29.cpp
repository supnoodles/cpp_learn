#include <iostream>
#include <string>

using namespace std;

int main()
{

int x[100]; int *p = x;
// int has 32 bits -> 4 bytes.
// int pointer has 64 bits (on 64 bit system) -> 8 bytes
// 40/4 = 10
cout << sizeof(x)/sizeof(*x) << endl;
// 8/4 = 2. 
cout << sizeof(p)/sizeof(*p) << endl;

}