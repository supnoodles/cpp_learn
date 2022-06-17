// collection of unique keys (no duplicates), sorted by keys
// like python set, but sorted.

/*
1. if we want to store user defined data type in set, then we'll have to provide compare
   function so that set can store them in sorted order.
2. we can pass the order of sorting while constructing object
*/

#include <iostream>
#include <set>
#include <string>

using namespace std;


// // example 1
// int main() {

//     set<int> set1 = {2,1, 3, 4, 5, 1 ,2 ,3 ,4 5};

//     auto first = set1.begin();

//     for (int i = 0; i < set1.size(); ++i) {
//         cout << *(first++) << endl;
//     }
// }

// example 2

class Person{
public:
    float age;
    string name;
    // compare operator
    bool operator < (const Person &rhs) const { return this->age < rhs.age; }
};


int main() {
    set<Person> set1 = {{30, "Rupesh"}, {25, "Hitesh"}, {22, "John"}};

    auto first = set1.begin();

    for (int i = 0; i < set1.size(); ++i) {
        cout << (*first).age << " " << (*first).name << endl;
        ++first;
    }
}