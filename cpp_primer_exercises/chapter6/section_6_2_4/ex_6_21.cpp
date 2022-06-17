#include <vector>
#include <iostream>

using namespace std;

int largest_int(int x, int* ptr){
    return x > *ptr ? x : *ptr;
}

int main(){
    int x = 10;
    int y = 5;

    cout << largest_int(x, &y);
}