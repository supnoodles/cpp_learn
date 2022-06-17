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
    friend istream &read(istream &, Person &);
};

// read input for new person object
istream& read(istream &is, Person &guy){
    is >> guy.name >> guy.address;
    return is;
}
// print a person object's attributes
ostream &print(ostream &os, const Person &guy){
    os << guy.getName() << " " << guy.getAddress() << endl;
    return os;
}

int main(){
    // // test add & combine
    // Person person1("Jimmy", "600 somewhere street");
    // Person person2("Bob", "900 somewhere street");
    // Person person3 = person3.add(person1, person2);

    // cout << person1.getName() << " " << person1.getAddress() << endl;
    // cout << person2.getName() << " " << person2.getAddress() << endl;
    // cout << person3.getName() << " " << person3.getAddress() << endl;

    // test read
    Person person4;
    read(cin, person4);
    print(cout, person4);
}