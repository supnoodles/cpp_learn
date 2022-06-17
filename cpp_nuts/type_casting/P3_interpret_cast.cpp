// syntax: reinterpret_cast< new_type >(expression);
// it can perform dangerous conversions because it can typecast any pointer
// to any other other pointer

// since you are palying with bits, becomes non portable
// no abstraction from hardware

#include <iostream>

using namespace std;

// class Mango {
// public:
//     void eatMango() { cout << "eating Mango" << endl; }
// };

// class Banana {
// public:
//     void eatBanana() { cout << "eating Banana" << endl; }
// };

// int main() {
//     Banana *b = new Banana();
//     Mango *m = new Mango();

//     Banana *newbanana = reinterpret_cast<Banana *>(m);
//     newbanana->eatBanana();

// }


// case 2: used when you want to work with bits

struct myStruct {
    int x; // 4 bytes
    int y; // 4 bytes
    char c; 
    bool b; // c + b go into 4 bytes
};

int main() {
    myStruct s;
    s.x = 5;
    s.y = 10;
    s.c = 'a';
    s.b = true;

    // fits into 4 bytes int pointer
    int *p = reinterpret_cast<int *>(&s);

    // s.x = 5
    cout << *(p) << endl;
    // s.y = 10
    cout << *(p+1) << endl;

    // 4 byte mem address contains both s.c and s.b
    // cout << *(p+2) << endl;

    // to get actual value
    char *c = reinterpret_cast<char *>((p + 2));
    cout << *c << endl;

    // increment one position in 3rd 4 byte space, to get to 9th pos and get bool
    bool *b = reinterpret_cast<bool *>((c+1));
    cout << *b << endl;

    return 0;
}