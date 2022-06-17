//1. Single Inheritance
//   Child Class with only one Parent Class.

#include <iostream>

using namespace std;

class Vehicle{
public:
    void driveVehicle() { cout << "Driving" << endl; }
};

class Car : public Vehicle{
public:
    void getTyres() { cout << "Four Tyres" << endl; }
};

int main() {
    Car c;
    
    c.getTyres();
    c.driveVehicle();

    return 0;
}