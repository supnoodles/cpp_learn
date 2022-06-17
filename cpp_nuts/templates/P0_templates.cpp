/*
1. There are wto places where can apply templates.
   a. function templates
   b. class templates
2. We pass data type as parameter to function or class
*/

#include <iostream>

using namespace std;

template <typename T>
T getMax(T x, T y){
    return x > y ? x : y;
}

int main() {
    int x = 18, y = 20;
    char c1 = 'a', c2 = 'x';

    cout << getMax(x, y) << endl;
    cout << getMax(c1, c2) << endl;

    return 0;
}