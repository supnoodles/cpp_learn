#include <iostream>

using namespace std;

union myUnion{
    int x; // 4 bytes
    short y; // 2 bytes
    char c; // 1 byte

    // largest is 4 bytes, so union is a mem location of 4 bytes
    // every data member will be a mem location of 4 bytes
};

int main(){
    myUnion union1;
    union1.x = 36215;
    // union1.c = 'A';

    // cout << union1.c << endl;
    cout << union1.x << endl;
}