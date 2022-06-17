// no need to overload primitive data types, as compiler knows how to do that
// user defined data types (class, structs) does need this overloading


#include <iostream>

using namespace std;

class Rupee;
class Dollar;

class Rupee{
    double rupee;
public:
    Rupee(double d = 0):rupee(d) {}
    void print() { cout << rupee << endl; }
    // converts (typecasts) rupees to dollars
    operator Dollar();
};

class Dollar{
    double dollar;
public:
    Dollar(double d = 0):dollar{d} {}
    void print() { cout << dollar << endl; }
    // converts (typecasts) dollar to rupees
    operator Rupee () {
        return Rupee{dollar * 80};
    }
};

Rupee:: operator Dollar() {return Dollar{rupee / 80};}

int main() {
    // Dollar d(10);
    // Rupee r;

    // // calls line 26
    // r = d;
    // r.print();

    Rupee r(800);
    Dollar d;

    d = r;
    d.print();

    return 0;
}