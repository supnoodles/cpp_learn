// SYNTAX: std::array<T,n> array;
// T is type inside array
// n is array size

// It's more mem efficient than std::vector, but it's fixed size.

/*
1. std::aray is a container that encapsulates fixed size arrays
2. array size is needed at compile time
3. Access Elements:
   a. at()   - with bounds checking
   b. []     - without bounds checking
   c. front()- first element
   d. back() - last element
   e. data() - direct access to the underlying array (pointer)
*/

#include <iostream>
#include <array>

using namespace std;

int main() {
    //declare
    array<int, 5> myarray;

    //initialisation
    array<int, 5> myarray = {1, 2, 3, 4, 5}; // initialiser lsit
    array<int, 5> myarray2 = {1, 2, 3, 4, 5}; // uniform initialisation

    // assign using initialiser list
    array<int, 5> myarray3;
    myarray3 = {1, 2, 3, 4, 5};
}