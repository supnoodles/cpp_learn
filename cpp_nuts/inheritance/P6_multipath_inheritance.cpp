//Multipath Inheritance
//Child class with two Parent Classes who also have a common Parent Class.

#include <iostream>

using namespace std;

// class Human{
// public:
//     void breathing() { cout << "I am breathing" << endl; }
// };
// class Youtuber: public Human{};
// class Engineer: public Human{};
// class Rupesh: public Youtuber, public Engineer{};

// int main() {
        
//     // ambiguous error
//     // because there are two paths to human
//     // 1) Rupesh -> Youtuber -> Human
//     // 2) Rupesh -> Engineer -> Human
//     Rupesh r;
//     r.breathing();

//     return 0;
// }

// we solve the above problem with virtual inheritance
// virtual inheritance ensures that only one copy of a Parent's class members are inherited by grandchild.

class Human{
public:
    void breathing() { cout << "I am breathing" << endl; }
};
class Youtuber: public virtual Human{};
class Engineer: public virtual Human{};
class Rupesh: public Youtuber, public Engineer{};

int main() {

    // no ambiguous error due to virtual inheritance.
    Rupesh r;
    r.breathing();

    return 0;
}