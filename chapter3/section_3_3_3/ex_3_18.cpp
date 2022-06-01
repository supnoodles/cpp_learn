#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{   
    // illegal since that space in memory does not yet exist.
    // vector<int> ivec;
    // ivec[0] = 42;

    vector<int> ivec;
    ivec.push_back(42);
}