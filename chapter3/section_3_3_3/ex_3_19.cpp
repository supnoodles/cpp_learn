#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{   
    vector<int> vec1{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> vec2(10, 42);
    vector<int> vec3 = vec2;
}