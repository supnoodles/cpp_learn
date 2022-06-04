#include <iostream>

using namespace std;

// reference parameters
void swap_ints(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 5, y = 10;
    swap_ints(x, y);

    cout << " x = " << x << endl;
    cout << " y = " << y << endl;
    
    // ex 6.13 
    // void f(T) has parameter of type T
    // void f(T&) has parameter of reference to a type T
}
