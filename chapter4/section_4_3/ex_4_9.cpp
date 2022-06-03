#include <iostream>

using namespace std;

int main(){

const char *cp = "Hello World";

cout << cp << endl;
cout << *cp << endl;

// cp is a pointer that's not a null pointer. It's evaluated to true.
// *cp is a const char that's a nonzero value. It's evaluated to true.
// if (cp && *cp) {
//     cout << "executed" << "\n";
// }

}