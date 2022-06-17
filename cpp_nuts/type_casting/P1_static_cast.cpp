/*
static_cast performs implicit conversions between types

expression static_cast<T>(v) takes T, which is what type is being casted to,
and v is what is being casted.

Q: why use static_cast when implcit conversion is involved?
A: because C-Style cast is hard to find in code.
*/

#include <iostream>
#include <string>

using namespace std;

// // case 1: easier to debug implicit casts in code
// int main(){
//     float f = 3.5;
//     int a;

//     a = static_cast<int>(f);

//     cout << a << endl;

//     return 0;
// }

// case 2: when conversion between types if provided through conversion operator or constructor.
// class Int {
//     int x;
// public:
//     Int(int x = 0) : x{x} { cout << "conversion constructor" << endl; }
//     // conversion operator
//     operator string () {
//         cout << "conversion operator" << endl;
//         return to_string(x);
//     }
// };

// int main() {
//     Int obj(3);

//     // // no error here because conversion operator does the work
//     // // however, it can be hard to know what is happenning here.
//     // // alternative is static_cast
//     // string str1 = obj;
//     // obj = 20;

// //     // alternative (also calls conversion operator)
// //     string str2 = static_cast<string>(obj);
// //     obj = static_cast<Int>(30);
// }


// case:3. static_cast is more restrictive than C-Style.
// e.g. char* to int* is allowed in c-style but not in static_cast.
// this is dangerous because char holds 1 byte and int holds 4 bytes.
// int main(){
//     // // C-STYLE: pass at compile but fail at run time, (dangerous.)
//     // char c;
//     // int *p = (int *)&c;
//     // *p = 5;

//     // cout << "hello" << endl;
//     // cout << c << endl;
//     // cout << *p << endl;
    
//     // static_cast: compile time error
//     // char c;
//     // int *ip = static_cast<int *>(&c);

//     return 0;
// }


// case 4: static_casts prevents cast from child to private parent pointer

// class Parent{};
// class Child: private Parent {};

// int main() {
//     Child c;

//     // c style allows you
//     Parent *p1 = (Parent *)&c;
//     // // static_cast does not
//     Parent *p2 = static_cast<Parent *>(&c);
// }


// case 5: static_cast should be preferred when converting from or to void*


int main() {
    int i = 10;

    void *v = static_cast<void *>(&i);
    int *ip = static_cast<int *>(v);

    return 0;
}