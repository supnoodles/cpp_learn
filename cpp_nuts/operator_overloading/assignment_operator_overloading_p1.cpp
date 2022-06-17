// overloading  lhs = value

//1) we should only overload assignment operator when there are pointers in class.
//2) assignment is a binary operator.
//3) we shoud also create own copy constructor when overloading assignment operator (& vice versa).

// * self assignment it dangerous, so check it
// * assignment operator must be overloaded by a non-static member function only

#include <iostream>

using namespace std;


class Test{
    int *x;
public:
    // constructor
    Test(int val=0):x{new int(val)} {}
    void setX(int val) { *x = val; }
    void print() { cout << *x << endl; }
    // destructor
    ~Test() { delete x; }
    // asignment operator overload
    Test& operator = (const Test& rhs) {
        // if the mem addresses of both objects are not the same. (prevents self assignmen).
        if (this != &rhs) {
            *x = *rhs.x;
        }
        return *this;
    }
};

int main(){

    Test t1(10);
    Test t2;
    t2 = t1;
    
    t1.setX(20);
    t1.print();
    t2.print();

    return 0;
}

// class Test{
//     int *x;
// public:
//     // constructor
//     Test(int val=0):x{new int(val)} {}
//     void setX(int val) { *x = val; }
//     void print() { cout << *x << endl; }
//     // destructor
//     ~Test() { delete x; }
// };

// int main(){

//     // without assignment op overload, this will print 20 for t1 and 20 for t2.
//     // this is because during t2=t1, the pointer in t2 points to where pointer in t1 points.
//     // This is not what we intended.
//     Test t1(10);
//     Test t2;
//     t2 = t1;
    
//     t1.setX(20);
//     t1.print();
//     t2.print();

//     return 0;
// }