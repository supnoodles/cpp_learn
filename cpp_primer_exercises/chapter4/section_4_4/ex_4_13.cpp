#include <iostream>

using namespace std;

int main(){

    int i;
    double d;

    // OK: i is 3. this then forces d to be 3 even though it's a double.
    // d = i = 3.5;
    // cout << d << endl;
    // cout << i << endl;

    // d = 3.5. then i is 3 because its type int and is converted down.
    // i = d = 3.5;
    // cout << d << endl;
    // cout << i << endl;
}