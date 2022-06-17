// << & >> overloading
// << extraction operator
// >> insertion in stream operator

// cin >> x; (cin is an istream object). It uses insertion operator.
// cout << x; (cout is an ostream object). It uses extraction operator.

// goal is to make cin and cout accept a user defined data type (class).

#include <iostream>

using namespace std;

class Test{
    int x;
public:
    // constructor
    Test(int x = 0):x{x} {}
    // friend fcts so that x is accessible by functions
    friend istream &operator>>(istream &, Test &);
    friend ostream &operator<<(ostream &, Test &);
};

istream& operator >> (istream& input, Test& obj){
    input >> obj.x;
    return input;
}

ostream& operator << (ostream& output, Test& obj){
    output << obj.x << endl;
    return output;
}

int main(){
    Test t;
    cin >> t;
    cout << t;

}