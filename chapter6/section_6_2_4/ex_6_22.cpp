#include <vector>
#include <iostream>

using namespace std;

void swap_int_ptrs(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int x = 10, y = 5;
    int *x_ptr = &x, *y_ptr = &y;

    swap_int_ptrs(x_ptr, y_ptr);

    cout << " x = " << *x_ptr;
    cout << " y = " << *y_ptr;
}