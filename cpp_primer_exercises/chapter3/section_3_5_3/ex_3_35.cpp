#include <iostream>

using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    int *beg = begin(arr);
    int *last = end(arr);
    int i = 0;

    while (beg != last) {
        *beg = 0;
        ++beg;
        cout << arr[i] << " ";
        ++i;
    }
}