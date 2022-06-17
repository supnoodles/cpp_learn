/*
Default constructor of Parent Class is called automatically (if we don't call it),
but if we ant to call paramterised constructor then we must call it explicityl.
 */

#include <iostream>

using namespace std;


class Parent{
    int x;
public:
    // constructors
    Parent() { cout << "Parent Default Constructor" << endl; }
    Parent(int x) : x{x} { cout << "Parent Parametrised Constructor" << endl; }
};

class Child: public Parent{
    int y;
public:
    Child() : Parent() { cout << "Child Default Constructor" << endl; }
    Child(int x, int y) : Parent(x), y{y} { cout << "Child Parametrised Constructor" << endl; }
};

int main() {
    Child c1(1, 2);
    Child c2;


    return 0;
}