// bit fields are used to reduce sizes of classes/structs

#include <iostream>

using namespace std;

// // No bit fields. if used for main() program Date will be size 12 bytes.
// struct Date{
//     // day is 1-31. need 5 bits to store 31.
//     unsigned int d;
//     // month is 1-12. need 4 bits to store 12.
//     unsigned int m;
//     unsigned int y;
// };

// With bit fields. if used for main() program Date will be size 8 bytes.
struct Date{
    // day is 1-31. need 5 bits to store 31.
    unsigned int d : 5;
    // month is 1-12. need 4 bits to store 12.
    unsigned int m : 4;
    // y needs 12 bits (2048).
    unsigned int y;

    // (largest data type is int which is 4 bytes.) 
    // d and m will be packed into a single 4 byte slot, since they are defined to fit.
    // y will be packed into another 4 byte slot.
    // total size 8 bytes.
};

int main() {
    Date d;
    d.d = 8;
    d.m = 8;
    d.y = 1989;

    cout << d.d << "/" << d.m << "/" << d.y << endl;
    cout << sizeof(Date) << endl;
    return 0;
}