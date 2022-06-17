// overloading []
// subscript operator can not be friend function
// array subscript operator can be used to check out of bound cases

#include <iostream>
using namespace std;

// imagine a cartesian plane limited to integers.
class Point{
    int arr[2]; // x->0 y->1
public:
    // constructor
    Point(int x = 0, int y = 0) { arr[0] = x; arr[1] = y;}
    void print() { cout << "x " << arr[0] << " y " << arr[1] << endl; }
    // overloading []
    int & operator [] (int pos){
        if(pos == 0) {
            return arr[0];
        } else if (pos == 1) {
            return arr[1];
        } else {
            cout << "Out of bound case." << endl;
            exit(0);
        }
    }
};

int main() {
    Point p1(3, 4);
    p1.print();
    p1[0] = 20;
    cout << p1[0];

    return 0; 
}