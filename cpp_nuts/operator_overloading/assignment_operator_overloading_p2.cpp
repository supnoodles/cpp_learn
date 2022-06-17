// overloading  lhs = value

//1) we should only overload assignment operator when there are pointers in class.
//2) assignment is a binary operator.
//3) we shoud also create own copy constructor when overloading assignment operator (& vice versa).

// * self assignment it dangerous, so check it
// * assignment operator must be overloaded by a non-static member function only

#include <iostream>

using namespace std;

class Base{
    int x;
public:
    //constructor
    Base(int x = 0):x{x} {}
    friend class Test;
};

class Test{
    int *x;
public:
    // constructor
    Test(int val=0):x{new int(val)} {}
    void setX(int val) { *x = val; }
    void print() { cout << *x << endl; }
    // destructor
    ~Test() { delete x; }
    // asignment operator overload for Assignments of test obj = test obj
    Test& operator = (const Test& rhs) {
        // if the mem addresses of both objects are not the same. (prevents self assignmen).
        if (this != &rhs) {
            *x = *rhs.x;
        }
        return *this;
    }
    // asignment operator overload for Assignments of test obj = base obj
    Test& operator = (const Base& rhs) {
        *x = rhs.x;
        return *this;
    }
};

int main(){

    Test t1(10);
    Base b(20);

    t1 = b;

    t1.print();

    return 0;
}

