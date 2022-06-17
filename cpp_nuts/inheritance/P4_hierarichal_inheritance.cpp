//   Heirarichal Inheritance
//   Multiple Child Classes coming from same Parent Class

#include <iostream>

using namespace std;

// example 1
class Human{
public:
    void breathing() { cout << "I am breathing" << endl; }
};
class Youtuber: public Human{};
class Engineer: public Human{};
class Doctor:   public Human{};

int main() {
    Youtuber y;
    y.breathing();

    return 0;
}