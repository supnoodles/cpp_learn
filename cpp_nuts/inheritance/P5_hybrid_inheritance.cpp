// Hybrid Inheritance 
// Combination of multiple and heirarichal inheritance.

#include <iostream>

using namespace std;

// 
class Student{
public:
    void studying() { cout << "I am studying" << endl; }
};

class Male{};
class Female{};
class Boy: public Student, public Male{};
class Girl: public Student, public Female{};


int main(){
    Boy ram;
    ram.studying();

    Girl sita;
    sita.studying();
    
    return 0;
};

