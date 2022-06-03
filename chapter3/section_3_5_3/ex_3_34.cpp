#include <iostream>

using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    int *p1 = &arr[0];
    int *p2 = &arr[6];

    // p1 will point to arr[(*p1)+(*p2)-(*p1) ]
    // p1 will point to arr[(*p2)]
    // is valid if p2 is in range of array, otherwise undefined behaviour.
    p1 += p2 - p1;

    cout << *p1 << " " << *p2;
}