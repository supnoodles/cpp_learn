/*
There are 4 types of cast available in cpp:
1. const cast
2. static cast
3. dynamic cast
4. reinterpret cast

const_cast is used to remove the "const" from pointers & references.
the ultimate type that is being pointed/referred to must not be const. (otherwise,
 undefined behaviour !! no error.)
 ONLY USE WHEN YOU HAVE TO.

The expression const_cast<T>(v) can be used to change the const or volatile qualifiers of pointers or references,
where T is the pointer or reference, or pointer to member type that is being casted to.
v is what we want casted.
 */

#include <iostream>

using namespace std;

// // CASE 1 - changed constness of a const pointer or ref
int main() {

    // // INVALID AND UNDEFINED BEHAVIOUR, because we are trying to change
    // // a1 which is const.
    // const int a1 = 10;
    // const int *b1 = &a1;
    // int *d1 = const_cast<int *>(b1);
    // *d1 = 15;

    // // VALID
    // int a2 = 20;
    // const int *b2 = &a2;
    // int *d2 = const_cast<int *>(b2);
    // *d2 = 30;
    // cout << a2;
}

// CASE 2 - must call a 3rd party lib where it's taking pointer/ref and not a const pointer/ref.

// void thirdPartyLibrary(int* x) {
//     int k = 10;
//     cout << k + *(x);
// }

// int main() {
//     const int x = 20;
//     const int *px = &x;
//     thirdPartyLibrary(const_cast<int*>(px));
// }