// There are two types of polymorphism
// A. Compile Time Polymorphism (Static Binding / Early Binding)
//    a. Function Overloading
//    b. Operator Overloading
// B. Runtime Polymorphism (Dynamic Binding / Lazy Binding)
//    a. Function Overriding (using virtual functions)

/*
Dynamic Dispatch - binding of method is determined at run time depending on
                   the type of object pointed to by pointer.

Virtual specifier specifies that a non-static member function supports dynamic dispatch.
*/

#include <iostream>

using namespace std;

// // FUNCTION OVERLOADING
// class Test{
// public:
//     void fun(int x) { cout << "Integer" << endl; }
//     void fun(double x) { cout << "Double" << endl; }
// };

// int main() {
//     Test t1;
//     t1.fun(10);
//     t1.fun(10.5);
//     return 0;
// }


// // OPERATOR OVERLOADING
// class Complex{
// private:
//     int real, imagenary;
// public:
//     Complex(int r = 0, int i = 0): real{r}, imagenary{i} {}
//     Complex operator + (Complex const &rhs) {
//         Complex res;
//         res.real = real + rhs.real;
//         res.imagenary = imagenary + rhs.imagenary;
//         return res;
//     }
//     void print() { cout << real << " i" << imagenary << endl; }
// };

// int main() {
//     Complex c1(1, 3), c2(2,5);
//     Complex c3 = c1 + c2;

//     c3.print();
//     return 0;
// }


// // FUNCTION OVERRIDING example 1
// // can be achieved with reference or pointer
// class Parent{
// public:
//     // without virtual keyword, code in main() will call Parent.
//     // This is because, it only support static binding by default.
//     // with dynamic binding enabled, it is able to point to the correct
//     // method at runtime, which is in Child class.
//     virtual void fun() { cout << "Parent" << endl; }
// };

// class Child: public Parent {
// public:
//     void fun() { cout << "Child" << endl; }
// };

// int main(){
//     Parent* p = new Child();
//     p->fun();

//     return 0;
// }


// FUNCTION OVERRIDING example 2
// override keyword ensures that function is both virtual and overriding a 
// virtual function from the Parent Class.
class Parent{
public:
    // without virtual keyword, code in main() will call Parent.
    // This is because, it only support static binding by default.
    // with dynamic binding enabled, it is able to point to the correct
    // method at runtime, which is in Child class.
    virtual void fun(int x) { cout << "Parent" << endl; }
};

class Child: public Parent {
public:
    virtual void fun(int x) override { cout << "Child" << endl; }
};

int main(){

    // // with pointers
    // Parent* p = new Child();
    // p->fun(1);

    // with referenes
    Child c;
    Parent &p = c;

    p.fun(1);

    return 0;
}