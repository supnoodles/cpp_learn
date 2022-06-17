// overloading new and delete operator gives developer more flexibility for heap allocation

/*
local overloading is when new and del operators are overloaded for a particular class/struct
syntax for overloading new operator: void* operator new (size_t size);
syntax for overloading del operator: void operator delete (void *);

Both new and del operators are static member functions. So they don't have access to "this" pointer. Since
they are automatically static, we do not need to use the static keyword.

Don't forget to overload array version of new/del.
int* x = new int[10];

We can have multiple overloaded new/del operator functions (with different parameters)
*/

#include <iostream>

using namespace std;


// // LOCAL NEW/DEL OVERLOADING
// class Test{
//     int x;
// public:
//     //constructor
//     Test(int x = 0):x{x} {}
//     // overload new op
//     void* operator new(size_t size){
//         cout << "overlaoded new operator size: " << size << endl;
//         void *p = malloc(size);
//         return p;
//     }
//     // overload del op
//     void operator delete(void * p){
//         cout << "Overloaded Delete Operator" << endl;
//         free(p);
//     }
// };

// int main(){
//     // will be size 4 bytes due to the int x
//     Test *t = new Test();
//     delete t;
// }


// GLOBAL NEW/DEL OVERLOADING

// overload new op
void* operator new(size_t size){
    cout << "overlaoded new operator size: " << size << endl;
    void *p = malloc(size);
    return p;
}

// overload del op
void operator delete(void * p){
    cout << "Overloaded Delete Operator" << endl;
    free(p);
}


// // overload new op (array version)
// void* operator new [](size_t size){
//     cout << "array overlaoded new operator size: " << size << endl;
//     void *p = malloc(size);
//     return p;
// }

// // overload del op (array version)
// void operator delete [](void * p){
//     cout << "array Overloaded Delete Operator" << endl;
//     free(p);
// }

int main(){
    // will be size 4 bytes due to the int x
    int *x = new int;
    delete x;

    // // will be size 40
    // int *y = new int[10];
    // delete[] y;
}