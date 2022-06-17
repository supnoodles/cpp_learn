#include <iostream>
#include <string>

using namespace std;

class Person{
    string name;
    string address;
public:
    // constructors
    Person(){name = "";address = "";}
    Person(string x, string y){name = x;address = y;}
    // get methods
    string getName() const { return name; }
    string getAddress() const { return address; }
    // combine two person objects into one already existing
    Person& combine(const Person &rhs){
        name += rhs.name;
        address += rhs.address;
        return *this;
    }
    // add 2 person objects into a new person object
    Person add(const Person &lhs, const Person &rhs){
        Person newPerson = lhs;
        newPerson.combine(rhs);
        return newPerson;
    }
    // to ensure private data members are accesible outside
    friend istream& read(istream &, Person &);
};

// read input for new person object
istream &read(istream &is, Person &guy){
    is >> guy.name >> guy.address;
    return is;
}
// print a person object's attributes
void print(ostream &os, const Person &guy){
    os << guy.getName() << " " << guy.getAddress() << endl;
}

int main(){

    Person person4;
    Person person5;

    // the condition passes if both person4 and person5 are able to be read.
    if ((read(read(cin, person4), person5))){
        cout << "passed" << endl;
    } else {
        cout << "failed" << endl;
    }
}