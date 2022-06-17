// SYNTAX: std::vector<T>
// T is type inside vector

/*
1. vector is a sequence container, aka dynamic array or array list.
2. its size can grow and shrink dynamically, no need to provide size at compile time.

ELEMENT ACCESS
at(), [], front(), back(), data()

MODIFIERS
insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear()
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    // declarations
    vector<int> arr1;
    vector<int> arr2(5, 20);
    vector<int> arr3 = {1, 2, 3, 4, 5};
    vector<int> arr4{1, 2, 3, 4, 5};

    // accessing elements
    arr2[3] = 10;
    arr2.at(3) = 10;
}