#include <iostream>
#include <string>

using namespace std;

class Person{
    string name;
    string address;
public:
    Person(string x, string y){name = x;address = y;}
    string getName() const { return name; }
    string getAddress() const { return address; }
};

int main(){
    Person person1("Jimmy", "600 somewhere");
    cout << person1.getName() << " " << person1.getAddress() << endl;
}