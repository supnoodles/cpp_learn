// we can change the behaviour of operators (+,-,*,..) for user defined types (class, struct)

#include <iostream>
using namespace std;

// imagine a cartesian plane limited to integers.
class Point{
    int x;
    int y;
public:
    // Constructor
    Point(int x=0, int y=0):x{x}, y{y} {}
    // OVERLOADING BINARY OPERATORS
    Point operator + (const Point& rhs) {
        Point p;
        p.x = x + rhs.x;
        p.y = y + rhs.y;
        return p;
    }
    Point operator - (const Point& rhs) {
        Point p;
        p.x = x - rhs.x;
        p.y = y - rhs.y;
        return p;
    }

    Point& operator += (const Point& rhs) {
        this->x += rhs.x;
        this->y += rhs.y;
        return *this;
    }
    // OVERLOADING UNARY OPERATORS
    Point operator - (){
        return Point(-x, -y);
    }

    void print() {
        cout << "x: " << x << " y: " << y << endl;
    }
};

int main() {
    Point p1(1, 2), p2(3, 4);

    // Overloaded Binary Operators
    Point p3 = p1 + p2;
    p3.print();

    Point p4 = p1 - p2;
    p4.print();

    Point p5;
    p5 += p1;
    p5.print();

    // Overloaded Unary Operators
    Point p6 = -p1;
    p6.print();

    return 0; 
}