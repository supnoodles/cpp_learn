// syntax: dynamic_cast< new_type > (expression)

// dynamic_cast is used at run time to find out the correct down-cast
//      P
//   c1    c2

// 1) needs atleast oen virtual function in parent class
// 2) if cast successful, dynamic_cast returns a value of new_type
// 3) if cast fails and new_type is pointer type, it returns a null pointer of that type.
// 4) if cast fails and new_type is a ref type, it throws an exception that matches a handler of std::bad_cast

#include <iostream>

using namespace std;

class Parent{
    virtual void print() { cout << "Parent" << endl; }
};

class Child1: public Parent {
    void print() { cout << "Child1" << endl; }
};

class Child2: public Parent {
    void print() { cout << "Child2" << endl; }
};  

int main() {
    Child1 c1;

    // correct
    Parent *p = dynamic_cast<Parent *>(&c1);
    Child1 *p2 = dynamic_cast<Child1 *>(p);

    // fails, returns null pointer
    Parent *p = dynamic_cast<Parent *>(&c1);
    Child2 *p2 = dynamic_cast<Child2 *>(p);

    cout << p2;
    return 0;
}